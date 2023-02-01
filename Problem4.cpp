#include<iostream>
#include<fstream>
using namespace std;
string data;
void readData();
void DisplayData();
main(){
    readData();
    DisplayData();
}
void readData(){
    fstream file;
    file.open("data.txt", ios::in);
    getline(file,data);
    file.close();
}
void DisplayData(){
    int k = 0;
    for(int i = 0; i < data.length(); i++){
        if(data[i] != '[' && data[i] != ']'){
            cout << data[i];
            k++;
        }
    }
    if(k == 0){
        cout << "What... Why did you make this";
    }
}