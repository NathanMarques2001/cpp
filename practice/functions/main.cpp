#include <iostream>
#include <math.h>

using namespace std;

int MaiorNumero(int v[]);
int Soma(int v[], int x);
int Fatorial(int x);
int mdc(int a, int b);
int* NumerosPrimos(int x);
void Fibonacci(int x);
void BinToDec(int x);
void DecToBin(int x);
void FatoracaoNumerosPrimos(int x);

int main() {
    int meuArray[] = {200,1,3,5,7,9,11,13,15,17,19};

    // Retorna o maior numero em um vetor
    cout << "- Maior numero: " << MaiorNumero(meuArray) << endl;
    
    // Retorna a soma dos x de um vetor
    cout << "- Soma de 5 numeros: " << Soma(meuArray, 5) << endl;
    
    // Retorna o valor do fatorial de x numeros
	cout << "- Fatorial de 6 " << Fatorial(6) << endl;
	
	// Retorna o MDC de dois numeros
	cout << "- MDC de 10 e 12: " << mdc(10,12) << endl;
	
	// Retorna os x numeros primos
    int* primos = NumerosPrimos(7);
    cout << "- Os 7 primeiros números primos: ";
    for(int i = 0; i < 7; ++i) {
        cout << primos[i];
        if(i != 6){
            cout << ", ";
        }
    }
    cout << endl;
    delete[] primos;

    // Imprime os x numeros da sequencia de Fibonacci
    Fibonacci(8);
    
    // Converte e imprime um numero binario para decimal
    BinToDec(10011011);
    
    // Converte e imprime um numero decimal para binario
    DecToBin(155);
    
    // Decomposicao de um numero em fatores primos
    FatoracaoNumerosPrimos(60);
   
    return 0;
}

int MaiorNumero(int v[]){
    int x = 0, i = 0;
    while(v[i] != '\0'){
       if(x < v[i]){
            x = v[i];
        }
        i++;
    }
    return x;
}

int Soma(int v[], int x){
    int soma = 0;
    for(int i = 0; i < x; i++){
        soma = soma + v[i];
    }
    return soma;
}

int Fatorial(int x){
    if(x == 1) {
		return 1;
	}
	return x * Fatorial(x - 1);
}

int mdc(int a, int b){
    int temp = 0;
	while(b != 0){
		temp = b;
		b = a % b;
		a = temp;
	}
	return temp;
}

int* NumerosPrimos(int x) {
    int* primos = new int[x];
    int n = 2;
    bool ehPrimo = true;
    int j = 0;
    while (j < x) {
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0) {
                ehPrimo = false;
                break;
            }
        }
        if(ehPrimo) {
            primos[j] = n;
            j++;
        }
        ehPrimo = true;
        n++;
    }
    return primos;
}

void Fibonacci(int x){
    int ultimo = 1;
    int penultimo = 1;
    int atual = 0;
    cout << "- Sequencia de Fibonacci dos " << x << " primeiros numeros: " << penultimo << ", " << ultimo;
    for(int i = 0; i < x - 2; i++){
        atual = penultimo + ultimo;
        ultimo = penultimo;
        penultimo = atual;
        cout << ", " << atual;
    }
    cout << endl;
}

void BinToDec(int x){
    int decimal = 0;
    int potencia = 1;

    cout << "- O binario " << x << " em decimal: ";

    while(x != 0){
        int digito = x % 10;
        decimal += digito * potencia;
        potencia *= 2;
        x /= 10;
    }
    
    cout << decimal << endl;
}

void DecToBin(int x){
    int bin[100], i = 0;
    
    cout << "- O decimal " << x << " em binario: ";
    
    while (x > 0) {
        bin[i] = x % 2;
        x /= 2;
        i++;
    }
    
    for(int j = i - 1; j >= 0; j--){
        cout << bin[j];
    }
    
    cout << endl;
}

void FatoracaoNumerosPrimos(int x){
    int num = 2;
    
    cout << "- A decomposicao de " << x << " em fatores primos é: ";
    
    while(x > 1){
        if(x % num == 0){
            cout << num << ", ";
            x /= num;
            num = 2;
        }
        else{
            num++;
        }
    }
}
