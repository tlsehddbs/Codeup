#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, temp = 0, retake_count = 0;
    double average = 0, result = 0, caltemp;

    string subject[30] = {};
    string level[30] = {};
    int grade[30] = {};

    string retake[30] = {};
    string retakegrade[30] = {};
    string avglevel;

    cin >> n;

    //입력
    for (int i = 0; i < n; i++)    
        cin >> subject[i] >> level[i] >> grade[i];    

    // 학점 계산
    for (int i = 0; i < n; i++)
    {
        if(level[i] == "A+")         
            { caltemp = (4.3 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "A0")    
            { caltemp = (4.0 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "A-")    
            { caltemp = (3.7 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "B+")    
            { caltemp = (3.3 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "B0")    
            { caltemp = (3.0 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "B-")    
            { caltemp = (2.7 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "C+")    
            { caltemp = (2.3 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "C0")    
            { caltemp = (2.0 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "C-")    
            { caltemp = (1.7 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "D+")    
            { caltemp = (1.3 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "D0")    
            { caltemp = (1.0 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "D-")    
            { caltemp = (0.7 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "F")     
            { caltemp = (0.0 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "Pass")  
            { caltemp = (4.3 * (int)grade[i]); result += caltemp; }
        else if(level[i] == "Fail")  
            { caltemp = (0.0 * (int)grade[i]); result += caltemp; }

        temp += int(grade[i]);
    }
    // 평균 계산
    average = result / temp;

    // 평균에 의한 학점 평어
    if (average == 4.30)
        avglevel = "A+";
    else if (4.29 >= average && average >= 4.00)
        avglevel = "A0";
    else if (3.99 >= average && average >= 3.70)
        avglevel = "A-";
    else if (3.69 >= average && average >= 3.30)
        avglevel = "B+";
    else if (3.29 >= average && average >= 3.00)
        avglevel = "B0";
    else if (2.99 >= average && average >= 2.70)
        avglevel = "B-";
    else if (2.69 >= average && average >= 2.30)
        avglevel = "C+";
    else if (2.29 >= average && average >= 2.00)
        avglevel = "C0";
    else if (1.99 >= average && average >= 1.70)
        avglevel = "C-";
    else if (1.69 >= average && average >= 1.30)
        avglevel = "D+";
    else if (1.29 >= average && average >= 1.00)
        avglevel = "D0";
    else if (0.99 >= average && average >= 0.70)
        avglevel = "D-";
    else if (0.69 >= average && average >= 0.00)
        avglevel = "F";
    
    // 미달 과목
    int a = 0;
    
    for (int i = 0; i < n; i++)
        if (level[i] == "C+" || level[i] == "C0" || level[i] == "C-" || level[i] == "D+" || level[i] == "D0" || level[i] == "D-" || level[i] == "F" || level[i] == "Fail")
        {
            retake_count++;

            retake[a] = subject[i];
            retakegrade[a] = level[i];
            a++;
        }
    

    cout << fixed;
    cout.precision(2);

    // 출력
    cout << "Average : " << average << " (" << avglevel << ")" << endl << endl;
    cout << "RETAKE NEEDED " << "(" << retake_count << ")" << endl;

    for(int i = 0; i < retake_count; i++)
       cout << " " << retake[i] << " (" << retakegrade[i] << ")" << endl;

    return 0;
}