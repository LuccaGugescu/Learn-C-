#include <bits/stdc++.h>
using namespace std;
#define N 100

void bubble_sort(int array[N]);
void load_array(int array[N]);
void print(int array[N]);

int main(int argc, char const *argv[])
{
    int array[N];
    load_array(array);
    bubble_sort(array);
    print(array);
    return 0;
}

void load_array(int array[N])
{
    for (int i = 0; i < N; i++)
    {
        array[i] = rand() % N;
    }
}

void bubble_sort(int array[N])
{
    int i = 0;
    int k = 0;
    bool swap;
    do
    {
        swap = false;
        for (int i = 0; i < N - k - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
                swap = true;
            }
        }
        k++;
    } while (swap);
}

void print(int array[N])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
}
