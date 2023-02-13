#include "SHA256EncryptFacade.h"

SHA256EncryptFacade::SHA256EncryptFacade()
{
	m_Reader = new FileReader();
	m_Encrypt = new SHA256Encrypt();
	m_Writer = new FileWriter();
}

void SHA256EncryptFacade::FileEncrypt(const std::string& filepath, std::string& dst)
{
	std::string src = m_Reader->Read(filepath);
	dst = m_Encrypt->ENCRYPT(src);
	m_Writer->Write(dst, filepath);
}
