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
	std::cout << "视频文件不能再添加文件！" << std::endl;
}

void VideoFile::Remove(AbstractFile* file)
{
	std::cout << "视频文件不能再移除文件！" << std::endl;
}

AbstractFile* VideoFile::GetChild(int i)
{
	std::cout << "视频文件不能再打开子文件！" << std::endl;
	return nullptr;
}

void VideoFile::KillVirus()
{
	std::cout << "正在杀毒视频文件: " << m_Name << std::endl;
}
