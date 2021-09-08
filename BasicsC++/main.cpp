
#include <iostream>
#include <string>
using namespace::std;





int main(){
    int a[] = {1,4,6,9,2,3,52,74};
    for (int i = 0; i<8; i++){
        for (int j = 0; j<8-1; j++){
            if (a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
            }
        }
    }
    cout << endl;
    for (int i = 0; i<8; i++){
        cout << a[i] << " ";
    }
}

