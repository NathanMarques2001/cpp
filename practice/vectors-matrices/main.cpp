#include <iostream>
#include <string>

using namespace std;

void Reverso(char s[]);
void Anagrama(char s1[], char s2[]);
void CopiaStrs(char s1[], char s2[]);
void Concatenar(char s1[], char s2[]);
void Palindromo(char s[], char w[]);

int main() {
    char v[] = {'v','a','s','c','o','\0'};
    char w[] = {'o','s','a','c','v','\0'};
    char x[] = {'\0'};
    char y[] = {'e','h','s','e','l','e','c','a','o','\0'};
    char z[] =  {'o','c','s','a','v','\0'};
    
    Reverso(v);
    Anagrama(v, w);
    CopiaStrs(v, x);
    Concatenar(v,y);
    Palindromo(v,z);

    return 0;
}

void Reverso(char s[]) {
    int tamanho = 0;
    while (s[tamanho] != '\0') {
        tamanho++;
    }
    for (int i = tamanho - 1; i >= 0; i--) {
        cout << s[i];
    }
    cout << endl;
}

void Anagrama(char s1[], char s2[]){
    bool ehAnagrama = true;
    int count = 0;
    int tamanho = 0;
    
    while(s1[tamanho] != '\0'){
        tamanho++;
    }
    
    for(int i = 0; i < tamanho - 1; i++){
        for(int j = 0; j < tamanho - 1; j++){
            if(s1[i] == s2[j]){
                count++;
            }
        }
            if(count == 0){
                ehAnagrama = false;
            }
        for(int  k= 0; k < tamanho - 1; k++){
            if(s1[i] == s2[k]){
                count--;
            }
        }
        if(count != 0){
            ehAnagrama = false;
        }
    }
    if(ehAnagrama){
        cout << "Eh anagrama!" << endl;
    } else {
        cout << "Nao eh anagrama!" << endl;
    }
}

void CopiaStrs(char s1[], char s2[]){
    int tamanho = 0;
    
    while(s1[tamanho] != '\0'){
        tamanho++;
    }
    
    for(int i = 0; i < tamanho; i++){
        s2[i] = s1[i];
    }
    for(int j = 0; j < tamanho; j++){
        cout << s2[j];
    }
    cout << endl;
}

void Concatenar(char s1[], char s2[]){
    string str = "";
    int tamanho1 = 0;
    int tamanho2 = 0;
    
    while(s1[tamanho1] != '\0'){
        tamanho1++;
    }
    
    while(s2[tamanho2] != '\0'){
        tamanho2++;
    }
    
    for(int i = 0; i < tamanho1; i++){
        str += s1[i];
    }
    for(int j = 0; j < tamanho2; j++){
        str += s2[j];
    }
    cout << str << endl;
}

void Palindromo(char s1[], char s2[]){
    bool ehPalindromo = true;
    char c1, c2;
    int tamanho = 0;
    
    while(s1[tamanho] != '\0'){
        tamanho++;
    }
    
    for(int i = 0; i < tamanho; i++){
        if(s1[i] != s2[tamanho - 1 - i]){
            ehPalindromo = false;
        }
    }
    if(ehPalindromo){
        cout << "Eh palindromo" << endl;
    } else {
        cout << "Nao eh palindromo" << endl;
    }
}
