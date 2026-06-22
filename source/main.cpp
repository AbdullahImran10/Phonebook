#include "../header/phonebook.h"
int main(){
    Phonebook ph;
    int choice;
    string name,number;
    do{
        cout<<"=== Phonebook Menu ===\n";
        cout<<"1. Add Contact\n";
        cout<<"2. Search Contact\n";
        cout<<"3. Delete Contact\n";
        cout<<"4. Display Contacts\n";
        cout<<"5. Save Contacts to File\n";
        cout<<"6. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter name: ";
               cin.ignore();
               getline(cin, name);
                cout<<"Enter number: ";
                cin>>number;
                ph.addContact(name,number);
                break;
            case 2:
                cout<<"Enter name to search: ";
                cin.ignore();
                getline(cin, name);
                ph.searchContact(name);
                break;
            case 3:
                cout<<"Enter name to delete: ";
                cin>>name;
                ph.deleteContact(name);
                break;
            case 4:
                ph.displayContacts();
                break;
            case 5:
                ph.saveToFile();
                break;
            case 6:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid choice. Please try again.\n";
        }
    }while(choice!=6);
    return 0;
}