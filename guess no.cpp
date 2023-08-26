#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    // welcome para
    cout<<"\t\t\t !! GAME !!"<<endl;
    cout<<"\t\t !! GUESS THE NUMBER !!"<<endl<<endl;
    cout<<"TO WIN THE GAME YOU HAVE TO GUESS A NUMBER BETWEEN 1-50"<<endl<<endl;
    // choose level
    while(true)
    {
        cout<<"Level Instructions"<<endl;
        cout<<"1 for beginner level"<<endl;
        cout<<"2 for moderate level"<<endl;
        cout<<"3 for expert level"<<endl;
        cout<<"0 for end the game"<<endl;
    
    int level;
    cout<<"CHOOSE YOUR LEVEL: ";
    cin>>level;
    // random number generation
     int random_number; 
    int guess_number;
    srand(time(0));
    random_number=((rand() % 50) + 1);
    // for beginner level
    if(level==1)
    {
        cout<<"You have total 5 chances to win the game"<<endl;
        int left=5;
        for(int i=1;i<=5;i++)
        {
            cout<<"Enter your number: ";
            cin>>guess_number;
            if(guess_number==random_number)
            {
                cout<<"YOU WON THE GAME";
                break;
            }
            else if(guess_number<random_number)
            {
                cout<<"guess the higher number"<<endl;
            }
            else
            {
                cout<<"guess the lower number"<<endl;
            }
            left--;
            if (left==0)
            {
                cout<<"THE RIGHT NUMBER IS:  "<<random_number<<endl;
                cout<<"TRY AGAIN"<<endl;
            }
        }
    }
    else if(level==2)
    {
        cout<<"You have total 3 chances to win the game"<<endl;
        int left=3;
        for(int i=1;i<=3;i++)
        {
            cout<<"Enter your number: ";
            cin>>guess_number;
            if(guess_number==random_number)
            {
                cout<<"YOU WON THE GAME";
                break;
            }
            else if(guess_number<random_number)
            {
                cout<<"guess the higher number"<<endl;
            }
            else
            {
                cout<<"guess the lower number"<<endl;
            }
            left--;
            if (left==0)
            {
                cout<<"THE RIGHT NUMBER IS:  "<<random_number<<endl;
                cout<<"TRY AGAIN"<<endl;
            }
        }
    }
     else if(level==3)
    {
        cout<<"You have total 2 chances to win the game"<<endl;
        int left=2;
        for(int i=1;i<=2;i++)
        {
            cout<<"Enter your number: ";
            cin>>guess_number;
            if(guess_number==random_number)
            {
                cout<<"YOU WON THE GAME";
                break;
            }
            else if(guess_number<random_number)
            {
                cout<<"guess the higher number"<<endl;
            }
            else
            {
                cout<<"guess the lower number"<<endl;
            }
            left--;
            if (left==0)
            {
                cout<<"THE RIGHT NUMBER IS:  "<<random_number<<endl;
                cout<<"TRY AGAIN"<<endl;
            }
        }
    }
    else if(level==0)
    {
        exit(0);
    }
    else
    {
        cout<<"First, select a number between (0,1,2,3)"<<endl;
    }}
    return 0;
}