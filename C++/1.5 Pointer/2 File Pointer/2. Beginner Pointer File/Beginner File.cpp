#include<iostream>
#include<fstream>
using namespace std;

int main (){

ifstream fin;
fin.open("file.txt");

string *pname,nama;
int *page,age;
string course;
string *pcourse;

pname = &nama; 
page = &age;
pcourse = &course;


fin>>*pname>>*page;
getline(fin,*pcourse);

ofstream fout;
fout.open("output.txt");

fout<<nama<<"  "<<age<<"  "<<course;

fin.close();
fout.close();

return 0;
}
