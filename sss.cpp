#include <iostream>
using namespace std;
struct node {
    int data;
    node* next;
    node* prev;
};
node* head = nullptr;
node*tail=nullptr;
void insert(int item,int pos)
{
    node* newNode= new node;
    newNode->prev=nullptr;
    newNode->data=item;
    newNode->next=nullptr;

    if(pos==1){
        newNode->prev=nullptr;
        newNode->next=head;
        if(head!=nullptr){
            head->prev=newNode;
        }
        head=newNode;

        return;
    }
    node*temp=head;

    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    if(temp==NULL){
            cout<<"invalled position"<<endl;
    delete newNode;
    return;
}
newNode->next=temp->next;
newNode->prev=temp;
if(temp->next!=nullptr){
    temp->next->prev=newNode;
}
temp->next=newNode;

}
void del(){
if(head ==NULL){
    cout<<"empty ll";
}
node*temp=head;
head=head->next;
delete temp;
cout<<"deleted:"<<temp->data<<endl;
}

void travel(){

    node*temp=head;
    cout<<"LINNKED LIST-";
    while(temp!=NULL){

    cout<<" "<<temp->data;
    temp=temp->next;
    }
    cout<<endl;
}
    int main(){
    insert(12,1);
    insert(33,2);
    insert(44,3);
    insert(23,5);
    travel();
    del();
    travel();
    return 0;
    }
