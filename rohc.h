#pragma once

#include <cstdint>
#include <map>
#include <vector>

// base class for ROHC compression schemas
class ROHCScheme
{
	virtual ~ROHCScheme() = 0;
	virtual void decompress(uint8_t* in, int in_length, uint8_t* out, int* out_length) = 0;
};

// 0x02
class ROHCIpUdp : public ROHCScheme
{
	void decompress(uint8_t* in, int in_length, uint8_t* out, int* out_length) override
	{}
};

// 0x03
class ROHCIpEsp : public ROHCScheme
{
	void decompress(uint8_t* in, int in_length, uint8_t* out, int* out_length) override
	{}
};


// 0x04
class ROHCIpOnly: public ROHCScheme
{
	void decompress(uint8_t* in, int in_length, uint8_t* out, int* out_length) override
	{}
};

// 0x06
class ROHCIpTcp : public ROHCScheme
{
	void decompress(uint8_t* in, int in_length, uint8_t* out, int* out_length) override
	{}
};

// 0x0F
class ROHCIpPbp : public ROHCScheme
{
	void decompress(uint8_t* in, int in_length, uint8_t* out, int* out_length) override
	{}
};

class ROHCDecompressor
{
	void decompress(uint8_t* in, int in_length, uint8_t* out, int out_length)
	{
		//
	}
private:
	std::map<uint16_t, ROHCScheme*> instances;
};