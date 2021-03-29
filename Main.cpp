#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	string mahasiswa;
	ifstream file("daftar-nama.txt");
	
	ofstream file_temp;
	file_temp.open("4210191002_Irfan Muhammad.csv");
		
	string blank = " ";
	int index = 0;
	string simpanMahasiswa[28];
	
	
	if(file.is_open())
	{
		while(getline(file, mahasiswa))
		{			
			simpanMahasiswa[index] = mahasiswa;		
			index++;			
		}		
		
		file.close();		
		index = 0;
		
		while(index != 28)
		
		{
			file_temp << simpanMahasiswa[index] << endl;
			index++;
		}
		
		file_temp.close();
		cout << "File csv sudah dibuat" << endl << endl;
	}
	else
	
		cout << "File belum dibuat" << endl;
		
	system("PAUSE");
	
	file_temp.open("4210191002_Irfan Muhammad.csv");
	index = 28;
	
	if(file_temp.is_open())
	{
		while(index != 1)
		{
			file_temp << simpanMahasiswa[index] << endl;
			index--;
		}
	}
	else
	file_temp.close();
	
	cin.get();
	return 0;
}
