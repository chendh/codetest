#include <iostream>
using namespace std;

int main(){
    string s;
    string output[100];
    cin >> s;

    int i = -1;

    while (s!="-9999"){
        i++;
        output[i] = s;
        cin >> s;
    }

    while (i>=0){
        cout << output[i] << " ";
        i--;
    }
    return 0;
}