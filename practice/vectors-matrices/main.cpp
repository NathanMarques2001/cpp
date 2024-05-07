#include <iostream>
#include <string>

using namespace std;

const int MAX_COLUNAS = 100;

void Reverso(char s[]);
void Anagrama(char s1[], char s2[]);
void CopiaStrs(char s1[], char s2[]);
void Concatenar(char s1[], char s2[]);
void Palindromo(char s1[], char s2[]);
void MatrizTransposta(int m[][MAX_COLUNAS]);
void MatrizIdentidade(int m[][MAX_COLUNAS]);
void SomaDiagonais(int m[][MAX_COLUNAS]);

int main() {
    char v[] = {'v','a','s','c','o','\0'};
    char w[] = {'o','s','a','c','v','\0'};
    char x[] = {'\0'};
    char y[] = {'e','h','s','e','l','e','c','a','o','\0'};
    char z[] =  {'o','c','s','a','v','\0'};
    int matriz[][MAX_COLUNAS] = {{1, 0, 0, -1},
                                {0, 1, 0, -1},
                                {0, 0, 1, -1},
                                {-1, -1, -1, -1}};
    
    Reverso(v);
    Anagrama(v, w);
    CopiaStrs(v, x);
    Palindromo(v,z);
    Concatenar(v,y);
    MatrizTransposta(matriz);
    MatrizIdentidade(matriz);
    SomaDiagonais(matriz);

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

void MatrizTransposta(int m[][MAX_COLUNAS]) {
    for (int i = 0; m[i][0] != -1; ++i) {
        for (int j = 0; m[i][j] != -1; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void MatrizIdentidade(int m[][MAX_COLUNAS]) {
    bool ehMatrizIdentidade = true;
    for (int i = 1; m[i][0] != -1; ++i) {
        if(m[i][i] != m[i - 1][i - 1]) {
            ehMatrizIdentidade = false;
        }
    }
    
    if(ehMatrizIdentidade) {
        cout << "Eh Matriz Identidade!" << endl;
    } else {
        cout << "Nao eh Matriz Identidade!" << endl;
    }
}

void SomaDiagonais(int m[][MAX_COLUNAS]) {
    int principal = 0, secundaria = 0, colunas = 0;
    
    for (int i = 0; m[i][0] != -1; ++i) {
        principal += m[i][i];
    }
    
    while(m[colunas][0] != -1){
        colunas++;
    }
    
    for (int i = 0; i < colunas; i++) {
        secundaria += m[i][colunas - i - 1];
    }
    
    cout << "Principal: " << principal << endl;
    cout << "Secundaria: " << secundaria << endl;
}
