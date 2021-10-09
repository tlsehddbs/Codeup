#include <iostream>
#include <cstring>
using namespace std;

int temp = 0, retake_count = 0, a = 0;
double average = 0, result = 0, caltemp = 0;

string subjects[30] = {};
string levels[30] = {};
string retake_subjects[30] = {};
string retake_grades[30] = {};
string retake[30] = {};
string retakegrade[30] = {};
string averagelevel;
int grade[30] = {};

string blevel[15] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D+", "D0", "D-", "F", "Pass", "Fail" };
double bgrade[15] = { 4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0, 4.3, 0.0 };


void input(int n)
{
    for(int i = 0; i < n; i++)
        cin >> subjects[i] >> levels[i] >> grade[i];
}
void calculate(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 15; j++)
            if(levels[i] == blevel[j])
            {
                caltemp = (bgrade[j] * (int)grade[i]);
                result += caltemp;
            }
        temp += (int)grade[i];
    }
    average = result / temp;
}
void convert(double average)
{
    if(average == 4.30)				                averagelevel = "A+";
    else if(4.29 >= average && average >= 4.00) 	averagelevel = "A0";
    else if(3.99 >= average && average >= 3.70) 	averagelevel = "A-";
    else if(3.69 >= average && average >= 3.30)	    averagelevel = "B+";
    else if(3.29 >= average && average >= 3.00)	    averagelevel = "B0";
    else if(2.99 >= average && average >= 2.70)	    averagelevel = "B-";
    else if(2.69 >= average && average >= 2.30)	    averagelevel = "C+";
    else if(2.29 >= average && average >= 2.00)	    averagelevel = "C0";
    else if(1.99 >= average && average >= 1.70)	    averagelevel = "C-";
    else if(1.69 >= average && average >= 1.30)	    averagelevel = "D+";
    else if(1.29 >= average && average >= 1.00)	    averagelevel = "D0";
    else if(0.99 >= average && average >= 0.70)	    averagelevel = "D-";
    else if(0.69 >= average && average >= 0.00)	    averagelevel = "F";
}
void filter(int n)
{
    for(int i = 0; i < n; i++)
        for(int j = 6; j < 15; j++)
            if(levels[i] == blevel[j] && levels[i] != blevel[13])
            {
                retake_count++;
                
                retake[a] = subjects[i];
                retakegrade[a] = levels[i];
                a++;
            }
}
void show(int n)
{
    cout << fixed;
    cout.precision(2);

    cout << "Average : " << average << " (" << averagelevel << ")\n" << endl;
    cout << "RETAKE NEEDED " << "(" << retake_count << ")" << endl;

    for(int i = 0; i < retake_count; i++)
        cout << " " << retake[i] << " (" << retakegrade[i] << ")" << endl;
}

int main()
{
    int n;
    cin >> n;

    input(n);
    calculate(n);
    convert(average);
    filter(n);
    show(n);

    return 0;
}