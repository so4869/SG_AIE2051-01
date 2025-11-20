#include <iostream>
#include <vector>
#include "insert.hpp"

using namespace std;

int main(){
    int n;
    cin >> n;

    int item;

    vector<int> items;
    vector<int>::iterator it;

    for (int i = 0; i < n; i++){
        cin >> item;
        insertIncreasingOrder<int>(items, item);

        for (it = items.begin(); it != items.end() && it + 1 != items.end(); it++){
            if (*it > *(it + 1)){
                cout << "Not increasing." <<endl;
                return 0;
            }
        }
    }


    for (it = items.begin(); it != items.end() ; it++)
        cout << *it << " ";
    cout << endl;

    if (items.size() == n)
        cout << "Increasing." <<endl;
    else cout << "Elements are not added." <<endl;


    return 0;

}