#pragma once

#include "AbstractFile.h"
#include <string>

class TextFile : public AbstractFile
{
public:
	TextFile(const std::string& name);
	std::string GetName() const;

	void Add(AbstractFile* file) override;
	void Remove(AbstractFile* file) override;
	AbstractFile* GetChild(int i) override;
	void KillVirus() override; //É±¶¾
private:
	std::string m_Name;
};