#include <iostream>

using namespace std;

#define pi 3.14;

void inscrever(){
  cout << "Se inscreva no canal";
}

int somar(int x, int y){
  int soma;
  soma = x + y;
  return soma;
} 

int main() {
    cout << "Hello World" << endl;
    int a = 5;
    int b = 10;
    int saida;
    saida = somar(a, b); 
    cout << "soma = " << saida << endl;
    cout << pi;
    return 0;
}