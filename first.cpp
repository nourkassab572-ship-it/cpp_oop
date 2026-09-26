#include <iostream>
using namespace std;
class Book
{ 
    public:
string title;
int price;
string author;
int pages;
};

int main()
{
    Book bk1;
    Book bk2;
    Book bk3;
    bk1.title="evil";
    bk1.price=200 ;
    bk1.author="nour kassab";
    bk1.pages=300;

cout <<"price is :"<<bk1.price<<endl;
cout <<"title is: "<<bk1.title<<endl;

    return 0;
}


