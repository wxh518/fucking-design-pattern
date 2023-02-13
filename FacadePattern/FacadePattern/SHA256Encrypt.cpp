#include "SHA256Encrypt.h"
#include <iostream>

SHA256Encrypt::SHA256Encrypt()
{

}

std::string SHA256Encrypt::ENCRYPT(const std::string& src)
{
	std::cout << "用SHA256方式加密源字符串！" << std::endl;
	return "SHA256加密后的字符串";
}
