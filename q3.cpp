#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int a[] = {2,3,2,4,3,2};
    int n = 6;

    unordered_map<int,int> freq;

    for(int i=0;i<n;i++)
        freq[a[i]]++;

    for(auto x : freq)
        cout << x.first << " -> " << x.second << endl;
}
