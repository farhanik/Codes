#include <stdio .
#include <stdlib .
// Define the structure for a node in the linked list
struct Node
{
    int data;
    struct Node *next;
    // Define the structure for the queue
    struct Queue
    {
        struct Node *front;
        struct Node *rear;
        
        struct Node *createNode(int data)
        {
struct Node* newNode =
(struct
Node* Node)) ;
data;
-NULL;
return newNode;