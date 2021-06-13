#include "Board.hpp"
#include <iostream>
#include <stdlib.h>



using namespace std;
using namespace ariel;




void title(ariel::Board *num)
{
    
    unsigned int i =100;
    num->post(0,i--,Direction::Vertical," #####");
    num->post(0,i--,Direction::Vertical," #####");
    num->post(0,i--,Direction::Vertical," #####");
    num->post(0,i--,Direction::Vertical," ##   ");
    num->post(0,i--,Direction::Vertical,"###   ");
    num->post(0,i--,Direction::Vertical,"###   ");
    num->post(0,i--,Direction::Vertical,"###   ");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"##    ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"      "); 
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"##  ##");
    num->post(0,i--,Direction::Vertical,"##    ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"###   ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"###   ");
    num->post(0,i--,Direction::Vertical,"###   ");
    num->post(0,i--,Direction::Vertical,"###   ");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"    ##");
    num->post(0,i--,Direction::Vertical,"    ##");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"    ##");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"      ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"##    ");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"######");
    num->post(0,i--,Direction::Vertical,"    ##");
    num->post(0,i--,Direction::Vertical,"    ##");
}

void hearts(ariel::Board *num)
{

    for(unsigned int i = 0 ; i <10 ; i++)
    {
        unsigned int j =  rand()%30;
        unsigned int k =  rand()%150;
        num->post(j,k,Direction::Horizontal,"     ___  ___    ");
        num->post(j+1,k,Direction::Horizontal,"    /***\\/***\\   ");
        num->post(j+2,k,Direction::Horizontal,"   /**********\\  ");
        num->post(j+3,k,Direction::Horizontal,"   \\**********/  ");
        num->post(j+4,k,Direction::Horizontal,"    \\********/   ");
        num->post(j+5,k,Direction::Horizontal,"     \\******/    ");
        num->post(j+6,k,Direction::Horizontal,"      \\****/     ");
        num->post(j+7,k,Direction::Horizontal,"       \\**/      ");
        num->post(j+8,k,Direction::Horizontal,"        \\/       ");
    }
}



int main()
{
	ariel::Board num;
    title(&num);
    hearts(&num);

    unsigned int r = rand()%100;
    unsigned int c = rand()%100;
    unsigned int l = rand()%100;
    cout << " a : " << r << ", b : " << c << ", len : "<<l << endl<<endl;

    for(unsigned int h = 0 ; h < 15 ; h ++)
    {
        cout << num.read(r+h,c,Direction::Horizontal,l)<<endl;
    }
    r = rand()%100;
    c = rand()%100;
    l = rand()%100;
    cout << " a : " << r << ", b : " << c << ", len : "<<l << endl<<endl;
    
    for(unsigned int h = 0 ; h < 15 ; h ++)
    {
        cout << num.read(r,c+h,Direction::Vertical,l)<<endl;
    }


    num.post(0,0,Direction::Horizontal,"______________________");
    num.post(1,0,Direction::Horizontal,"| Task 2 part B in   |");
    num.post(2,0,Direction::Horizontal,"| c++, name :yuval   |");
    num.post(3,0,Direction::Horizontal,"| good luck with that|");
    num.post(4,0,Direction::Horizontal,"|  :)  :)  :)  :)  :)|");
    num.post(5,0,Direction::Horizontal,"|____________________|");
    num.post(15,52,Direction::Horizontal,"______________________");
    num.post(16,52,Direction::Horizontal,"| Task 2 part B in   |");
    num.post(17,52,Direction::Horizontal,"| c++, name :yuval   |");
    num.post(18,52,Direction::Horizontal,"| good luck with that|");
    num.post(19,52,Direction::Horizontal,"|  :)  :)  :)  :)  :)|");
    num.post(20,52,Direction::Horizontal,"|____________________|");
    num.post(20,15,Direction::Horizontal,"____________________________________");
    num.post(21,15,Direction::Horizontal,"| Today's weather :                 |");
    num.post(22,15,Direction::Horizontal,"| ~~~~~~~~~~~~~~~~                  |");
    num.post(23,15,Direction::Horizontal,"| will be rainy in the north        |");
    num.post(24,15,Direction::Horizontal,"| and cooler in the center          |");
    num.post(25,15,Direction::Horizontal,"| of the country                    |");
    num.post(26,15,Direction::Horizontal,"| and in the south warmer than usual|");
    num.post(27,15,Direction::Horizontal,"|___________________________________|");
    num.post(10,105,Direction::Horizontal,"____________________________________");
    num.post(11,105,Direction::Horizontal,"| Today's weather :                 |");
    num.post(12,105,Direction::Horizontal,"| ~~~~~~~~~~~~~~~~                  |");
    num.post(13,105,Direction::Horizontal,"| will be rainy in the north        |");
    num.post(14,105,Direction::Horizontal,"| and cooler in the center          |");
    num.post(15,105,Direction::Horizontal,"| of the country                    |");
    num.post(16,105,Direction::Horizontal,"| and in the south warmer than usual|");
    num.post(17,105,Direction::Horizontal,"|___________________________________|");
    num.post(7,51,Direction::Horizontal,"|House for sale!/^\\       |");
    num.post(8,51,Direction::Horizontal,"| in ariel     /   \\      |");
    num.post(9,51,Direction::Horizontal,"| 6 rooms     /    /^\\    |");
    num.post(10,51,Direction::Horizontal,"|in a special/    /   \\   |");
    num.post(11,51,Direction::Horizontal,"|  price !! |    /     \\  |");
    num.post(12,51,Direction::Horizontal,"|           |   /       \\ |");
    num.post(13,51,Direction::Horizontal,"|           |  /_________\\|");
    num.post(14,51,Direction::Horizontal,"|           |  | #     # ||");
    num.post(15,51,Direction::Horizontal,"|           \\  |         ||"); 
    num.post(16,51,Direction::Horizontal,"|phone:      \\ |    #    ||");
    num.post(17,51,Direction::Horizontal,"|03-4565465   \\|____#____||");
    num.show();
    
    unsigned int a = rand()%300;
    unsigned int b = rand()%700;
    unsigned int len = rand()%100;
    cout << endl<<" a : " << a << " b : " << b << " len : "<<len << endl<<endl;
    for(unsigned int h = 0 ; h < 15 ; h ++)
    {
        cout << num.read(a+h,b,Direction::Horizontal,len)<<endl;
    }
    a = rand()%5000;
    b = rand()%7000;
    len = rand()%100;
    cout << " a : " << a << ", b : " << b << ", len : "<<len << endl;
    for(unsigned int h = 0 ; h < 15 ; h ++)
    {
        cout << y.read(a,b+h,Direction::Vertical,len)<<endl;
    }

    a = rand()%30;
    b = rand()%70;
    len = rand()%100;
    cout << endl<<" a : " << a << " b : " << b << " len : "<<len << endl<<endl;
    for(unsigned int h = 0 ; h < 15 ; h ++) 
    {
        cout << num.read(a+h,b,Direction::Horizontal,len)<<endl;
    }
    a = rand()%50;
    b = rand()%70;
    len = rand()%100;
    cout << " a : " << a << ", b : " << b << ", len : "<<len << endl;
    for(unsigned int h = 0 ; h < 15 ; h ++)
    {
        cout << num.read(a,b+h,Direction::Vertical,len)<<endl;
    }
}
