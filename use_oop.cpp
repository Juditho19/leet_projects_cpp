#include <iostream>
#include <string>

class Book {
    //Bundling data + functions together,
    //and hiding what doesn't need to be seen.
private:
    std::string title;
    std::string author;
    double price;




public:
    //Constructor = special method that runs automatically
    //when an object is created
    Book(std::string t, std::string a){
        title = t;
        author = a;
        price = 0.0;
    }


    //Getters-Reads a private variable safely
    //setters- Writes to a private variable (with validation!)

    std::string getTitle() { return title; }
    std::string getAuthor() { return author; }
    double getPrice() { return price; }

    void setPrice (double p) {
        if (p > 0.) {
            price = p;
        }
    }

    void displayDetails() {
        std::cout << "Title: " << title << "\n"
                << "Author: " << author << "\n"
                << "Price: " << price << "\n\n";
    }
};

int main() {

    Book myBook("Red Rising", "Pierce Brown");

    std::cout << "---Initial Details---\n";
    myBook.displayDetails();

    //set price
    myBook.setPrice(25.99);
    std::cout << "---Updated Details---\n";
    myBook.displayDetails();
    return 0;
}