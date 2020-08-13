#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // variables
    int max = 10;

    // generate random number
    srand(time(0));
    int rnum = rand() % (max + 1);

    // display instructions
    cout << "Try to guess the random number between 0 and " << max << ": " << endl;

    // loop until user enters the correct number
    int x;
    do {
        // read user input
        cin >> x;
        // check the number entered and display guessing info
        if(x > rnum){
            cout << "The random number is smaller!" << endl;
        } else if(x < rnum) {
            cout << "The random number is bigger!" << endl;
        } else {
            cout << "Wow you found the random number!" << endl;
        }
    } while(x != rnum);

    // ends program
    return 0;
}
