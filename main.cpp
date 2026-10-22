#include <iostream>
using namespace std;

int main(){
    int n;
    int r;
    cout << "Input a positive number n: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        r = i % 3;

        cout << i;
        switch (r){
            case 1: 
                cout << "+";
                break;
            case 2:
                cout << "--";
                break;
            case 0:
                cout << "***";
                break;
        }
    }
    return 0;
}