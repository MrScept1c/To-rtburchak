#include <iostream> 
using namespace std;
int main(){
    int a, b, s, p;
    cin >> a >> b;
    p = 2 * (a + b);
    s = a * b;
    if(p > s){
        cout << p;
    }else if(p < s){
        cout << s;
    }
}
