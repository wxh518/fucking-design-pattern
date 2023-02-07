#include "TextFile.h"
#include <iostream>

TextFile::TextFile(const std::string& name)
	: m_Name(name)
{

}

std::string TextFile::GetName() const
{
	return m_Name;
}

void TextFile::Add(AbstractFile* file)
{
	std::cout << "文本文件不能再添加文件！" << std::endl;
}

void TextFile::Remove(AbstractFile* file)
{
	std::cout << "文本文件不能再移除文件！" << std::endl;
}

AbstractFile* TextFile::GetChild(int i)
{
	std::cout << "文本文件不能再打开子文件！" << std::endl;
	return nullptr;
}

void TextFile::KillVirus()
{
	std::cout << "正在杀毒文本文件: " << m_Name << std::endl;
}
