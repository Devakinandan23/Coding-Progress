#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node * next;
  struct node * prev;
};

struct node * creatdoublelinkedlist(int n)
{
  struct node * head = NULL;
  struct node * ptr = NULL;
  struct node * tail = NULL;
  for (int i = 1; i < n+1; i++)
  {
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = i;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL)
    {
      head = temp;
    }
    else
    {
      ptr = head;
      while (ptr->next != NULL)
      {
        ptr = ptr->next;
      }
      ptr->next = temp; 
      tail = temp;
      tail->prev = ptr;
    }
  }
  
  // while (tail->prev != NULL)
  // {
  //   tail = tail->prev;
  // }
  return head;
}
  void display(struct node * head)
  {
    struct node * ptr = head;
    while (ptr->next != NULL)
    {
      printf("%d ",ptr->data);
      ptr = ptr->next;
    }
    printf("\n");
  }

int main(){
    int n;
    scanf("%d",&n);
    struct node * head = creatdoublelinkedlist(n);
    display(head);       
}
