#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node * next;
};

struct node * creatlinklist(int n)
{
  struct node * head = NULL;
  struct node * temp = NULL;
  struct node * p = NULL;
  for (int  i = 1; i < n + 1; i++)
  {
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = i;
    temp->next =NULL;

    p = head;
    if(head == NULL)
    {
      head = temp;
    }
    else
    {
      while (p->next != NULL)
      {
        p=p->next;
      }
      p->next  = temp;
    }
  }
  struct node * ptr = NULL;
  ptr = head;
  while (ptr != NULL)
  {
    printf("%d ",ptr->data);
    ptr=ptr->next;
  }
  
  return head;
}

struct node * insertlink(struct node * head)
{
  struct node * new1 = (struct node *)malloc(sizeof(struct node));
  new1->data = 8;
  // struct node * tail = head;
  new1->next = head;

 
  // pritnf("\n");
  return new1;

}

void display(struct node * head)
{ 
  struct node * ptr = NULL;
  ptr = head;
  while (ptr != NULL)
  {
    printf("%d ",ptr->data);
    ptr=ptr->next;
  }

  
}


int main(){
   int n = 5;
   struct node * head = creatlinklist(n);

   head = insertlink(head);  
   printf("\n");
   display(head);  
}
