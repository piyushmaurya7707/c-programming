#include <stdio.h>
#include<stdlib.h>
  struct block{
    int value;
    struct block *ptr;
  };
   void function(struct block *head)  {
      //struct block *head;
      struct block *temp = head;
      while(temp != NULL)
      {
        printf("%d->",temp->value);
         temp = temp->ptr;      
 
      
        }
    }
         


      int main()
      {
       
     struct block *head = NULL;
     struct block *a = NULL;
     struct block *b = NULL;
     struct block *c = NULL;
     struct block *d = NULL;
     struct block *e = NULL;


      head = (struct block*)malloc(sizeof(struct block));
       a = (struct block*)malloc(sizeof(struct block));
       b = (struct block*)malloc(sizeof(struct block));
       c = (struct block*)malloc(sizeof(struct block));
       d = (struct block*)malloc(sizeof(struct block));
       e = (struct block*)malloc(sizeof(struct block));

      head-> value = 500;
      head->ptr = a;

      a-> value = 4387;
      a->ptr = b;
      
       b-> value = 234;
      b->ptr = c;

      c-> value = 342;
      c->ptr = d;

      d-> value = 354;
      d->ptr = e;

      e-> value = 439;
      e->ptr = NULL;

      function(head);

      free(head);
      free(a);
      free(b);
       free(c);
        free(d);
       free(e);
          return 0; 
            // This is last line of code
      }
   



