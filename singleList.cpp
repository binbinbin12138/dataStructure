#include<iostream>
using namespace std;
template<class elemType>
class linkList
{
public:
    linkList(){}
    ~linkList(){}
    bool headInsert( const int data){}
private:
    typedef struct Node
    {
    public:
        int data;
        Node* next;
    }Node;

    Node* head;
    Node* tail;
    int length;
};

template<class elemType>
linkList<elemType>::linkList(){
    head = tail = new Node;
    length = 0;
}

List::~List(){
}

bool List::headInsert( const int data){
    Node* p,q;
    if (head->next = nullptr){

    }
}
int main(){
    return 0;
}