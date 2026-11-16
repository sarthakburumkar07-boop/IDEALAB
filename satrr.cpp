#include<iostream>
using namespace std;
struct node {
    int data;
    node* next;
};
node* head=nullptr;
node* tail=nullptr;

void insert(int item,int pos){
    node*newnode=new node();
    newnode->data=item;
    newnode->next=nullptr;
    if(pos==1){
        newnode->next=head;
        head=newnode;
        return;
    }
    node*temp=head;
    for(int i=1;i<pos-1;i++)
        temp=temp->next;
    if(temp==nullptr){
        cout<<"invaild position";
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void travel(){
    node*temp=head;
    while(head!=nullptr){
        cout<<"->"<<temp->data;
        temp=temp->next;
        }
}
int main(){
    insert(12,1);
    insert(89,2);
    insert(30,-1);
    travel();
    return 0;
}
