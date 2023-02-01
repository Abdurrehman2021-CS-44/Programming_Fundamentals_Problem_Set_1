#include<iostream>
#include<fstream>
using namespace std;
char alphabets[26];
char letters[26]; // {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void readData(){
    fstream file;
    file.open("alphabets.txt", ios::in);
    int i = 97;
    while(!file.eof()){
        file >> alphabets[i];
        i++;
    }
    file.close();
}
void missingAlpha(){
    int IDX = 0;
    for(int i = 97; i < 123; i++){
        if(char(i) != alphabets[i]){
            letters[IDX] = char(i);
            IDX++;
        } 
    }
}
void writeData(){
    fstream newfile;
    newfile.open("alphabets.txt", ios::app);
    newfile << "\n";
    for(int i = 0; i < 26; i++){
        newfile << letters[i];
    }
    newfile.close();
}
main(){
    readData();
    missingAlpha();
    writeData();
}