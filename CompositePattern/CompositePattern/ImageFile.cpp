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
	std::cout << "ͼƬ�ļ�����������ļ���" << std::endl;
}

void ImageFile::Remove(AbstractFile* file)
{
	std::cout << "ͼƬ�ļ��������Ƴ��ļ���" << std::endl;
}

AbstractFile* ImageFile::GetChild(int i)
{
	std::cout << "ͼƬ�ļ������ٴ����ļ���" << std::endl;
	return nullptr;
}

void ImageFile::KillVirus()
{
	std::cout << "����ɱ��ͼƬ�ļ�: " << m_Name << std::endl;
}

