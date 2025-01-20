#include <iostream>

using namespace std;

typedef unsigned int id; 												// Identification number of employee
typedef Map<id, Book> DB;

void addTest(DB& lDb){
    cout << "Expected Result:" << endl;
    cout << "Key: 486315746; Value: Title: Sword of Destiny; Author: Andrzej Sapkowski; Publication Date: 1992; Category: Fantasy; Units: 13;" << endl;
    cout << "Key: 564786414; Value: Title: Pet Sematary; Author: Stephen King; Publication Date: 1983; Category: Horror; Units: 9;" << endl;
    cout << "Key: 156448646; Value: Title: The Return of the King; Author: J.R.R. Tolkien; Publication Date: 1955; Category: Fantasy; Units: 25;" << endl;
    cout << "Key: 486315746; Value: Title: Harry Potter and the Golbet of Fire; Author: J.K. Rowling; Publication Date: 2000; Category: Fantasy; Units: 6;" << endl;

    lDb.add(486315746, Book("Sword of Destiny","Andrzej Sapkowski",1992,"Fantasy", 13));
    lDb.add(564786414, Book("Pet Sematary", "Stephen King", 1983, "Horror", 9));
    lDb.add(156448646, Book("The Return of the King", "J.R.R. Tolkien", 1955, "Fantasy", 25));
    lDb.add(486315746, Book("Harry Potter and the Goblet of Fire", "J.K. Rowling", 2000, "Fantasy", 6));
}

void assignValuesToPointer(DB& lDb){
    lDb.add(645586789, Book());
    Book* b;
    b = lDb.find(645586789);
    cout << "Book with defoult valuse of Constructor:" << endl;
    cout << "Assign Ttitle: The C Programing Language" << endl;
    b->title = "The C Programing Language";
    cout << "Assign Author: Brian W. Kernighan, Dennis M. Ritchie" << endl;
    b->author = "Brian W. Kernighan, Dennis M. Ritchie";
    cout << "Assign Publication Date: 1988" << endl;
    b->publicationDate = 1988;
    cout << "Assign Category: Sience" << endl;
    b->category = "Sience";
    cout << "Assign units: 3" << endl;
    b->units = 3;
}

void test(DB& libraryDatabase){
    cout << "       Tests for Library       " << endl << endl;
    cout << "          Adding Test          " <<  endl << endl;
    addTest(libraryDatabase);
    cout << "\nResult:" << endl << endl;
    cout << libraryDatabase << endl;
    cout << "          Assign Test          " <<  endl << endl;
    assignValuesToPointer(libraryDatabase);
    cout << "\n           Database            " <<  endl << endl;
    cout << libraryDatabase << endl;
}