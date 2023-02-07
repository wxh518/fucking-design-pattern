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
	std::cout << "�ı��ļ�����������ļ���" << std::endl;
}

void TextFile::Remove(AbstractFile* file)
{
	std::cout << "�ı��ļ��������Ƴ��ļ���" << std::endl;
}

AbstractFile* TextFile::GetChild(int i)
{
	std::cout << "�ı��ļ������ٴ����ļ���" << std::endl;
	return nullptr;
}

void TextFile::KillVirus()
{
	std::cout << "����ɱ���ı��ļ�: " << m_Name << std::endl;
}
