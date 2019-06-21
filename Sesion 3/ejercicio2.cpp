#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool palindromo(vector<char> v){
    vector<char> aux;
    reverse_copy(v.begin(),v.end(),aux.begin());
    return v == aux;
}

int main(){
    typedef vector<vector<char>> vec_string;
    vec_string v;
    v = {{'a','l','a'},{'h','o','l','a',},{'s','a','l','a','s'}};
    cout << count_if(v.begin(),v.end(),palindromo);
    return 0;
}
