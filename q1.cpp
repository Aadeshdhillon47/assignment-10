#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> a = {1,2,3,1};
    unordered_set<int> s;
    for(int x : a){
        if(s.count(x)){
            cout << "true";
            return 0;
        }
        s.insert(x);
    }
    cout << "false";
}
