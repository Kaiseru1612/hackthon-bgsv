#include <iostream>
#include <fstream>
#include "FileHandler.h"

using namespace std;

class Filehandler{
    public:
        void ReadRequirement(std::string filename){
	        fstream my_file;
	        my_file.open(filename, ios::in);
	        if (!my_file) {
		    cout << "No such file";
	        }
	        else {
		    char ch;

		    while (1) {
			    my_file >> ch;
			    if (my_file.eof())
				    break;

			    cout << ch;
		        }

	        }
	        my_file.close();
        }

        void Tokenizer(){

        }
};