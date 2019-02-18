#pragma once
#ifndef HASH_H
#define HASH_H

#include <string>

#ifdef HASH_EXPORTS
	#define HASH_INTERFACE __declspec(dllexport)
#else
	#define HASH_INTERFACE __declspec(dllimport)
#endif


HASH_INTERFACE  std::string hash(std::string input);
HASH_INTERFACE  std::string hashName();
HASH_INTERFACE  std::string version();

#endif