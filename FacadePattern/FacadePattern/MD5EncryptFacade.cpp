#include "MD5EncryptFacade.h"

MD5EncryptFacade::MD5EncryptFacade()
{
	m_Reader = new FileReader();
	m_Encrypt = new MD5Encrypt();
	m_Writer = new FileWriter();
}

void MD5EncryptFacade::FileEncrypt(const std::string& filepath, std::string& dst)
{
	std::string src = m_Reader->Read(filepath);
	dst = m_Encrypt->ENCRYPT(src);
	m_Writer->Write(dst, filepath);
}
