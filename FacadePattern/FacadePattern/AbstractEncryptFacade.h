#pragma once
#include <string>

class AbstractEncryptFacade
{
public:
	AbstractEncryptFacade() {}
	virtual ~AbstractEncryptFacade() {}
	virtual void FileEncrypt(const std::string& filepath, std::string& dst) {}
};