#include "ImageFile.h"
#include <iostream>

ImageFile::ImageFile(const std::string& name)
	: m_Name(name)
{

}

std::string ImageFile::GetName() const
{
	return m_Name;
}

void ImageFile::Add(AbstractFile* file)
{
	std::cout << "图片文件不能再添加文件！" << std::endl;
}

void ImageFile::Remove(AbstractFile* file)
{
	std::cout << "图片文件不能再移除文件！" << std::endl;
}

AbstractFile* ImageFile::GetChild(int i)
{
	std::cout << "图片文件不能再打开子文件！" << std::endl;
	return nullptr;
}

void ImageFile::KillVirus()
{
	std::cout << "正在杀毒图片文件: " << m_Name << std::endl;
}

