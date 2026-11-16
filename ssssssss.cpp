#include <iostream>
using namespace std;
struct node {
    int data;
    node* next;
};
node* head = nullptr;
void insert(int item, int pos) {

    node* newNode = new node();
    newNode->data = item;
    newNode->next = nullptr;
    // 2. Handle insertion at the beginning (pos == 1)
    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    node* temp = head;
    // 3. Traverse using temp->next and check for nullptr
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    // 4. Verify position is valid before inserting
    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void travel() {
    node* temp = head;
    while (temp != nullptr) {
        cout << " " << temp->data; // Added space for readable output
        temp = temp->next;
    }
    cout << endl;
}
void d() { // Fixed spelling from 'trevel'
    if(head==nullptr){
    cout<<"Empty ll";
    }
     node* temp = head;
    head = head->next;
    delete temp;

    cout <<"Deleteed :"<<temp->data<< endl;
}
int main() {
    insert(10, 1);
    insert(20,1);
    insert(30,1);
    insert(40,4);

    travel();
     d();
     travel();
    return 0;
}
