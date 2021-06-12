#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100] = {}, temp[10] = {};
    cin >> a;

    for(int i = 0; i < strlen(a); i++)
        if(a[i] == '.')
            for(int j = 0; j < strlen(a) - i; j++)
                temp[j] = a[i + j];

    if(strcmp(temp, ".dib") == 0)
        cout << "Paint.Picture";
    if(strcmp(temp, ".doc") == 0)
        cout << "Word.Document.8";
    if(strcmp(temp, ".docx") == 0)
        cout << "Word.Document.12";
    if(strcmp(temp, ".htm") == 0)
        cout << "htmfile";
    if(strcmp(temp, ".html") == 0)
        cout << "htmlfile";
    if(strcmp(temp, ".hwp") == 0)
        cout << "Hwp.Document.96";
    if(strcmp(temp, ".hwpx") == 0)
        cout << "Hwp.Document.hwpx.96";
    if(strcmp(temp, ".hwt") == 0)
        cout << "Hwp.Document.hwt.96";
    if(strcmp(temp, ".jpe") == 0 || strcmp(temp, ".jpeg") == 0 || strcmp(temp, ".jpg") == 0)
        cout << "jpegfile";
    if(strcmp(temp, ".ppt") == 0)
        cout << "PowerPoint.Show.8";
    if(strcmp(temp, ".pptx") == 0)
        cout << "PowerPoint.Show.12";
    if(strcmp(temp, ".pptxml") == 0)
        cout << "powerpointxmlfile";

    return 0;
}