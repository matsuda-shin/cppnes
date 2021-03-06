#include <stdio.h>
#include "vmapper.h"

typedef Mapper super;

VMapper::VMapper() {
}

VMapper::~VMapper() {
}

void VMapper::setPROM(uint8_t* base, size_t size) {
	printf("Mapper::setPROM(%p, %ld)\n", base, size);
	super::setPROM(base, size);
}

void VMapper::setCROM(uint8_t* base, size_t size) {
	printf("Mapper::setCROM(%p, %ld)\n", base, size);
	super::setCROM(base, size);
}

void VMapper::setNo(uint8_t no) {
	printf("Mapper::setNo(%d)\n", no);
	super::setNo(no);
}

uint8_t VMapper::read1Byte(uint16_t addr) {
	printf("Mapper::read1Byte(%04x)", addr);
	uint8_t ret = super::read1Byte(addr);
	printf(" => %02X\n", ret);
	return ret;
}

uint16_t VMapper::read2Bytes(uint16_t addr) {
	printf("Mapper::read2Bytes(%04x)", addr);
	uint16_t ret = super::read2Bytes(addr);
	printf(" => %04x\n", ret);
	return ret;
}

void VMapper::write1Byte(uint16_t addr, uint8_t val) {
	printf("Mapper::write1Byte(%04x, %02x)\n", addr ,val);
	super::write1Byte(addr, val);
}

void VMapper::push2Bytes(uint16_t addr, uint16_t val) {
	printf("Mapper::push2Bytes(%04x, %04x)\n", addr ,val);
	super::push2Bytes(addr, val);
}

uint16_t VMapper::pop2Bytes(uint16_t addr) {
	uint16_t ret = super::pop2Bytes(addr);
	printf("Mapper::pop2Bytes(%04x) => %04x\n", addr, ret);
	return ret;
}

