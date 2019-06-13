#include <iostream>
using namespace std;

int count(int a[], int z, int m){
    int cont = 0;
    for(int i = 0; i!=m; i++){
        if(a[i] == z){
            cont++;
        }
    }
    return cont;
}

int main(){
    int n;
    cin >> n;
    int arreglo[1000];
    for(int i = 0; i!= n; i++){
        cin >> arreglo[i];
    }
    int x;
    cin >> x;
    int cont = count(arreglo, x, n); 
    cout << "X aparecio: " << cont;
    return 0;
}