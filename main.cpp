#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;


//the string variable number is the user input as a string
std::string number;
string replayValue;

//the result string will print the final value as a string
std::string result;


//the main events happen here in this function
void play()
{
    cout << "Enter a number: " << endl;
    cin >> number;

    //this converts the use input to an integer to be used for the main if/else statements
    istringstream buffer(number);
    int value;
    buffer >> value;


    if (value % 2 == 0)
    {
        cout << "Number is even, tripling each digit in the integer..." << endl;

        for (int i = 0; i < number.size(); i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result += number.at(i);
            }

        }
        cout << result << endl;
        result.clear();


    }

    //odd numbers are handled here
    else if (value % 2 == 1)
    {
        cout << "Number is odd, doubling each digit in the integer..." << endl;
        //this for loop grabs the digits of the input
        for (int i = 0; i < number.size(); i++)
        {
            //this for loop duplicates those digits
            for (int j = 0; j < 2; j++)
            {
                result += number.at(i);
            }

        }
        cout << result << endl;
        //this clears the contents of the result variable to make room for a new input
        result.clear();
    }
    cout << "Would you like to enter another integer (y/n): " << endl;
    cin >> replayValue;
}

//runs when the user wants to play again
//handles the stopping and/or continuing the program
void replay()
{
    while (replayValue == "y")
    {
        play();

        if (replayValue == "n")
        {
           break;
        }
    }
}


//main method
int main()
{
    play();
    replay();
}

