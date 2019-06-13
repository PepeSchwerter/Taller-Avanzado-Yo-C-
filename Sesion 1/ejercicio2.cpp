#include<iostream>
using namespace std;

int main(){
    int num_ramos;
    int num_notas;
    cout << "Ingrese numero de ramos: \n";
    cin >> num_ramos;
    cout << "Ingrese numero de notas por ramo: \n";
    cin >> num_notas;
    float notas_ramos[30][20];
    for(int i = 0; i < num_ramos; i++){
        for(int j = 0; j < num_notas; j++){
            cout << "Ingrese nota " << j+1 << " del ramo " << i+1 <<'\n';
            cin >> notas_ramos[i][j]; 
        }
    }

    float promedio = 0;
    for(int i = 0; i < num_ramos; i++){
        float ponderacion;
        cout << "Ingrese ponderación del ramo " << i+1 << '\n';
        cin >> ponderacion;
        float cont_ramo = 0;
        for(int j = 0; j < num_notas; j++){
            cont_ramo += notas_ramos[i][j];
        }
        float nota_ramo = (float)cont_ramo/(float)num_notas;
        promedio += nota_ramo*(ponderacion/100);
    }
    cout << promedio;
    return 0;
}