#include <iostream>

using namespace std;

void main()
{
	int choice;
	system("color E");
	do 
	{
		system("cls");
		cout << "NTFS  Converter. Created by Jafar Yormakhmadzoda" << endl;
		cout << "The current program change file system of flash memory or hard disk" << endl << endl;
		cout << "Choose Disk:" << endl;
		cout << "1 - D:" << endl << "2 - E:" << endl << "3 - F:" << endl;
		cout << "4 - G:" << endl << "5 - H:" << endl << "6 - I:" << endl << endl;
		cout << "Enter the number of disk:   ";
		try{
			cin >> choice;
		}
		catch(...)
		{
			continue;
		}
	} while (choice > 6);
	
	switch (choice)
	{
	case 1:
		system("convert D: /fs:ntfs /nosecurity /x");
		break;
	case 2:
		system("convert E: /fs:ntfs /nosecurity /x");
		break;
	case 3:
		system("convert F: /fs:ntfs /nosecurity /x");
		break;
	case 4:
		system("convert G: /fs:ntfs /nosecurity /x");
		break;
	case 5:
		system("convert H: /fs:ntfs /nosecurity /x");
		break;
	case 6:
		system("convert I: /fs:ntfs /nosecurity /x");
		break;
	}
	system("pause");
}