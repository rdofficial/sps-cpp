# The Makefile - SPS [C++]
#
# Author : Rishav Das
# Created on : May 7, 2021
#
# Last modified by : -
# Last modified on : -
#
#

CC = gcc
CFLAGS = -x c++ -lstdc++
TARGET = bin/sps

all : $(TARGET)

$(TARGET) : src/*.cpp
	$(CC) src/*.cpp -I include/ $(CFLAGS) -o $(TARGET) 
