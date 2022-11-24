#include <stdio.h>
#include <stdlib.h>

struct node
{
  struct node * prev;
  int data;
  struct node * next;
};

void traverse(struct node * ptr)
{
  while( ptr->next != NULL)
  {
    printf("%d ",ptr->data);
    ptr = ptr->next;
  }
}

void rtraverse(struct node * ptr)
{
  while (ptr != NULL)
  {
    printf("%d ",ptr->data);
    ptr = ptr->prev;
  }
  
}

struct node * InsertAtIndex(struct node * head, int data, int pos)
{
  struct node * ptr = (struct node *)malloc(sizeof(struct node));
  ptr -> data = data;
  struct node * temp;
  temp = head;
  for (int i = 0; i < pos-1; i++)
  {
    temp = temp->next;
  }
  ptr->next = temp;
  ptr->prev = temp->prev;
  temp->prev->next = ptr;
  temp->prev = ptr;
  
}

struct node * addAtBeg(struct node * head, int data)
{
  struct node * temp;
  struct node * ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = data;
  ptr->prev = NULL;
  ptr->next = head;
  head->prev = ptr;
  head = ptr;
  return head;
};

void creat(struct node * next1,struct node * next3,int data,struct node * next2)
{
  struct node * temp;

  next1->prev = next3;
  next1->data = data;
  next1->next = next2;

}
;

int main(){
  struct node * head = (struct node *)malloc(sizeof(struct node));
  struct node * first = (struct node *)malloc(sizeof(struct node));
  struct node * second = (struct node *)malloc(sizeof(struct node));
  struct node * tail = (struct node *)malloc(sizeof(struct node));
  head->prev = NULL;
  head->data = 10;
  head->next = first;

  creat(first,head,25,second);
  creat(second,first,40,NULL);
  
  tail = head;
  while (tail->next != NULL)
  {
    tail = tail->next;
  }

  head = addAtBeg(head,5);
  InsertAtIndex(head,35,4);    
  rtraverse(tail);  

  // char z[]= "hhhhh";
  // printf("%s",z);
}
