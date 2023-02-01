#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void getBirthdayCake();
void getInfoForCake();
string parseRecord(string record, int field);
string Name;
int Age;
int idx = 0;
int main(){
    getInfoForCake();
    getBirthdayCake();
}
void getBirthdayCake(){
    if(Age%2 == 0){
        cout << "##################" <<endl;
        cout << "# " << Age << " HB " << Name << "! " << Age << "  #" <<endl;
        cout << "##################" <<endl;
    }
    else{
        cout << "******************" <<endl;
        cout << "* " << Age << " HB " << Name << "! " << Age << "  *" <<endl;
        cout << "******************" <<endl;
    }
}
void getInfoForCake(){
    string line;
    fstream file;
    file.open("Names.txt", ios::in);
    while(!file.eof()){
        getline(file, line);
        Name = parseRecord(line,1);
        string a;
        a = parseRecord(line,2);
        Age = stoi( a );
        idx++;
    }
}
string parseRecord(string record, int field){
    int commaCount = 1;
    string Item;
    for(int i = 0; i < record.length(); i++){
        if(record[i] == ','){
            commaCount++;
            i++;
        }
        if(commaCount == field){
            Item = Item+record[i];
        }
    }
    return Item;
}