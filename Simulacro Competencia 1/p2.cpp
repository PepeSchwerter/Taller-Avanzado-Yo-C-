#include <iostream>

using namespace std;

long int new_element(int rows, int columns, long int element){
    long int new_column = (element-1)/rows;//Se calcula la columna correspondiente al n elemento de la matriz rotada
    long int new_row = (rows-1)-((element-1)%rows);//Se calcula la fila correspondiente al n elemento de la matriz rotada
    return (columns*new_row + new_column)+1;//La fila y columna calculadas se utilizan para obtener el n elemento correspondiente
    //al de la matriz rotada
}

int main(){
    int rows;
    int columns;
    int num_elements;

    cin >> rows;
    cin >> columns;
    cin >> num_elements;
    
    long int elements[1000000];
    for(int i = 0; i < num_elements; i++){
        cin >> elements[i];
    }

    for(int i = 0; i < num_elements; i++){
        cout << new_element(rows, columns, elements[i]) << ' ';
    }
    return 0;
}