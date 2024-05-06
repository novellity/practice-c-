#include <iostream>
using namespace std;

int main() {

    int list[] = {65, 25, 34, 15, 47, 50};
    int flag = 1;
    int listSize = sizeof(list) / sizeof(list[0]);

    for(int i = 0; i < listSize; i++) {
        cout<< "List[" << i << "] = " << list[i] <<endl;
    }

    cout<<endl<<endl;

    int E = listSize - 1;

    while(flag == 1) {
       flag = 0;
       for(int j = 0;  j < E; j++) {

        if(list[j] > list[j + 1]) {
            int temp = list[j];
            list[j] = list[j + 1];
            list[j + 1] = temp;
            flag = 1;
        }

       }

       E--;

    }

    for( int i = 0;  i < listSize; i++) {
        cout<< "List[" << i << "] = " << list[i] <<endl;
    }


    return 0;
}