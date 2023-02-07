#pragma once

class AbstractFile
{
public:
	virtual void Add(AbstractFile* file) {};
	virtual void Remove(AbstractFile* file) {};
	virtual AbstractFile* GetChild(int i) { return nullptr; };
	virtual void KillVirus() {}; //É±¶¾
};