#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

const int MAX_ITEMS = 100;

class LibraryItem {
private:
    string title;
    string author;
    string dueDate;

public:
    LibraryItem(string t, string a, string d) : title(t), author(a), dueDate(d) {}
    virtual ~LibraryItem() {}

    
    string getTitle() { return title; }
    string getAuthor() { return author; }
    string getDueDate() { return dueDate; }

    void setTitle(string newTitle) { title = newTitle; }
    void setAuthor(string newAuthor) { author = newAuthor; }
    void setDueDate(string newDueDate) { dueDate = newDueDate; }

    
    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() const = 0;
};


class Book : public LibraryItem {
private:
    string ISBN;

public:
    Book(string t, string a, string d, string isbn) : LibraryItem(t, a, d), ISBN(isbn) {}

    void checkOut() override {
        cout << "Book \"" << getTitle() << "\" checked out.\n";
    }

    void returnItem() override {
        cout << "Book \"" << getTitle() << "\" returned.\n";
    }

    void displayDetails() const override {
        cout << "Book: " << getTitle() << " | Author: " << getAuthor() << " | Due: " << getDueDate() << " | ISBN: " << ISBN << endl;
    }
};


class DVD : public LibraryItem {
private:
    int duration;

public:
    DVD(string t, string a, string d, int dur) : LibraryItem(t, a, d), duration(dur) {}

    void checkOut() override {
        cout << "DVD \"" << getTitle() << "\" checked out.\n";
    }

    void returnItem() override {
        cout << "DVD \"" << getTitle() << "\" returned.\n";
    }

    void displayDetails() const override {
        cout << "DVD: " << getTitle() << " | Director: " << getAuthor() << " | Due: " << getDueDate() << " | Duration: " << duration << " min\n";
    }
};


class Magazine : public LibraryItem {
private:
    int issueNumber;

public:
    Magazine(string t, string a, string d, int issue) : LibraryItem(t, a, d), issueNumber(issue) {}

    void checkOut() override {
        cout << "Magazine \"" << getTitle() << "\" checked out.\n";
    }

    void returnItem() override {
        cout << "Magazine \"" << getTitle() << "\" returned.\n";
    }

    void displayDetails() const override {
        cout << "Magazine: " << getTitle() << " | Editor: " << getAuthor() << " | Due: " << getDueDate() << " | Issue: " << issueNumber << endl;
    }
};

int main() {
    LibraryItem* libraryItems[MAX_ITEMS];
    int itemCount = 0;
    int choice;

    try {
        do {
            cout << "\n===== Library Menu =====\n";
            cout << "1. Add Book\n2. Add DVD\n3. Add Magazine\n4. Display Items\n5. Check Out Item\n6. Return Item\n7. Exit\nEnter choice: ";
            cin >> choice;

            if (cin.fail()) throw runtime_error("Invalid input type!");

            if (choice == 1 && itemCount < MAX_ITEMS) {
                string title, author, dueDate, isbn;
                cout << "Enter Book Title: "; cin.ignore(); getline(cin, title);
                cout << "Enter Author: "; getline(cin, author);
                cout << "Enter Due Date: "; getline(cin, dueDate);
                cout << "Enter ISBN: "; getline(cin, isbn);

                if (!regex_match(isbn, regex("\\d{3}-\\d{3}-\\d{3}")))
                    throw invalid_argument("Invalid ISBN format!");

                libraryItems[itemCount++] = new Book(title, author, dueDate, isbn);
                cout << "Book Added Successfully.\n";
            }
            else if (choice == 2 && itemCount < MAX_ITEMS) {
                string title, author, dueDate;
                int duration;

                cout << "Enter DVD Title: "; cin.ignore(); getline(cin, title);
                cout << "Enter Director: "; getline(cin, author);
                cout << "Enter Due Date: "; getline(cin, dueDate);
                cout << "Enter Duration (minutes): "; cin >> duration;

                if (duration <= 0) throw invalid_argument("Duration must be positive!");

                libraryItems[itemCount++] = new DVD(title, author, dueDate, duration);
                cout << "DVD Added Successfully.\n";
            }
            else if (choice == 3 && itemCount < MAX_ITEMS) {
                string title, author, dueDate;
                int issue;

                cout << "Enter Magazine Title: "; cin.ignore(); getline(cin, title);
                cout << "Enter Editor: "; getline(cin, author);
                cout << "Enter Due Date: "; getline(cin, dueDate);
                cout << "Enter Issue Number: "; cin >> issue;

                if (issue <= 0) throw invalid_argument("Issue number must be positive!");

                libraryItems[itemCount++] = new Magazine(title, author, dueDate, issue);
                cout << "Magazine Added Successfully.\n";
            }
            else if (choice == 4) {
                for (int i = 0; i < itemCount; i++) {
                    libraryItems[i]->displayDetails();
                }
            }
            else if (choice == 5) {
                int idx;
                cout << "Enter item index to check out: ";
                cin >> idx;
                if (idx < 0 || idx >= itemCount) throw out_of_range("Invalid item index!");
                libraryItems[idx]->checkOut();
            }
            else if (choice == 6) {
                int idx;
                cout << "Enter item index to return: ";
                cin >> idx;
                if (idx < 0 || idx >= itemCount) throw out_of_range("Invalid item index!");
                libraryItems[idx]->returnItem();
            }
            else if (choice == 7) {
                cout << "Exiting...\n";
            }
            else {
                cout << "Invalid choice or library full!\n";
            }
        } while (choice != 7);
    }
    catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }


    for (int i = 0; i < itemCount; i++) {
        delete libraryItems[i];
    }

    return 0;
}

