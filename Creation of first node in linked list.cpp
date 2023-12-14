#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *first, *temp, *ttemp;
void create_first(int val){
    first = (node *)malloc(sizeof(node));
    first->data = val;
    first->next = NULL;
}
void display(){
    temp = first;
    while(temp!=NULL){
        cout << temp->data;
        temp = temp->next;
    }
}
    int main()
    {
       create_first(10);
       cout << "Node has created." << endl;
       cout << "The value of the data is : " << endl;
       display();
    }
