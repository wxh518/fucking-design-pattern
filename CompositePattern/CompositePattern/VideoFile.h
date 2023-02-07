#pragma once

#include "AbstractFile.h"
#include <string>

class VideoFile : public AbstractFile
{
public:
	VideoFile(const std::string& name);
	std::string GetName() const;

	void Add(AbstractFile* file) override;
	void Remove(AbstractFile* file) override;
	AbstractFile* GetChild(int i) override;
	void KillVirus() override; //É±¶¾
private:
	std::string m_Name;
};