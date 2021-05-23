#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, temp = 0, retake_count = 0, a = 0;
    double average = 0, result = 0, caltemp;

    string subject[30] = {};
    string level[30] = {};
    int grade[30] = {};

    string blevel[15] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D+", "D0", "D-", "F", "Pass", "Fail" };
    double bgrade[15] = { 4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0, 4.3, 0.0 };
    
    string retake[30] = {};
    string retakegrade[30] = {};
    string avglevel;

    cin >> n;

    // 입력
    for(int i = 0; i < n; i++)    
        cin >> subject[i] >> level[i] >> grade[i];    

    // 학점 계산
    for(int i = 0; i < n; i++)
    {
	    for(int j = 0; j < 15; j++)
            if(level[i] == blevel[j])
            {
                caltemp = (bgrade[j] * (int)grade[i]); 
                result += caltemp;
            }

        temp += int(grade[i]);
    }
    // 평균 계산
    average = result / temp;

    // 평균에 의한 학점 평어
    if(average == 4.30)				                avglevel = "A+";
    else if(4.29 >= average && average >= 4.00) 	avglevel = "A0";
    else if(3.99 >= average && average >= 3.70) 	avglevel = "A-";
    else if(3.69 >= average && average >= 3.30)	    avglevel = "B+";
    else if(3.29 >= average && average >= 3.00)	    avglevel = "B0";
    else if(2.99 >= average && average >= 2.70)	    avglevel = "B-";
    else if(2.69 >= average && average >= 2.30)	    avglevel = "C+";
    else if(2.29 >= average && average >= 2.00)	    avglevel = "C0";
    else if(1.99 >= average && average >= 1.70)	    avglevel = "C-";
    else if(1.69 >= average && average >= 1.30)	    avglevel = "D+";
    else if(1.29 >= average && average >= 1.00)	    avglevel = "D0";
    else if(0.99 >= average && average >= 0.70)	    avglevel = "D-";
    else if(0.69 >= average && average >= 0.00)	    avglevel = "F";
    
    // 미달 과목
    for(int i = 0; i < n; i++)
        for(int j = 6; j < 15; j++)
            if(level[i] == blevel[j] && level[i] != blevel[13])
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
