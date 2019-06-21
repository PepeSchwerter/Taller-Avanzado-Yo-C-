#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

float mediana(vector<int> v){
    sort(v.begin(),v.end());
    int pos = v.size()/2;
    if(v.size()%2==0){
        return (v[pos-1]+v[pos])/(float)2;
    } else {
        return v[pos];
    }
}

int moda(vector<int> v){
    sort(v.begin(),v.end());
    int max_count = 0;
    int moda;
    for(auto i=v.begin();i!=v.end();i++){
        if(i != v.begin()){
            if(*i != *(i-1)){
                int i_count = count(v.begin(),v.end(),*(i-1));
                if(i_count>max_count){
                    max_count = i_count;
                    moda = *(i-1);
                }
            }
        }
    }
    return moda;
}

int main(){
    vector<int> v = {0,4,1,5,4,8,3,0,4};
    cout << mediana(v) << '\n';
    cout << moda(v);
    
    int a;
    cin>>a;
    return 0;
}