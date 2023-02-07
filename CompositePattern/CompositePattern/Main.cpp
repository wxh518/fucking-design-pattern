#include <iostream>
#include "ImageFile.h"
#include "TextFile.h"
#include "VideoFile.h"
#include "Folder.h"

int main()
{
	std::cout << "test Composite Pattern..." << std::endl;

	AbstractFile* imagefile1 = new ImageFile("ͼƬ�ļ�1");
	AbstractFile* imagefile2 = new ImageFile("ͼƬ�ļ�2");
	AbstractFile* imagefile3 = new ImageFile("ͼƬ�ļ�3");

	AbstractFile* textfile1 = new TextFile("�ı��ļ�1");
	AbstractFile* textfile2 = new TextFile("�ı��ļ�2");
	AbstractFile* textfile3 = new TextFile("�ı��ļ�3");

	AbstractFile* videofile1 = new VideoFile("��Ƶ�ļ�1");
	AbstractFile* videofile2 = new VideoFile("��Ƶ�ļ�2");
	AbstractFile* videofile3 = new VideoFile("��Ƶ�ļ�3");

	AbstractFile* totalfolder = new Folder("���ļ���");
	AbstractFile* imagefolder = new Folder("ͼƬ�ļ���");
	AbstractFile* textfolder = new Folder("�ı��ļ���");
	AbstractFile* videofolder = new Folder("��Ƶ�ļ���");

	imagefolder->Add(imagefile1);
	imagefolder->Add(imagefile2);
	imagefolder->Add(imagefile3);

	textfolder->Add(textfile1);
	textfolder->Add(textfile2);
	textfolder->Add(textfile3);

	videofolder->Add(videofile1);
	videofolder->Add(videofile2);
	videofolder->Add(videofile3);

	totalfolder->Add(imagefolder);
	totalfolder->Add(textfolder);
	totalfolder->Add(videofolder);

	totalfolder->KillVirus();

	std::cin.get();
	return 0;
}