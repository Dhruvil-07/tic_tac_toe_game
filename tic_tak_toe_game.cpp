#include<iostream>
using namespace std;

class game
{
    char board[3][3] = 
    {
        {'-','-','-'},
        {'-','-','-'},
        {'-','-','-'}
    };

    public:
        
    //method for show game board
    void show_board()
    {
        for(int i = 0 ; i<3 ; i++)
        {
            for(int j = 0 ; j<3 ; j++)
            {
                cout<<board[i][j] << " ";
            }
            cout<<endl;
        }
    };


    //method for enter value in game board
    bool insert(int row , int cloumn , char val)
    {
        if(board[row][cloumn] == '-')
        {
            board[row][cloumn] = val;
            return true;
        }
        else
        {
            cout<<"element is already there";
            return false;
        }
    }
        
};


int main()
{
   game g;
 
   int i = 0;
   int position;
   char val;


   while(i<9)
   {
        cout<<"Enter position = ";
        cin>>position;

        if(position>=0 && position<=8)
        {
            cout<<"Enter value : ";
            cin>>val;


            i++;
        }
        else
        {
            cout<<"Invalid position..."<<endl;
        }
   }



}