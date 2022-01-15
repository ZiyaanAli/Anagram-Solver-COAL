#include <bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include<fstream>

using namespace std;

string ans,input;

long int check(){
    long int count=0;
	ifstream read;
	fstream write;
	write.open("z.txt",ios::out);
	read.open("Dictionary.txt",ios::in);
	if(!read.is_open())
	{
		cout<<"\n\n\t Cannot find Dictionary !!!\n";
	}
	else{
		read>>input;
		while(!read.eof()){
			if(input[0]=='z'){
                write<<input<<endl;
                count++;
			}
			read>>input;
		}
		read.close();
	}
	write<<count<<endl;
	return count;
}
int main(){
    cout<<check()<<endl;
}
