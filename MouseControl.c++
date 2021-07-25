#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
    POINT p;
    int a=5,count=0;
    cout<<"ready\n";
    while(true)
    {
        if(GetCursorPos(&p))
        {
            if(GetKeyState(VK_UP) & 0x8000)
            {
                cout<<"UP ";
                SetCursorPos(p.x,p.y-a);
            }
            else if(GetKeyState(VK_DOWN) & 0x8000)
            {
                cout<<"DOWN ";
                SetCursorPos(p.x,p.y+a);
            }
            else if(GetKeyState(VK_LEFT) & 0x8000)
            {
                cout<<"LEFT ";
                SetCursorPos(p.x-a,p.y);
            }
            else if(GetKeyState(VK_RIGHT) & 0x8000)
            {
                cout<<"RIGHT ";
                SetCursorPos(p.x+a,p.y);
            }
        }
        Sleep(10);
    }
}