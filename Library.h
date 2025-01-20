#include <iostream>

using namespace std;

class Book{
public:
    string title;
    string author;
    string category;
    unsigned int publicationDate;
    unsigned int units;

    Book(string t = "", string a = "", int pD = 0, string c = "", int u = 0){
        title  = move(t);
        author = move(a);
        publicationDate = pD;
        category = move(c);
        units = u;
    };

    friend ostream& operator<<(ostream& s, const Book& b){
        cout << "Title: " << b.title << "; Author: " << b.author << "; Publication Date: " << b.publicationDate << "; Category: " << b.category << "; Units: " << b.units;
        return s;
    };
};
