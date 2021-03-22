#include<stdio.h>
#include<stdlib.h>

typedef struct doublylinkdlsit
{
    char data;
    struct doublylinkdlsit *prev;
    struct doublylinkdlsit *next;
}reg;

reg *first(reg *start,char data )
{
    reg *tmp;
    tmp=(reg*)malloc(sizeof(reg));
    tmp->data=data;
    tmp->prev=NULL;
    tmp->next=NULL;
    start=tmp;
    return start;
}

reg *insert(reg *start,char data)
{
    reg *p,*tmp;
    tmp=(reg *)malloc(sizeof(reg));
    tmp->data=data;
    p=start;
    while (p->next!=NULL)
    {
        p=p->next;
    }
   p->next=tmp;
   tmp->next=NULL;
   tmp->prev=p;
   return start;


}
reg *place1(reg *start, int data, int place)
{   int i;
   reg *tmp,*p;
   tmp=(reg*)malloc(sizeof(reg));
    tmp->data=data;

  if (place==1)
  {

    tmp->prev=NULL;
    tmp->next=start;
    start->prev=tmp;
    start=tmp;
    return start;
  }
  p=start;
  for ( i = 1; i <place-1 &&p!=NULL; i++)
  {
    p=p->next;
  }

  if (p==NULL)
  {
    printf("Position is out the list\n");
  }

  else
  {
    tmp->prev=p;
  tmp->next=p->next;
  if (p->next!=NULL)
  {
    p->next->prev=tmp;
  }
  p->next=tmp;
  }
  return start;

}
void dispaly(reg *start )
{
    reg *p;
    if (start==NULL)
    {
        printf("The list is Empty");

    }
  else
  {
        p=start;
        int t=1;
        printf("The list is:\n");
        printf("[start][%d]---->",start);
        while (p!=NULL)
        {
            if (t!=1)
            {
                printf("<------>");
            }

            printf("[%d][%c][%d]",p->prev,p->data,p->next);
            p=p->next;
            t++;
        }
        printf("\n");
  }

}
int main(int argc, char const *argv[])
{
  printf("\t\t    Name: MD. Mustafizur Rahman\n\t\t       ID:193-35-2918\n\t\t====================================\n");
   printf("\t\t    Name: MD. Tahsinul Islam\n\t\t      ID:193-35-2926\n\t\t====================================\n");
   printf("\t\t    Name: Mst. Marzia khatun\n\t\t     ID:193-35-29-36\n\t\t====================================\n");
 
    int place;
    reg *start=NULL;
    int limit=1;
    char data;
     while (limit)
     {
          printf("Enter your element (char type)\n:");
           scanf("%s",&data);
     if (start==NULL)
     {
      start=first(start,data);
     }
     else
     {
       start=insert(start,data);
     }

     printf("Are you continue is press 1 otherwise 0\n:");
     scanf("%d",&limit);
     }
    dispaly(start);
     int many=1;
     while (many)
     {
       printf("Enter insearting position\n:");
      scanf("%d",&place);
      printf("Enter your data (char type)\n:");
     scanf("%s",&data);
     start=place1(start,data,place);
     dispaly(start);
     printf("if you are chang any more data position press 1 other wise 0\n:");
        scanf("%d",&many);
     }

    return 0;
}
