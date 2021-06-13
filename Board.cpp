#include "Board.hpp"
#include <array>
#define BOARD_H
#ifndef BOARD_H



using namespace std;
const int reSize = 10;


namespace ariel 
{
    bool is_in_rang(unsigned int a ,unsigned int b , Direction c , unsigned int lens , unsigned int row,unsigned int col)
    {
        if(c == Direction::Vertical)
        {
            if( a+lens >= row || b > col-1) 
            {
              return false;
            }
        }
        else
        { 
            if(b + lens >= col || a >= row) 
            {
              return false;
            }
        }
        return true;
    }

   
    void Board::Limits(unsigned int a ,unsigned int b , Direction c , unsigned int lens)
    {
        if(a<this->min1) 
        {
          this->min1=a;
        }
        if(b<this->min2) 
        {
          this->min2=b;
        }
        if(c == Direction::Horizontal)
        {
            if(a>this->max1)
            {
              this->max1=a;
            }
            if(b+lens>this->max2)
            {
              this->max2= b+lens;
            }
        }
        else
        {
            if(a+lens>this->max1)
            {
              this->max1=a+lens;
            }
            if(b>this->max2)
            {
              this->max2 = b;
            }
        }
    }

   
    void Board::post(unsigned int a ,unsigned int b , Direction c ,string const& s)
    {
        unsigned int lenS=s.length();
        while(!is_in_rang(a,b,c,lenS ,row , col))
        {
            unsigned int new_size = row  *reSize;
            board.resize(new_size);
            for(unsigned int i = 0 ; i < new_size ; i++)
            {
                board[i].resize(new_size,'_');    
            }
            row = col = new_size;
        }
        Limits(a,b,c,lenS);
        unsigned int row1=a;
        unsigned int col1=b;

        for(unsigned int i = 0 ; i < lenS ; i++)
        {
            if(c == Direction::Horizontal)
            {
                board[row1][col1] = (char)s.at(i);
                col1++;
            }
            else
            {
                board[row1][col1] = (char)s.at(i);
                row1++;
            }
        }
    }

   
    string Board::read(unsigned int a ,unsigned  int b , Direction c , unsigned int len)
    {
        string s = string("");
        if(c == Direction::Horizontal)
        {
            if(!is_in_rang(a,b,c,len,row,col))
            {

                int i = 0;
                unsigned int b2 = b;
                int temp = (int)col -(int)b2;

                for(i = 0 ; i <temp && a < row; i++)
                {
                    s+=board[a][b];
                    b++;
                }
                unsigned int k = len-(unsigned int)i;
                while(k > 0)
                {
                    s+='_';
                    k--;
                }
                return s ;    
            }
            for(int i = 0 ; i < len ; i++)
            {
                s+=board[a][b];
                b++;
            }
        }
        else
        {
            if(!is_in_rang(a,b,c,len,row,col))
            {
                int i = 0 ;
                unsigned int a2 = a;
                int temp = (int)row -(int)a2;
                for(i = 0 ; i<temp && b<col ; i++)
                {
                    s+=board[a][b];
                    a++;
                }
                unsigned int k = len-(unsigned int)i;
                while(k > 0)
                {
                    s+='_';
                    k--;
                }
                return s;    
            }
            for(int i = 0 ; i<len ; i++)
            {
                s+=board[a][b];
                a++;
            }
        }
        return s;
    }
    void Board::show()
    {
        unsigned int i=0;
        unsigned int j=0;
      
        for( i = min1 ; i <= max1 ; i++)
        {
            cout << i << " :\t";
            for(j = min2 ; j< max2 ; j++)
            {
                cout << board[i][j];
            }
            cout<<endl;
        }
    }
};
#endif
