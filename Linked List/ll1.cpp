#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtFirst(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtLast(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    
}

void display(node* head){
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool serach(node* head, int key)
{
    node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        
        temp = temp->next;
    }
    return false;   
}

int main()
{
    node* head = NULL;
    insertAtLast(head,1);
    insertAtLast(head,2);
    insertAtLast(head,3);
    insertAtFirst(head,4);
    display(head);
    cout << serach(head, 3) << endl;

    return 0;
}