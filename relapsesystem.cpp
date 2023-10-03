#include <iostream>
#include <windows.h>
using namespace std;

//compiling guide: g++ relapsesystem.cpp -o relapsesystem -lwinmm (in Visual Studio)
void displayText(const string &lyrics);

int main(int argc, char *argv[])
{
    string dialouge[] = {"Naluko na!!!", "10 PM na pala SHET!!!", "tulongggg", "*nag-iba ng anyo*", "uwwaaarrrrrrggghhhhhh!!!!"};
    string lyrics[] = {"Di mapigilang mag-isip...","Na baka sa tagal...","Mahulog ang loob mo sa iba..."};

    int sizeD = sizeof(dialouge) / sizeof(dialouge[0]);
    int sizeL = sizeof(lyrics) / sizeof(lyrics[0]);

    displayText("Hello World!!!");
    cout << "\n\n\n\n\n";
    Sleep(3000);

    for (int i = 0; i < sizeD; i++)
    {
        displayText(dialouge[i]);
        cout << endl;
        Sleep(500);
    }

    cout << "\n\n===================================================\n";
    cout << "Press any key to continue";
    getchar();

    PlaySound(TEXT("relapse.wav"), NULL, SND_ASYNC);

    for (int i = 0; i < sizeL; i++)
    {
        displayText(lyrics[i]);
        cout << endl;
        Sleep(1100);
    }

    return 0;
}

void displayText(const string &lyrics)
{
    for (int i = 0; i < lyrics.length(); i++)
    {
        //120ms delay
        Sleep(120); 
        cout << lyrics.at(i);
    }
}