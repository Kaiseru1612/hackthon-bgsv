#include <iostream>
#include <fstream>
#include "FileHandler.h"

using namespace std;

class Filehandler{
    public:
        void ReadRequirement(std::string filename, int *res){
	        fstream my_file;
	        my_file.open(filename, ios::in);
	        if (!my_file) {
		    cout << "No such file";
	        }
	        else {
		    char ch;
            int idx = 0;
		    while (1) {
			    my_file >> ch;
			    if (my_file.eof())
				    break;

                res[idx]= int(ch);
                idx++;
			    cout << ch << '\n';

		        }

	        }
	        my_file.close();
        }
};