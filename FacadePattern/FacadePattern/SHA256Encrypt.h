#pragma once
#include <iostream>

class SHA256Encrypt
{
public:
	SHA256Encrypt();
	std::string ENCRYPT(const std::string& src);
};