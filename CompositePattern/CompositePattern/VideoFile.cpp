#include "VideoFile.h"
#include <iostream>

VideoFile::VideoFile(const std::string& name)
	: m_Name(name)
{

}

std::string VideoFile::GetName() const
{
	return m_Name;
}

void VideoFile::Add(AbstractFile* file)
{
	std::cout << "��Ƶ�ļ�����������ļ���" << std::endl;
}

void VideoFile::Remove(AbstractFile* file)
{
	std::cout << "��Ƶ�ļ��������Ƴ��ļ���" << std::endl;
}

AbstractFile* VideoFile::GetChild(int i)
{
	std::cout << "��Ƶ�ļ������ٴ����ļ���" << std::endl;
	return nullptr;
}

void VideoFile::KillVirus()
{
	std::cout << "����ɱ����Ƶ�ļ�: " << m_Name << std::endl;
}
