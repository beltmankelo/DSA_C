#include "libdll.h"
void main() {
  int l,ch,i=0;
   printf("Enter choice 1-Insert(Front) 2-Insert(Rear) 3-Delete(Front) 4-Delete(Rear) 5-Display 6-Exit\n");
   do
   {
      printf("Enter choice\n");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:
         printf("Enter character\n");
         scanf("%d",&l);
         insertFirst(l);
         break;
         case 2:
         printf("Enter character\n");
         scanf("%d",&l);
         insertLast(l);
         break;
         case 3:
         i--;
         deleteFirst();
         break;
         case 4:
         i--;
         deleteLast();
         break;
         case 5:
         display();
         break;
      }
   }while(ch!=6);
}  


