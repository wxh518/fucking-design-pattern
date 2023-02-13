#pragma once
#include <string>

class FileReader
{
public:
	FileReader();
	std::string Read(const std::string& filepath);
};