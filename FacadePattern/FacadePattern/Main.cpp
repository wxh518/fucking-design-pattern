#include <iostream>
#include "MD5EncryptFacade.h"
#include "SHA256EncryptFacade.h"

int main()
{
	std::cout << "test Facade Pattern!" << std::endl;

	MD5EncryptFacade md5Encrypt;
	std::string md5EncryptDst;
	md5Encrypt.FileEncrypt("MD5Â·¾¶", md5EncryptDst);

	std::cout << "--------------------" << std::endl;

	SHA256EncryptFacade sha256Encrypt;
	std::string sha256EncryptDst;
	sha256Encrypt.FileEncrypt("SHA256Â·¾¶", sha256EncryptDst);

	std::cin.get();
	return 0;
}