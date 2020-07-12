#include<iostream>
#include<vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> list;
    while (N--) {
        int temp;
        cin >> temp;
        list.push_back(temp);
    }
    cout << list.size();
    return 0;
}