#include <iostream>
#include <fstream>
#include "FileHandler.h"

using namespace std;

class Filehandler{
    public:
        void ReadRequirement(std::string filename, int *res){
	        ifstream my_file;
	        my_file.open(filename, ios::in);
	        if (!my_file) {
		    cout << "No such file";
	        }
	        else {
		    char ch;
            int idx = 0;
		    while (1) {
			    my_file >> ch;
                res[idx]= ch - '0';
                idx++;
			    if (my_file.eof())
				    break;
		        }
	        }
	        my_file.close();
        }
        void WriteFile(std::string fname, std::string content){
            ofstream myfile (fname);
            myfile << content;
            myfile.close();
        }
};