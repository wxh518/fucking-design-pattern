#include "Folder.h"
#include <iostream>

Folder::Folder(const std::string& name)
	: m_Name(name)
{

}

std::string Folder::GetName()
{
	return m_Name;
}

void Folder::Add(AbstractFile* file)
{
	m_FileList.push_back(file);
}

void Folder::Remove(AbstractFile* file)
{
	auto ite = std::find(m_FileList.begin(), m_FileList.end(), file);
	if (ite != m_FileList.end())
		m_FileList.erase(ite);
}

AbstractFile* Folder::GetChild(int i)
{
	if (i < m_FileList.size()) return m_FileList[i];
	return nullptr;
}

void Folder::KillVirus()
{
	std::cout << "正在杀毒文件夹: " << m_Name << std::endl;
	for (const auto& x : m_FileList)
	{
		x->KillVirus();
	}
}
