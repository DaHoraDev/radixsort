#include "Vetor.h"
#include "RadixSort.h"

int main(){
    int v[tam];

    vAleatorio(v);

    cout<<"Vetor antes do algoritmo de ordenação: "<<endl;
    vMostrar(v);

    cout<<"\n\n"<<"Fim do preenchimento do vetor, aperte qualquer tecla para continuar...";
    getchar();

    clock_t t;
    t=clock();
    RadixSort(v, tam);
    t=clock()-t;

    cout<<endl<<"Vetor ordenado por radix sort: "<<endl;
    vMostrar(v);

    cout<<"\n\n"<<((float)t)/CLOCKS_PER_SEC<<" segundos para ordenação por radix sort."<<endl<<endl;
    return 0;
}








