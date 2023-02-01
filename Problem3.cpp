#include<iostream>
#include<fstream>
using namespace std;
string lettersC = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
string mouserCode[27] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
string lettersS = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void mouser(string message);
void takeInput();
main(){
    takeInput();
}
void mouser(string message){
    for(int i = 0; i < message.length(); i++){
        for(int j = 0; j < 27; j++){
            if(message[i] == lettersC[j] || message[i] == lettersS[j]){
                cout << mouserCode[j] << " ";
            }
        }
        if(message[i] == ' '){
            cout << " ..... ";
        }
    }
}
void takeInput(){
    string message;
    cout << "Enter Message...";
    getline(cin,message);
    mouser(message);
}