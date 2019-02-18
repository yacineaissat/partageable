#pragma once
#ifndef SHA3_H
#define SHA3_H
#define SHA3_VERSION_STR "1,0,0,0"
#define SHA3_VERSION 1,0,0,0
#ifdef HASH_EXPORTS
#define HASH_INTERFACE __declspec(dllexport)
#else
#define HASH_INTERFACE __declspec(dllimport)
#endif
#define HASH_ERR_BAD_PARAMETER 1
#define HASH_SUCCESS 0


#include <cstdint>
#include <cstdlib>

	struct ethash_h256;

#define decsha3(bits) \
	int sha3_##bits(uint8_t*, size_t, uint8_t const*, size_t);

	decsha3(256)
		decsha3(512)

		static inline void SHA3_256(uint8_t* ret, const uint8_t * data, size_t const size)
	{
		sha3_256(ret, 32, data, size);
	}
#endif

#include <string>
	std::string sha3_256(std::string input);
