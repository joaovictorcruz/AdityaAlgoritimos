#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a primeira nota: \n";
    cin >> nota1;

    cout << "Informe a segunda nota: \n";
    cin >> nota2;

    float media = (nota1 + nota2)/2;
    if(media >= 5){
        cout << "Aluno aprovado\n";
        cout << "Media: " << media;
    }
    else{
        cout << "Aluno reprovado\n";
        cout << "Media: " << media;
    }
}