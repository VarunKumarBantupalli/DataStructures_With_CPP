#include <iostream>
using namespace std;
int allones(int n){
    n = n | n>>1;
    n = n | n>>2;
    n = n | n>>4;
    n = n | n>>8;
    n = n | n>>16;
    return n;
}
int helper(int n ){
    int x = allones(n);
    int result = x ^ n;
    return result;
}
int main(){
    
    cout<<helper(16)<<" ";
    return 0;
}