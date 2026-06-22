#pragma once
#include <iostream>
#include <unordered_map>
using namespace std;
class Phonebook {
    private:
    unordered_map<string, string> contacts; // Store contacts as name-number pairs
    public:
    void addContact(string name, string number);
    void searchContact(string name);
    void deleteContact(string name);
    void displayContacts();
    void saveToFile();
};