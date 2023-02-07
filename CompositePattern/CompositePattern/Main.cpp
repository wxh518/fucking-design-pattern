#include <iostream>
#include "ImageFile.h"
#include "TextFile.h"
#include "VideoFile.h"
#include "Folder.h"

int main()
{
	std::cout << "test Composite Pattern..." << std::endl;

	AbstractFile* imagefile1 = new ImageFile("图片文件1");
	AbstractFile* imagefile2 = new ImageFile("图片文件2");
	AbstractFile* imagefile3 = new ImageFile("图片文件3");

	AbstractFile* textfile1 = new TextFile("文本文件1");
	AbstractFile* textfile2 = new TextFile("文本文件2");
	AbstractFile* textfile3 = new TextFile("文本文件3");

	AbstractFile* videofile1 = new VideoFile("视频文件1");
	AbstractFile* videofile2 = new VideoFile("视频文件2");
	AbstractFile* videofile3 = new VideoFile("视频文件3");

	AbstractFile* totalfolder = new Folder("总文件夹");
	AbstractFile* imagefolder = new Folder("图片文件夹");
	AbstractFile* textfolder = new Folder("文本文件夹");
	AbstractFile* videofolder = new Folder("视频文件夹");

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