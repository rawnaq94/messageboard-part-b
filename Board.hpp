#include "Direction.hpp"
#include <vector>
#include <iostream>
#include <limits>
#include <string>
using namespace std;
using std::string;




namespace ariel 
{
	
	class Board 
  {
		private:
			unsigned int min1 ,min2 ,max1 ,max2;
			unsigned int row, col;
			vector<vector<char>> board;

     public:
			Board():min1(std::numeric_limits<int>::max()),min2(std::numeric_limits<int>::max())
				,max1(0),max2(0),row(100),col(100)
      {
				board.resize(row);
				for(unsigned int i = 0 ; i < row ; i++)
					board.at(i).resize(col,'_');
    		}
			void post(unsigned int,unsigned int, Direction,string const&);
      string read(unsigned int,unsigned int, Direction,unsigned int)
      void show();

		private:
			void Limits(unsigned int a ,unsigned int b , Direction c , unsigned int lens);
	};
};
