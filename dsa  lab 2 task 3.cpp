#include <iostream>
using namespace std;

class LibraryItem
{
protected:
    char title[50];
public:
    LibraryItem(const char* t) 
    {
        int i = 0;
        while (t[i] != '\0' && i < 49) 
        {
            title[i] = t[i];
            i++;
        }
        title[i] = '\0';
    }

    virtual void display() const = 0;  
    virtual const char* getKey() const = 0; 
    virtual ~LibraryItem() {}
};

class Book : public LibraryItem 
{
    char author[50];
    int pages;
public:
    Book(const char* t = "", const char* a = "", int p = 0)
        : LibraryItem(t), pages(p) 
    {
        int i = 0;
        while (a[i] != '\0' && i < 49) 
        {
            author[i] = a[i];
            i++;
        }
        author[i] = '\0';
    }

    void display() const override
    {
        cout << "Book Title: " << title << "\nAuthor: " << author
            << "\nPages: " << pages << "\n";
    }

    const char* getKey() const override 
    {
        return title; 
    }
    int getPages() const 
    { 
        return pages; 
    }

    bool equals(const char* key) const
    {
        int i = 0;
        while (title[i] == key[i] && title[i] != '\0' && key[i] != '\0') i++;
        return title[i] == '\0' && key[i] == '\0';
    }

    bool lessThan(const Book& other) const
    {
        return pages < other.pages;
    }
};


class Newspaper : public LibraryItem 
{
    char date[20];
    char edition[50];
public:
    Newspaper(const char* t = "", const char* d = "", const char* e = "")
        : LibraryItem(t) 
    {
        int i = 0;
        while (d[i] != '\0' && i < 19)
        {
            date[i] = d[i];
            i++;
        }
        date[i] = '\0';

        i = 0;
        while (e[i] != '\0' && i < 49)
        {
            edition[i] = e[i];
            i++;
        }
        edition[i] = '\0';
    }

    void display() const override 
    {
        cout << "Newspaper Name: " << title
            << "\nDate: " << date
            << "\nEdition: " << edition << "\n";
    }

    const char* getKey() const override 
    { 
        return title; 
    }
    const char* getEdition() const
    {
        return edition;
    }

    bool equals(const char* key) const 
    {
        int i = 0;
        while (title[i] == key[i] && title[i] != '\0' && key[i] != '\0') i++;
        return title[i] == '\0' && key[i] == '\0';
    }

    bool lessThan(const Newspaper& other) const 
    {
        int i = 0;
        while (edition[i] != '\0' && other.edition[i] != '\0') 
        {
            if (edition[i] < other.edition[i]) return true;
            if (edition[i] > other.edition[i]) return false;
            i++;
        }
        return edition[i] == '\0' && other.edition[i] != '\0';
    }
};


class Library 
{
    Book books[10];
    Newspaper newspapers[10];
    int bookCount;
    int newsCount;
public:
    Library() 
    {
        bookCount = 0;
        newsCount = 0;
    }

    void addBook(const Book& b) 
    {
        if (bookCount < 10)
            books[bookCount++] = b;
    }

    void addNewspaper(const Newspaper& n)
    {
        if (newsCount < 10)
            newspapers[newsCount++] = n;
    }

    void displayCollection() const 
    {
        cout << "\n--- Books ---\n";
        for (int i = 0; i < bookCount; i++)
            books[i].display();

        cout << "\n--- Newspapers ---\n";
        for (int i = 0; i < newsCount; i++)
            newspapers[i].display();
    }

    void sortBooksByPages()
    {
        for (int i = 0; i < bookCount - 1; i++)
        {
            for (int j = 0; j < bookCount - i - 1; j++) 
            {
                if (!books[j].lessThan(books[j + 1]))
                {
                    Book temp = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = temp;
                }
            }
        }
    }

    void sortNewspapersByEdition() 
    {
        for (int i = 0; i < newsCount - 1; i++) 
        {
            for (int j = 0; j < newsCount - i - 1; j++) 
            {
                if (!newspapers[j].lessThan(newspapers[j + 1])) 
                {
                    Newspaper temp = newspapers[j];
                    newspapers[j] = newspapers[j + 1];
                    newspapers[j + 1] = temp;
                }
            }
        }
    }

    Book* searchBookByTitle(const char* title) 
    {
        for (int i = 0; i < bookCount; i++)
        {
            if (books[i].equals(title))
                return &books[i];
        }
        return NULL;
    }

    Newspaper* searchNewspaperByName(const char* name) 
    {
        for (int i = 0; i < newsCount; i++) 
        {
            if (newspapers[i].equals(name))
                return &newspapers[i];
        }
        return NULL;
    }
};


int main() 
{

    Book book1("The Catcher in the Rye", "J.D. Salinger", 277);
    Book book2("To Kill a Mockingbird", "Harper Lee", 324);

    Newspaper newspaper1("Washington Post", "2024-10-13", "Morning Edition");
    Newspaper newspaper2("The Times", "2024-10-12", "Weekend Edition");

    Library library;

    library.addBook(book1);
    library.addBook(book2);
    library.addNewspaper(newspaper1);
    library.addNewspaper(newspaper2);

    cout << "Before Sorting:\n";
    library.displayCollection();

    library.sortBooksByPages();
    library.sortNewspapersByEdition();

    cout << "\nAfter Sorting:\n";
    library.displayCollection();

    Book* foundBook = library.searchBookByTitle("The Catcher in the Rye");
    if (foundBook) 
    {
        cout << "\nFound Book:\n";
        foundBook->display();
    }
    else 
    {
        cout << "\nBook not found.\n";
    }

    Newspaper* foundNewspaper = library.searchNewspaperByName("The Times");
    if (foundNewspaper)
    {
        cout << "\nFound Newspaper:\n";
        foundNewspaper->display();
    }
    else 
    {
        cout << "\nNewspaper not found.\n";
    }

    return 0;
}
