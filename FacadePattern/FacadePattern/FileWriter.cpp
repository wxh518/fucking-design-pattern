#include "FileWriter.h"
#include <iostream>

FileWriter::FileWriter()
{

}

void FileWriter::Write(const std::string& encryptString, const std::string& filepath)
{
	std::cout << "��" << encryptString << "�����ļ�" << filepath << "�У�" << std::endl;
}
