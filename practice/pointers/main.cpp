#include <iostream>

using namespace std;

char *strcpy(char *s, const char *t);
int strcmp(const char *s, const char *t);
char *strcat(char *s, const char *t);
int strlen(const char *s);

int main() {
    char s[100];
    char t[] = "Hello, world!";
    char h[] = "Hello";
    char w[] = "World";
    char v[] = ", world!";

    // Copia uma string para outra
    strcpy(s, t);
    cout << s << endl;

    // Compara duas string lexograficamente
    int result = strcmp(h, w);

    if (result < 0) {
        cout << h << " eh lexicograficamente menor que " << w << endl;
    } else if (result == 0) {
        cout << h << " eh lexicograficamente igual a " << w << endl;
    } else {
        cout << h << " eh lexicograficamente maior que " << w << endl;
    }
    
    // Concatena duas strings
    strcat(h, v);
    printf("%s\n", h);
    
    // Verifica o tamanho de uma string
    int length = strlen(t);
    cout << "O comprimento da string é " << length << endl;

    return 0;
}

char *strcpy(char *s, const char *t) {
  while (*t != '\0') {
    *s = *t;
    s++;
    t++;
  }
  *s = '\0';
  return s;
}

int strcmp(const char *s, const char *t) {
  while (*s == *t && *s != '\0') {
    s++;
    t++;
  }
  return *s - *t;
}

char *strcat(char *s, const char *t) {
  while (*s != '\0') {
    s++;
  }
  while (*t != '\0') {
    *s = *t;
    s++;
    t++;
  }
  *s = '\0';
  return s;
}

int strlen(const char *s) {
  int count = 0;
  while (*s != '\0') {
    count++;
    s++;
  }
  return count;
}
