#include <iostream>
using namespace std;

int main(){
    int n; // input a number
    int maximum=0; // maximum
    int minimum=0; // minimum
    int greater=0; // the number of numbers greater or equal to 0
    int smaller=0; // the nubmer of negative numbers

    cout << "input a number: ";
    cin >> n;

    while (n!=-9999){
        if (n>maximum) maximum=n;
        if (n<minimum) minimum=n;
        if (n>=0) greater++;
        else smaller++;
        cin >> n;
    }

    cout << maximum << "," << minimum << "," << greater << "," << smaller << endl;
    return 0;
}