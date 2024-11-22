#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    // take the rest of the input and put it into an array
    
    while ( cin >> arrayRow ){

    }
    for (int i = 0; i < y; i ++) {
        for (int j = 0; j < x; j ++) {
            if (arr[i][j] == "*") {
                for (int l = i -1; l <= i + 1; l ++){
                    for (int m = j - 1; j <= j + 1; j ++){
                        // if index exists, adds 1 to each side
                    }
                }
            }
        }
    }

    // print out an array 

    return 0;
}
