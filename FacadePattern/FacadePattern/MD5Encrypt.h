#pragma once
#include <iostream>

class MD5Encrypt
{
public:
	MD5Encrypt();
	std::string ENCRYPT(const std::string& src);
};