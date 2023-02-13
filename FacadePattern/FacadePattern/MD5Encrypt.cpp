#include "MD5Encrypt.h"
#include <iostream>

MD5Encrypt::MD5Encrypt()
{

}

std::string MD5Encrypt::ENCRYPT(const std::string& src)
{
	std::cout << "用MD5方式加密源字符串！"<< std::endl;
	return "MD5加密后的字符串";
}
