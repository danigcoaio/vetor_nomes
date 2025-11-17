#include <iostream> 
using namespace std; 

int main() { 
    int A[4] = {2, 4, 6, 8}; 
    int B[4] = {1, 3, 5, 7}; 
    int c[4]; 
    
    for (int i = 0; i < 4; i++) { 
        c[i] = A[i] + B[i]; 
        cout << c[i] << endl; 
    }
    return 0; 
}
