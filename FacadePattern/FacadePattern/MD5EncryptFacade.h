#pragma once
#include "AbstractEncryptFacade.h"
#include "FileReader.h"
#include "MD5Encrypt.h"
#include "FileWriter.h"

class MD5EncryptFacade : public AbstractEncryptFacade
{
public:
	MD5EncryptFacade();

	void FileEncrypt(const std::string& filepath, std::string& dst) override;

private:
	FileReader* m_Reader;
	MD5Encrypt* m_Encrypt;
	FileWriter* m_Writer;
};