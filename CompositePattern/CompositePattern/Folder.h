#pragma once

#include "AbstractFile.h"
#include <string>
#include <vector>

class Folder : public AbstractFile
{
public:
	Folder(const std::string& name);
	std::string GetName();

	void Add(AbstractFile* file) override;
	void Remove(AbstractFile* file) override;
	AbstractFile* GetChild(int i) override;
	void KillVirus() override; //É±¶¾
private:
	std::string m_Name;
	std::vector<AbstractFile*> m_FileList;
};