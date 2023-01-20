#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10][20];

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 20; j++) {
            arr[i][j] = i + j;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
