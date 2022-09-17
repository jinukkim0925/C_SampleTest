#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* nextNode;
};

void PrintNode(struct Node* from);
struct Node* CreateNode(int data);
struct Node* InsertNode(struct Node* tmp,int data);
void DestroyNode(struct Node *destroy, struct Node *head);

int main() {
    struct Node* Node1 = CreateNode(100);
    struct Node* Node2 = InsertNode(Node1, 200);
    struct Node* Node3 = InsertNode(Node2, 300);
    struct Node* Node4 = InsertNode(Node2, 400);
    
    PrintNode(Node1);
    DestroyNode(Node1, Node1);
}

void PrintNode(struct Node* from) {
    while (from) {
        printf("노드의 데이터 : %d\n",from->data);
        from = from->nextNode;
    }
}

struct Node* CreateNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = data;
    newNode->nextNode = NULL;

    return newNode;
}

struct Node* InsertNode(struct Node* tmp,int data){
    
    struct Node* after = tmp->nextNode;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = data;
    newNode->nextNode = after;

    tmp->nextNode = newNode;
    
    return newNode;
}

void DestroyNode(struct Node *destroy, struct Node *head) {
    struct Node *next = head;

    if (destroy == head) {
        free(destroy);
        return;
    }
    
    while (next) {

        if (next -> nextNode == destroy) {
	    next->nextNode = destroy->nextNode;
        }
        next = next->nextNode;

    }
    free(destroy);
}
