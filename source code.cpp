//long int randNum , randMax , randMin ;
//randMax=999999;
//randNum=1;
//randMin=111111;
//
//randNum = (rand () % (randMax - randMin)) + randMin;



#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
#include<ctime>
#include<unistd.h>

using namespace std;

int main()
{
		//FONT SIZE CHANGE 
		CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof(cfi);
		cfi.nFont = 0;
		cfi.dwFontSize.X = 0;                   // Width of each character in the font
		cfi.dwFontSize.Y = 24;                  // Height
		cfi.FontFamily = FF_DONTCARE;
		cfi.FontWeight = FW_NORMAL;
		std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
		SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	
	
	
    gohere : ;                   //goto statement 
    int randNum[100],bestof;
    int a = 0 , b = 0;
    
    cout<<"ENTER THE DEGREE OF RANDOMNESS YOU NEED [0 - 100] : ";
    cin>>bestof;
    
    system("cls");
    
    if(bestof>=100)
    {
        cout<<"oops some error occured try putting some lower value";
        exit(0);
    }
    srand (time (0));           //algorithm for the absolute degree of randomness
    for(int i = 0 ; i < bestof ; i++)
    {
		randNum[i] = rand() % 2 ;			//for generating random number on binary scale 
        cout<<randNum[i];
        
    	if(bestof<=10)
    	{	
        	usleep(500000);      //for animation 
		}
		else
		{
			usleep(100000);     //for animation 
		}
        
        if(randNum[i] == 0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    
    
    if(a>b)
    {
        system("cls");
        cout<<"HEADS";
    }
    else
        if(a<b)
        {
            system("cls");
            cout<<"TAILS";
        }
    else
    {
        system("cls");
        cout<<"trying again , you are having a bad luck >>>>>>>>>>>>\n";
        goto gohere;
    }
        
    getch();
    return 0;
}
