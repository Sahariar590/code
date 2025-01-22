#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if(i==1)
        {
            cout<<"0"<<endl;
        }
        for (int j = 0; j <= i; j++) {
            if ((i + j) % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }

    return 0;
}