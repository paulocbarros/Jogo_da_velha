#include <iostream>
using namespace std;
#define tamanho 3

char tabuleiro[tamanho][tamanho];

int main(){

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            tabuleiro[i][j]= ' ';
        }
}
    cout<<"   0  1  2"<<endl;
    
    for (int i = 0; i < tamanho; i++){
        cout<< i << " ";
        for (int j = 0; j < tamanho; j++){
            cout<<"[" <<tabuleiro[i][j]<<"]";
        }
    cout<<endl;
    }
    return 0;
}
