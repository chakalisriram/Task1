#include<iostream.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main()
{
  clrscr();
  randomize();
  int target=random(100)+ 1;
  int guess;
  cout<< "Welcome To Number Guessing Game"<< endl;
  while(guess!=target)
  {
    cout<<"Enter Your Guess : ";                                          

    cin >> guess;
    if (guess > target)
    {
      cout << "Guessed Number is Too High,Try Again!!" << endl;
    }
    else if (guess < target)
    {
      cout << "Guessed Number is Too Low,Try Again!!" << endl;
    }
    else {
      cout << "You Guessed The Correct Number!!";
    }
  }
}