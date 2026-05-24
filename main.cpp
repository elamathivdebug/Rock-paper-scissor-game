#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   int userChoice,computerChoice;
   int userscore=0,computerscore=0;
   char playAgain='y';
   srand(time(0));
   while(playAgain=='y'||playAgain=='Y')
   {
   cout<<"STONE PAPER SCISSORS\n";
   cout<<"1.rock\n2.paper\n3.scissors\n";
   cin>>userChoice;
    computerChoice = rand() % 3 + 1;

    cout << "Computer choice: ";

    if(computerChoice == 1)
        cout << "Rock\n";
    else if(computerChoice == 2)
        cout << "Paper\n";
    else
        cout << "Scissors\n";

    if(userChoice == computerChoice)
        cout << "It's a Draw!\n";

    else if((userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2))
            {
        cout << "You Win!\n";
        userscore++;
            }

    else
        cout << "Computer Wins!\n";
        computerscore++;

cout<<"userscore:"<<userscore<<endl;
cout<<"computerscore:"<<computerscore;
cout<<"\nplayAgain?(y/n):";
cin>>playAgain;
}
cout<<"Thanks for playing!";
    return 0;
}
