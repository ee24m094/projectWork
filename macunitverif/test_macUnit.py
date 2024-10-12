import os
import pathlib import Path


import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb.binary import BinaryValue

from model_counter import *

#Read binary value
def read_binary_file(filename, bitwidth):
	read = []
	with open(filename, 'r') as f:
		for line in f:
			value = BinaryValue(line.strip(), n_bits=bitwidth)
			data.append(value)
	return data

@cocotb.test()
async def test_macunit(dut):

	"""Test to check MacUnit"""

	#Reading inputs from binary files
	a_Data = read_binary_file("A_binary.txt", 8) 
	b_Data = read_binary_file("A_binary.txt", 8)
	c_Data = read_binary_file("C_binary.txt", 32)
	expected_MacOut = read_binary_file("MAC_binary.txt", 32)

	num_Tests = len(A_data)
	passed_Tests = 0  	

	for i in range(num_Tests):
		dut.a <= int(a_Data[i].signed_integer)
		dut.b <= int(b_Data[i].signed_integer)
		dut.C <= int(c_Data[i].signed_integer)
		
		#Wait 
		await RisingEdge(dut.clk)
		
		#Get the Result
		mac_Result = dut.MAC.value.signed_integer
		
		#Compare the results
		expected_Out = expected_MacOut[i].signed_integer
		tolerance = 2
		
		if abs(mac_Result - expected_Out) <= tolerance:
			passed_Tests +=1
		else:
			cocotb.log.error(f"Test{i} failed: a={a_Data[i], b={b_Data[i]}, c={c_Data[i]}," f"Expected={expected_Out}, Got={mac_Result}")

	#summary
	cocotb.log.info(f"Passed {passed_Tests}/{num_Tests} tests")
	assert passed_Tests == num_Tests, "Some tests failed"


def bf16_to_fp32(binary_str):
	#Unpack 16-bit bfloat as 32-bit float
	bf16 = int(binary_str, 2)
	return struct.unpack('>f', struct.pack('>I', bf16 << 16))[0]
