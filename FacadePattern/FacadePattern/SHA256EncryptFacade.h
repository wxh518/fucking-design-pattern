#pragma once
#include "AbstractEncryptFacade.h"
#include "FileReader.h"
#include "SHA256Encrypt.h"
#include "FileWriter.h"

class SHA256EncryptFacade : public AbstractEncryptFacade
{
public:
	SHA256EncryptFacade();

	void FileEncrypt(const std::string& filepath, std::string& dst) override;

private:
	FileReader* m_Reader;
	SHA256Encrypt* m_Encrypt;
	FileWriter* m_Writer;
};