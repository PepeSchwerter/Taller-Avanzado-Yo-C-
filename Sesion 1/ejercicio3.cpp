#include <iostream> 
#include <vector> //libreria de vectores

using namespace std;

bool find(vector<int> v, int x){//Devuelve true si encuentra el elemento x en el vector, false
//en el caso contrario
    for(auto i:v){
        if(i == x){
            return true;
        }
    }
    return false;
}

vector<int> set(vector<int> v){
    vector<int> new_v;
    for(auto i : v){
        if(!find(new_v,i)){
            new_v.push_back(i);
        }    
    }
    return new_v; 
}

int main(){
    vector<int> v1; //declaracion de un vector
    bool flag = true;
    int aux;
    cout << "Ingresar valores: \n";
    while(flag){
        cin >> aux;
        if(aux == 0){
            flag = false;
        }else {
            v1.push_back(aux);//Agrega un elemento al final del vector
        }
    }

    cout << "Valores del vector sin repetir: ";
    for(auto i : set(v1)){
        cout << i << ' ';
    }
    return 0;
}



