#include <bits/stdc++.h>

using namespace std;

int main(){
    int A[10] = {6,8,4,5,22,74,748,29,2,0};
    for(int j = 1; j < 10; j++){
        int key = A[j];
        int i = j - 1;
        while(i >= 0 && A[i] > key){
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key;
    }
    for(int k = 0; k < 10; k++){
        cout << A[k] << '\n';
    }
    return 0;
}