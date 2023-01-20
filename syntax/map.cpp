#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, int> hash_map;
    hash_map[1] = 2;
    hash_map[2] = 4;
    hash_map[3] = 8;
    hash_map[4] = 16;
    map<int, int>::iterator it = hash_map.begin();
    while (it != hash_map.end())
    {
        cout << "KEY: " << it->first << " VALUE: " << it->second << endl;
        ++it;
    }
    return 0;
}
