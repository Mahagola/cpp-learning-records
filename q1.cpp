
#include <iostream>
#include <fstream>
using namespace std;

class Book
{
public:
    int book_id;
    int book_price;
    string book_name; 
    string book_author;

    Book(){};
    Book(int id, int price, string name, string author){
        book_id = id;
        book_price = price;
        book_name = name;
        book_author = author;
    }

};
int main()
{
    int n, id, price;
    string name, author;
    cin >> n;

    fstream open("datafile", ios::out | ios::binary | ios::in);
    open.seekp(ios::beg);
    for (int i = 0; i < n; i++)
    {   
        cout<<"Enter Details of book "<<i+1<<endl;
        cin >> id >> price >> name >> author;
        if (id % 5 == 0 && price > 300)
        {
            Book book(id, price, name, author);
            open.write((char *)&book, sizeof(Book));
        }
    }

    int RecordNumber; 
    cout<<"Enter Sno of book to display"<<endl;
    cin>>RecordNumber;
    open.seekg(ios::beg);

  
    open.seekg((RecordNumber-1)*sizeof(Book));
    Book book;
    open.read((char *)&book, sizeof(Book));
    cout << book.book_id << " " << book.book_price << " " << book.book_name << " " << book.book_author << endl;

    cout<<"Enter Sno of book to Overwrite"<<endl;
    cin>>RecordNumber;
    open.seekp((RecordNumber-1)*sizeof(Book));

    cout<<"Enter details for new book"<<endl;
    cin>>id>>price>>name>>author;
    Book book_(id, price, name, author);
    open.write((char*)&book_, sizeof(Book));

    open.seekg(0);
    while (!open.eof())
    {
        Book book;
        open.read((char *)&book, sizeof(Book));
        cout << book.book_id << " " << book.book_price << " " << book.book_name << " " << book.book_author << endl;
    }
    

    return 0;
}
