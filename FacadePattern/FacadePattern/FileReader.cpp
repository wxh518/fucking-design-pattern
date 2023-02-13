#include "FileReader.h"
#include <iostream>

FileReader::FileReader()
{

}

std::string FileReader::Read(const std::string& filepath)
{
	std::cout << "从" << filepath << "读取到源字符串！" << std::endl;
	return "MD5源字符串";
}

