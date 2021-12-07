#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *link;
int data;
};
 struct node * top=NULL;
void push(int item){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->data =item;
temp->link=top;
top=temp;
}
void dis(){
struct node *q;
q=top;
printf("Existing L.List is :\n");
while(q!=NULL){
printf("--%d\n",q->data);
q=q->link;
}
}
void del(){
struct node * temp;
temp=top;
top=temp->link;
free(temp);
}
void pop(){
struct node *q;
q=top;
printf("New L.List is :\n");
while(q!=NULL){
printf("---%d\n",q->data);
q=q->link;
}
}
int main(){
int item ,i,n;
printf("Enter the size of L.List :");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter the element :");
scanf("%d",&item );
push(item);
}
dis();
del();//Deleting the First Node
pop();//For printing
return 0;
}
