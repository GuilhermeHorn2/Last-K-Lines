#include <iostream>
#include <string.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void print_last_k_lines_1(string file_name,int k);
void print_last_k_lines_2(string file_name,int k);

int main()
{
	/*  || \ */




	return 0;
}


void print_last_k_lines_1(string file_name,int k){

	ifstream inFile;
	inFile.open(file_name);
	if(inFile.fail()){
		cout << "Error" << endl;
		return;
	}

	vector<string> lines;
	string line;

	while(getline(inFile,line)){
		lines.push_back(line);
	}

	for(int i = k;i < lines.size()-1;i++){
		cout << lines[i] << endl;
	}

}

void print_last_k_lines_2(string file_name,int k){

	ifstream read_file;
	read_file.open(file_name);
	if(read_file.fail()){
		cout << "Error" << endl;
	}

	string line;
	int i = 0;
	while(getline(read_file,line)){
		if(i < k){
			i++;
			continue;
		}
		cout << line << endl;
		i++;
	}


}
