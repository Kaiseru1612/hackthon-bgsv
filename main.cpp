#include "FileHandler.cpp"
#include <iostream>

int main(){
    Filehandler filereader;
    int* a = new int(100);
    filereader.ReadRequirement("requirement.txt", a);
    for (int i = 0; i < 7; i++) {
        cout << a[i] << '\n';
    }
    delete a;
    return 0;
}