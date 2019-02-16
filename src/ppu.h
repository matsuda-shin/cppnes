#ifndef PPU_H
#define PPU_H

#include <cstdint>

class PPU {
public:
	PPU();
	virtual ~PPU();

public:
	virtual void setCR1(uint8_t v) {
		mCR1 = v;
	}
	virtual void setCR2(uint8_t v) {
		mCR2 = v;
	}
	virtual void clock();

protected:
	uint8_t mCR1;
	uint8_t mCR2;
};

#endif
