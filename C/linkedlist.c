//A simple linked list implementation. Adds new nodes to the front. Removes nodes according to value. Includes : add, delete and display 
//functions. To add : error return on malloc failure, random insertion/insertion at end, deletion from end/start.
#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *next;
	int value;
}*root;

void add(int val){
	printf("Trying to add %d\n",val);
	if(root==NULL){
		root = malloc(sizeof(struct node*));
		root->value=val;
		root->next=NULL;
	}
	else{
	 struct node *temp = malloc(sizeof(struct node*));
	 temp->next = root;
	 temp->value= val;
	 root = temp;
	}
}

void display(){
	if(root==NULL){
		printf("List empty! \n");
	}
	else{
		struct node* temp;
		temp=root;
		while(temp){
			printf("%d->",temp->value);
			temp=temp->next;
		}
		printf("End\n");
	}
}

int delete(int val){
	printf("Trying to delete %d\n",val);
	if(root==NULL){
		printf("Empty list.Nothing to delete.\n");
		return -1;
	}
	else{
		struct node* temp;
		temp=root;
		if(root->value==val){
			root=root->next;
			return val;
		}
		while(temp->next){
			if(temp->next->value == val){
				temp->next=temp->next->next;
				return val;
			}
			temp=temp->next;
		}
		
		printf("Element not found!\n");
	}

}
int main(){
	
	display();
		
	delete(1);
	display();	

	add(0);
	display();
	
	add(2);
	display();
	
	add(3);
	display();
	
	delete(1);
	display();	

	delete(2);
	display();
	
	delete(0);
	display();
	
	delete(3);
	display();
	
	add(1);
	display();

	return 0;
}
