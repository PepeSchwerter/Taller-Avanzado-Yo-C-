#include <iostream>
#include <string>

using namespace std;

string dec_to_bab(int n){//Devuelve el numero (entre 1 y 59) convertido a babilonico (L's e I's)
    string bab_num;
    int num_l = n/10;
    int num_i = n%10;
    for(int i = 0; i<num_l; i++){
        bab_num += "L";
    }
    for(int i = 0; i<num_i; i++){
        bab_num += "I";
    }
    return bab_num;
}

int main(){
    string salida;
    int p;
    cin >> p;
    string punto = ""; 
    while(p>0){//Se calcula cada digito del entero en base 60
        int digit = p%60;
        p /= 60;
        salida = dec_to_bab(digit) + punto + salida;
        punto = ".";
    }
    cout << salida;
    return 0;
    
}