#include <iostream>

using namespace std;

const int MAX_SIZE = 1000;

void replaceNumbers(int arr[], int N) {
    for (int i = 0; i < N; ++i) {
        if (arr[i] > 0) {
            arr[i] = 1;
        } else if (arr[i] < 0) {
            arr[i] = 2;
        }
        
    }
}

int main(){
    int size;
    cin >> size;

    int A[MAX_SIZE];

    for (int i = 0; i < size; ++i) {
        
        std::cin >> A[i];
    }

    replaceNumbers(A, size);
    for (int i = 0; i < size; ++i) {
        cout << A[i] << " ";
    }

    return 0;
}