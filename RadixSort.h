/*Funções*/
int vMax(int *v, int n){ //achar o maior número dentro do vetor(contagem das casas destes número)
    int maior = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
}

void CountSort(int *v, int n, int exp){ //achar os números menos significativos (ultimos números)
    int output[n];
    int count[10]={0};
    for(int i = 0; i < n; i++){
        count[(v[i]/exp)%10]++;
    }
    for(int i = 1; i < 10; i++){
        count[i]+=count[i-1];
    }
    for(int i = n-1; i >=0; i--){
        output[count[(v[i]/exp)%10]-1]=v[i];
        count[(v[i]/exp%10)]--;
    }
    for(int i = 0; i < n; i++){
        v[i]=output[i];
    }
}

void RadixSort(int *v, int n){ 
    int m;
    m=vMax(v,n);
    for(int exp = 1; m /exp > 0;exp*=10){
        CountSort(v,n,exp);
    }
}
