#include <bits/stdc++.h>
using namespace std;
#define N 2
#define M 4

void add_values(char text[100], int array[][M]);
void output_array(int array[][M]);
int main(int argc, char const *argv[])
{
    //redirect input stream from file
    freopen("file.txt", "r", stdin);
    //redirect output stream to file
    freopen("out.txt", "w", stdout);
    char text[100];
    int array[N][M];

    add_values(text, array);
    output_array(array);

    return 0;
}

void add_values(char text[100], int array[][M])
{
    int j = 0;
    for (int i = 0; i < N; i++)
    {
        j = 0;
        cin.getline(text, 100);
        char *ptr;
        // split string line with space delimiter
        ptr = strtok(text, " ");
        while (ptr != NULL)
        {
            // converts char pointer (*char) to int
            int iptr = atoi(ptr);
            array[i][j] = iptr * 2;
            j++;
            ptr = strtok(NULL, " ");
        }
    }
}

void output_array(int array[][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}