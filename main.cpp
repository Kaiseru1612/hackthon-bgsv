#include "FileHandler.cpp"
#include <iostream>

int main(){
    Filehandler filereader;
    int* a = new int[100];
    for (int i = 0; i < 100; i++) {
        a[i]=0;
    }
    filereader.ReadRequirement("requirement.txt", a);
    for (int i = 0; i < 7; i++) {
        cout << a[i] <<'\n';
    }
    std::string tmp_res = "";
    for (int i = 0; i < 7; i++) {
        tmp_res += to_string(a[i]) + "\n";
    }
    filereader.WriteFile("output.txt", tmp_res);
    delete[] a;
    return 0;
}