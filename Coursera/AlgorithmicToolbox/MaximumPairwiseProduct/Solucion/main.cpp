#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

long long MaxPairwiseProduct(vector<int>& numbers){
    long long result = 0;
    int n = numbers.size();
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(((long long)numbers[i]) * numbers[j] > result)
                result = ((long long)numbers[i]) * numbers[j];
        }
    }
    return result;
}

long long MaxPairwiseProductFast(vector<int>& numbers){
    int n = numbers.size();
    
    int maxIndex = -1;
    for(int i = 0; i < n; ++i)
        if((maxIndex == -1) || (numbers[i] > numbers[maxIndex]))
            maxIndex = i;
    
    int maxIndex2 = -1;
    for(int j = 0; j < n; ++j)
        if((j != maxIndex) && ((maxIndex2 == -1) || (numbers[j] > numbers[maxIndex2])))
            maxIndex2 = j;
            
    return ((long long)(numbers[maxIndex])) * numbers[maxIndex2];
}

int main(){
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    //long long result = MaxPairwiseProduct(numbers);
    long long result = MaxPairwiseProductFast(numbers);
    cout << result << '\n';
    return 0;
}