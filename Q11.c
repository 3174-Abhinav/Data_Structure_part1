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
void rev(){
struct node * q, * q1, *q2;
q=NULL;
q1=q2=top;
printf("Reversed L.List is :\n");
while(q2!=NULL){
 q2=q1->link;
 q1->link=q;
 q=q1;
 q1=q2;
}
top=q;
}
void pop(){
struct node *q;
q=top;
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
rev();
pop();

return 0;
}


