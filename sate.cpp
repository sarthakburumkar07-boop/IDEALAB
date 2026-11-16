#include<iostream>
using namespace std;
struct node{
int data;
node* next;
};
node*head=nullptr;
void insert(int item,int pos){
node*newNode=new node(),*temp;
newNode->data=item;
temp=head;
for(int i=1;i<pos-1;i++)
    temp=temp->next;
newNode->next=temp->next;
temp->next=newNode;
};
void trevel(){
node*temp=head;
while(temp!=NULL)
{
    cout<<""<<temp->data;
    temp=temp->next;
}
};
int main(){
insert(10,1);
trevel();
return 0;
}
