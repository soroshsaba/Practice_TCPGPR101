#include <iostream>
#include <string>

using namespace std;
int main()
{
    int score;
    cout << "Type in your grade results on a scale of 0-100: ";
    cin >> score;
    string grade;
    
    if (score > 100 || score < 0)
    {
        grade = "INVALID";
    }
    else if (score >= 80)
    {
        grade = "A*";
    }
    else if (score >= 70)
    {
        grade = "A";
    }
    else if (score >= 60)
    {
        grade = "B";
    }
    else if (score >= 50)
    {
        grade = "C";
    }
    else if (score >= 40)
    {
        grade = "D";
    }
    else if (score >= 1)
    {
        grade = "F";
    }
    else if (score >= 0)
    {
        grade = "U";
    }

    cout << "\nYou have a grade of '" << grade << "'.\n";

    return 0;
}
