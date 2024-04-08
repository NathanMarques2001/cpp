#include <iostream>
#include <math.h>

using namespace std;

int maiorNumero(int v[], int tamanho);
int somaXNumeros(int v[], int x);
int fatorial(int x);
int mdc(int a, int b);
int* numerosPrimos(int x);
void fibonacci(int x);
int binToDec(int x);

int main(){
    int meuArray[] = {1,3,5,7,9,11,13,15,17,19};
    int arrayAux[] = {4,5,10,12,10011011};
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);

    cout << "- Maior numero: " << maiorNumero(meuArray, tamanho) << endl;
    cout << "- Soma de " << arrayAux[1] << " numeros: " << somaXNumeros(meuArray, arrayAux[1]) << endl;
	cout << "- Fatorial de " << arrayAux[1] <<": " << fatorial(arrayAux[1]) << endl;
	cout << "- MDC de " << arrayAux[0] << " e " << arrayAux[3] << ": " << mdc(arrayAux[0],arrayAux[3]) << endl;
	
    int* primos = numerosPrimos(arrayAux[2]);
    cout << "- Os " << arrayAux[2] << " primeiros números primos: ";
    for(int i = 0; i < arrayAux[2]; ++i) {
        cout << primos[i] << ", ";
    }
    cout << endl;
    delete[] primos;

    cout << "- ";
    fibonacci(arrayAux[2]);
    cout << endl;

    cout << "- O binário " << arrayAux[4] << " em decimal: " << binToDec(arrayAux[4]) << endl;



    return 0;
}

int maiorNumero(int v[], int tamanho){
    int x = 0;
    for(int i = 0; i < tamanho; i++){
        if(x < v[i]){
            x = v[i];
        }
    }
    return x;
}

int somaXNumeros(int v[], int x){
    int soma = 0;
    for(int i = 0; i < x; i++){
        soma = soma + v[i];
    }
    return soma;
}

int fatorial(int x){
    if(x == 1) {
		return 1;
	}
	return x * fatorial(x - 1);
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

int* numerosPrimos(int x) {
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

void fibonacci(int x){
    int ultimo = 1;
    int penultimo = 1;
    int atual = 0;
    cout << "Sequência de Fibonacci dos " << x << " primeiros numeros: " << penultimo << ", " << ultimo;
    for(int i = 0; i < x - 2; i++){
        atual = penultimo + ultimo;
        ultimo = penultimo;
        penultimo = atual;
        cout << ", " << atual;
    }
}

int binToDec(int x){
    int decimal = 0;
    int potencia = 1;

    while(x != 0){
        int digito = x % 10;
        decimal += digito * potencia;
        potencia *= 2;
        x /= 10;
    }

    return decimal;
}

int decToBin(int x){
    
}