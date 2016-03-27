#include <iostream>
#include <sstream>
#include <cmath>
#include <string>

using namespace std;

std::string number;
string replayValue;
int result = 0;



void play()
{
    cout << "Enter a number: ";
    cin >> number;

    istringstream buffer(number);
    int value;
    buffer >> value;


    if (value % 2 == 0)
    {
        cout << "Number is even, tripling each digit in the integer...";

        for (int i = 0; i < number.size(); i++)
        {
            for (int j = 0; j < 3; j++)
            {
                result = result+i;
            }
        }
        cout << "Result: " << result << endl;
    }
    else if (value % 2 == 1)
    {
        cout << "Number is odd, doubling each digit in the integer...";
        cout << "Result: " << value << value <<endl;
    }
    cout << "Would you like to enter another integer (y/n): ";
    cin >> replayValue;
}

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






int main()
{
    play();
    replay();
}

// On my honor:
//
// - I have not discussed the C++ language code in my program with
// anyone other than my instructor or the teaching assistants
// assigned to this course.
//
// - I have not used C++ language code obtained from another student,
// or any other unauthorized source, either modified or unmodified.
//
// - If any C++ language code or documentation used in my program
// was obtained from an allowed source, such as a text book or course
// notes, that has been clearly noted with a proper citation in
// the comments of my program.
//
// <Student Name>
