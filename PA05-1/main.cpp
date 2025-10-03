#include <iostream>
#include "MyFloatArray.hpp"

using namespace std;

int main(){

    int n,i;
    float arr[ MAX_LEN ];

    cin >> n;
    while(i<n){
        cin >> arr[i++];
    }

    // initialize an array
    FloatArray array( n, arr );

    int command, arg1;
    float arg2;
    int flag = 0;

    while (flag == 0){

        // read commands
        cin >> command;

        switch (command){
            case 0: // exit
                flag = 1;
            break;
            case 1: // find
                cin >> arg2;
            int idx;
            idx = array.findElem( arg2 );
            cout << idx << endl;
            break;
            case 2: // delete
                cin >> arg1;
            array.deleteElem( arg1 );
            break;
            case 3: // insert
                cin >> arg1 >> arg2;
            array.insertElem( arg1, arg2 );
            break;
            case 4: // display
                array.print();
        }
    }

    return 0;

}