#include <iostream>
//#include <vector>
//#include <string>
using namespace std;

void inputMatrix( int m[][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> m[i][j];
        }
    }
}

bool equal( int a[][4], int b[][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(a[i][j] != b[i][j]) {
                cout << "Matrices is not equal"<< endl;
                return false;
            }
        }
    }
    cout << "Matrices is equal" << endl;
    return true;
}

int main() {
    int massA[4][4];
    int massB[4][4];
    cout << "Input matrix A"<< endl;
    inputMatrix(massA);
    cout << "Input matrix B"<< endl;
    inputMatrix(massB);
    equal(massA,massB);
    return 0;
}
