#include<bits/stdc++.h>

using namespace std;
int main()
{
   while(1){

     int randNumber, guessNumber;
    cout << "Enter your Guessing Number from 1 to 5: " <<endl;
    cin >> guessNumber;

    randNumber = rand() % 5 + 1;

    if(guessNumber == randNumber){
        cout << "Woooo! You Won." <<endl;
        break;
    }

    else{
        cout << "You loose! Try again." <<endl;
        cout << "Random Number was: " <<randNumber << endl <<endl;
    }
   }


}
