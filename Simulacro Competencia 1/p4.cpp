#include <iostream>
#include <vector>
using namespace std;

int min(vector<int>& v){//Devuelve el entero minimo de un vector, pero ademas lo elimina de la estructura
    int m = 1001, m_pos;
    for(int i = 0; i!=v.size(); i++){
        if(v[i] < m){
            m = v[i]; m_pos = i;
        }
    }
    v.erase(v.begin()+m_pos);
    return m;
}

int main(){
    int a,b,c,x,y,z;
    cin >> a >> b >> c >> x >> y >> z;
    vector<int> v1 = {a,b,c};
    vector<int> v2 = {x,y,z};
    int flag = 1;
    for(auto i : {1,2,3}){
        if(min(v1) > min(v2)){//La idea es verificar que a cada dimension de la tablilla le corresponde 
        //una dimension del cofre del mismo o mayor tamaño.
            flag = 0;
        }
    }
    cout << flag;
    return 0;
}
