#include <iostream>
#include <string>

using namespace std;

const int MAX_COLUNAS = 100;

void Reverso(char s[]);
void Anagrama(char s1[], char s2[]);
void CopiaStrs(char s1[], char s2[]);
void Concatenar(char s1[], char s2[]);
void Palindromo(char s[]);
int** MatrizTransposta(int m[][MAX_COLUNAS], int linhas, int colunas);
bool MatrizIdentidade(int m[][MAX_COLUNAS], int n);
pair<int, int> SomaDiagonais(int m[][MAX_COLUNAS], int n);
int** SomaMatrizes(int m1[][MAX_COLUNAS], int m2[][MAX_COLUNAS], int n);
int** MultiplicaMatrizes(int m1[][MAX_COLUNAS], int m2[][MAX_COLUNAS], int n);

int main() {
    char v[] = {'v','a','s','c','o','\0'};
    char w[] = {'o','s','a','c','v','\0'};
    char x[MAX_COLUNAS] = {'\0'};
    char y[] = {'e','h','s','e','l','e','c','a','o','\0'};
    char z[] = {'o','c','s','a','v','\0'};
    int matriz[][MAX_COLUNAS] = {{1, 0, 0, 0},
                                 {0, 1, 0, 0},
                                 {0, 0, 1, 0},
                                 {0, 0, 0, 1}};
    int matriz2[][MAX_COLUNAS] = {{2, 2, 2, 2},
                                  {2, 2, 2, 2},
                                  {2, 2, 2, 2},
                                  {2, 2, 2, 2}};

    Reverso(v);
    Anagrama(v, w);
    CopiaStrs(v, x);
    Palindromo(v);
    Concatenar(v, y);
    
    int linhas = 4, colunas = 4; // Número de linhas e colunas da matriz

    // Matriz Transposta
    int** matrizTransposta = MatrizTransposta(matriz, linhas, colunas);
    cout << "Matriz Transposta:" << endl;
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            cout << matrizTransposta[i][j] << " ";
        }
        cout << endl;
    }

    if (MatrizIdentidade(matriz, linhas)) {
        cout << "Eh Matriz Identidade!" << endl;
    } else {
        cout << "Nao eh Matriz Identidade!" << endl;
    }

    // Soma das Diagonais
    pair<int, int> somas = SomaDiagonais(matriz, linhas);
    cout << "Soma das diagonais - Principal: " << somas.first << ", Secundaria: " << somas.second << endl;

    // Soma das Matrizes
    int** matrizSoma = SomaMatrizes(matriz, matriz2, linhas);
    cout << "Soma das Matrizes:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matrizSoma[i][j] << " ";
        }
        cout << endl;
    }

    // Multiplicação das Matrizes
    int** matrizProduto = MultiplicaMatrizes(matriz, matriz2, linhas);
    cout << "Multiplicacao das Matrizes:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matrizProduto[i][j] << " ";
        }
        cout << endl;
    }

    // Liberar a memória alocada
    for (int i = 0; i < colunas; i++) {
        delete[] matrizTransposta[i];
    }
    delete[] matrizTransposta;

    for (int i = 0; i < linhas; i++) {
        delete[] matrizSoma[i];
        delete[] matrizProduto[i];
    }
    delete[] matrizSoma;
    delete[] matrizProduto;

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

void Anagrama(char s1[], char s2[]) {
    int count1[256] = {0};
    int count2[256] = {0};
    
    for (int i = 0; s1[i] && s2[i]; i++) {
        count1[s1[i]]++;
        count2[s2[i]]++;
    }
    
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            cout << "Nao eh anagrama!" << endl;
            return;
        }
    }
    cout << "Eh anagrama!" << endl;
}

void CopiaStrs(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    cout << s2 << endl;
}

void Concatenar(char s1[], char s2[]) {
    string str = s1;
    str += s2;
    cout << str << endl;
}

void Palindromo(char s[]) {
    int tamanho = 0;
    while (s[tamanho] != '\0') {
        tamanho++;
    }
    for (int i = 0; i < tamanho / 2; i++) {
        if (s[i] != s[tamanho - 1 - i]) {
            cout << "Nao eh palindromo" << endl;
            return;
        }
    }
    cout << "Eh palindromo" << endl;
}

int** MatrizTransposta(int m[][MAX_COLUNAS], int linhas, int colunas) {
    int** resultado = new int*[colunas];
    for (int i = 0; i < colunas; i++) {
        resultado[i] = new int[linhas];
    }

    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            resultado[i][j] = m[j][i];
        }
    }
    return resultado;
}

bool MatrizIdentidade(int m[][MAX_COLUNAS], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j && m[i][j] != 1) || (i != j && m[i][j] != 0)) {
                return false;
            }
        }
    }
    return true;
}

pair<int, int> SomaDiagonais(int m[][MAX_COLUNAS], int n) {
    int principal = 0, secundaria = 0;
    
    for (int i = 0; i < n; i++) {
        principal += m[i][i];
        secundaria += m[i][n - i - 1];
    }
    return make_pair(principal, secundaria);
}

int** SomaMatrizes(int m1[][MAX_COLUNAS], int m2[][MAX_COLUNAS], int n) {
    int** resultado = new int*[n];
    for (int i = 0; i < n; i++) {
        resultado[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return resultado;
}

int** MultiplicaMatrizes(int m1[][MAX_COLUNAS], int m2[][MAX_COLUNAS], int n) {
    int** resultado = new int*[n];
    for (int i = 0; i < n; i++) {
        resultado[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] += m1[i][j] * m2[i][j];
        }
    }
    return resultado;
}
