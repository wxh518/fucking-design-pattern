#pragma once
#include <string>

class FileWriter
{
public:
	FileWriter();
	void Write(const std::string& encryptString, const std::string& filepath);
};