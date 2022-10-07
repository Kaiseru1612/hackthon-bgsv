#include "task.hpp"
#include "Reader.hpp"

class Reader
{
    private:
        task mListTask[100];
    public:
        void ReadFile(){
            ifstream my_file;
            my_file.open(file_name, ios::in);
            if (!my_file) {
            cout << "No such file";
            }
            else {
            char ch;
            int idx = 0;
            std::string string_buffer;
            while (getline(my_file, string_buffer)) {
                cout << string_buffer << '\n';
            }
            my_file.close();
            }
        }
        task *GetListTask(){
            return mListTask;
        }
};