# This file is public domain, it can be freely copied without restrictions.
# SPDX-License-Identifier: CC0-1.0

import os
import random
import numpy as np
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge,FallingEdge
from cocotb.binary import BinaryValue
#from model_macUnit import *

async def load_A_row(dut, row, data):
	for col, value in enumerate(data):
		dut.EN_load_A_row.value=1
		await RisingEdge(dut.CLK)
		dut.load_A_row_aRow.value=value
		dut.load_A_row_rowIndex.value=row 
		await RisingEdge(dut.CLK)
		dut.EN_load_A_row.value = 0
		await FallingEdge(dut.CLK)
		
	
async def load_B_col(dut, col, data):
	for col, value in enumerate(data):
		dut.EN_load_B_col.value = 1 
		await RisingEdge(dut.CLK)
		dut.load_B_col_bCol.value=value
		dut.load_B_col_colIndex.value=col		
		await RisingEdge(dut.CLK)
		dut.EN_load_B_col.value = 0
		await FallingEdge(dut.CLK)
	
async def load_C(dut,c_Matrix):
	for i, value in enumerate(c_Matrix.flatten()):
		dut.EN_load_C.value = 1 
		await RisingEdge(dut.CLK)
		dut.load_C_cValues.value=value
		await RisingEdge(dut.CLK)
		dut.load_C_enable.value = 0
		await FallingEdge(dut.CLK)

async def get_results(dut,numrows,numcols):
	results=[]
	for i in range(numrows*numcols):
		await RisingEdge(dut.CLK)
		results.append(int(dut.get_results.value))
	return np.array(results).reshape((numrows,numcols))
	
@cocotb.test()
async def test_mmUnit_integer(dut):
    """Test to check Int mmUnit"""
    NUM_ROWS=4
    NUM_COLS=4
    
    clock = Clock(dut.CLK, 10, units="us")  # Create a 10us period clock on port clk
    # create random matrices
    A=np.random.randint(0,10,(NUM_ROWS,NUM_COLS),dtype=np.int16)
    B=np.random.randint(0,10,(NUM_ROWS,NUM_COLS),dtype=np.int16)
    C=np.random.randint(0,10,(NUM_ROWS,NUM_COLS),dtype=np.int32)
    
    #compute the expected output
    expected_output=np.dot(A,B)+C
    
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    await RisingEdge(dut.CLK)
    
    #dut.EN_load_A.value = 1
    #dut.EN_load_B.value = 1
    #dut.EN_load_C.value = 1
    #dut.EN_load_s1_or_s2.value = 0
    #dut.load_A_a.value = a_Data[i]
    #dut.load_B_b.value = b_Data[i]
    #dut.load_C_c.value = c_Data[i]
    #dut.load_s1_or_s2_sel.value = 1	
    #load matrices a,b and c
    for row in range(NUM_ROWS):
    	await load_A_row(dut,row,A[row])
    for col in range(NUM_COLS):
    	await load_B_col(dut,row,B[:,col])
    await load_C(dut,C)
    dut.EN_load_s1_or_s2.value = 0
    dut.load_s1_or_s2_sel.value = 1	
    #Trigger computation
    dut.start_computation.value=1
    await RisingEdge(dut.CLK)
    dut.start_computation.value=1
    await RisingEdge(dut.CLK)
    #wait for computation to complete
    for i in range(1,5):
    	await RisingEdge(dut.CLK)
    	#dut._log.info(f'output {int(dut.get_MAC.value.signed_integer)}')
    results=await get_results(dut,NUM_ROWS,NUM_COLS)
    assert np.array.equal(results,expected_ouput), f'Test failed:{results} != {expected_output}'
    
#    assert  expected_MacOut_Integer == Output_dut_Integer, f'Output mismatch, Expected = {expected_MacOut_Integer} DUT = {Output_dut_Integer}'

"""    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    await RisingEdge(dut.CLK)
    dut.EN_load_A.value = 1
    dut.EN_load_B.value = 1
    dut.EN_load_C.value = 1
    dut.EN_load_s1_or_s2.value = 0
    dut.load_A_a.value = -50
    dut.load_B_b.value = 40
    dut.load_C_c.value = 30
    dut.load_s1_or_s2_sel.value = 1	
    for i in range(0,5):
    	await RisingEdge(dut.CLK)
    print(int(dut.load_A_a.value.signed_integer))
    mac_Out_Model = model_macUnit(int(dut.EN_load_A.value),int(dut.EN_load_B.value),int(dut.EN_load_C.value),int(dut.EN_load_s1_or_s2.value),  int(dut.load_A_a.value.signed_integer), int(dut.load_B_b.value.signed_integer),int(dut.load_C_c.value.signed_integer), int(dut.load_s1_or_s2_sel.value));
    
    for i in range(0,5):
    	await RisingEdge(dut.CLK)
    dut._log.info(f'output {int(dut.get_MAC.value)}')
    assert int(mac_Out_Model) == int(dut.get_MAC.value.signed_integer), f'Counter Output Mismatch, Expected = {mac_Out_Model} DUT = {int(dut.get_MAC.value)}'
    for i in range(1,3):
    	await RisingEdge(dut.CLK)"""
"""
@cocotb.test()
async def test_macUnit_float(dut):
    
    
    a_Data = read_binary_file_float("testcases/bf16mac/A_binary.txt",16)
    b_Data = read_binary_file_float("testcases/bf16mac/B_binary.txt",16)
    c_Data = read_binary_file_float("testcases/bf16mac/C_binary.txt",32)
    expected_MacOut_float = read_binary_file_float1("testcases/bf16mac/MAC_binary.txt",32)
    
    num_tests_float = len(a_Data)
    
    clock = Clock(dut.CLK, 10, units="us")  # Create a 10us period clock on port clk
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    passed_tests = 0
    Output_dut_float = []
    for i in range (num_tests_float):
    	await RisingEdge(dut.CLK)

    	dut.EN_load_A.value = 1
    	dut.EN_load_B.value = 1
    	dut.EN_load_C.value = 1
    	dut.EN_load_s1_or_s2.value = 1	
    	dut.load_A_a.value = a_Data[i]
    	dut.load_B_b.value = b_Data[i]
    	dut.load_C_c.value = c_Data[i]
    	dut.load_s1_or_s2_sel.value = 1    	
    	for i in range(1,6):
    		await RisingEdge(dut.CLK)
    	#dut._log.info(f'output {dut.get_MAC.value}')
    	Output_dut_float.append(BinaryValue(str(dut.get_MAC.value)[:31]))
    assert  expected_MacOut_float == Output_dut_float, f'Output mismatch, Expected = {0} DUT = {Output_dut_float}'
    
 """
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

