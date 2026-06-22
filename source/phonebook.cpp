#include "../header/phonebook.h"
#include <string>
#include <fstream>
using namespace std;
void Phonebook::addContact(string name, string number) {
    contacts[name]=number;
    cout<<"=== Contact Added ===\n";
}
void Phonebook::searchContact(string name) {
    if(contacts.find(name)!=contacts.end()){
        cout<<"Name: "<<name<<"==>\t Number: "<<contacts[name]<<"\n";
    } else {
        cout<<"Contact not found.\n";
    }
}
void Phonebook::deleteContact(string name) {
    if(contacts.find(name)!=contacts.end()){
        contacts.erase(name);
        cout<<"=== Contact Deleted ===\n";
    } else {
        cout<<"Contact not found.\n";
    }
}
void Phonebook::displayContacts() {
    if(contacts.empty()){
        cout<<"No contacts to display.\n";
        return;
    }
    cout<<"=== Contacts List ===\n";
    for(const auto& contact : contacts){
        cout<<"Name: "<<contact.first<<"==> Number: "<<contact.second<<"\n";
    }
}
void Phonebook::saveToFile() {
    ofstream file("../data/contacts.txt");
    if(!file){
        cerr<<"Error opening file for writing.\n";
        return;
    }
    for(const auto& contact : contacts){
        file<<contact.first<<","<<contact.second<<"\n";
    }
    file.close();
    cout<<"=== Contacts Saved to File ===\n";
}