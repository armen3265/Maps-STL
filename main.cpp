#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;
    map<string, int> m;
    while(N--)
    {
        int query;
        cin >> query;
        string key;
        int mark;
        
        switch (query) {
           case 1:
           cin >> key >> mark;
           m[key] += mark;
           break;
           case 2:
           cin >> key;
           m.erase(key);
           break;
           case 3:
           cin >> key;
           cout << m[key] << '\n';
           
        }
    } 
    return 0;
}
