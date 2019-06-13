#include <iostream>

using namespace std;

int max(int array[], int size){//Devuelve el entero maximo encontrado en un arreglo
    int max_num = 0;
    for(int i = 0; i<size; i++){
        if(array[i] > max_num){
            max_num = array[i];
        }
    }
    return max_num;
}

int mean(int array[], int size){//Devuelve el promedio del arreglo
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += array[i];
    }
    return sum/size;
}

int main(){
    int puntajes[7];
    for(auto& i : puntajes){
        cin >> i;
    }
    cout << mean(puntajes, 7) << '\n' << max(puntajes, 7);
    return 0;
}