#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin("data.tx");
	ofstream fout("out.txt");

	char ch[50];
	int i = 50;
	// agr fin.getline ko while condition se pehle likheinge to condition ke mutabik pehli line ko skip krdega"
	while (fin.getline(ch, 50)) {
		// sari lines ko one by one read karega 
			fout << ch;
			cout << ch;

		
	}
	fin.close();
	fout.close();
	return 0;
}
