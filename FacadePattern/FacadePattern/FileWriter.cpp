#include "FileWriter.h"
#include <iostream>

FileWriter::FileWriter()
{

}

void FileWriter::Write(const std::string& encryptString, const std::string& filepath)
{
	std::cout << "将" << encryptString << "存入文件" << filepath << "中！" << std::endl;
}
