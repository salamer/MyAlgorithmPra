#include<iostream>
#include<cstdio>

using namespace std;


struct node{
	node *left,*right;
	int num;
};

int find(int num,node *cur){
	if(cur==NULL)
		return -1;
	if(num==cur->num)
		return 1;
	else{
		if(num>cur->num)
			return find(num,cur->right);
		else 
			return find(num,cur->left);
	}
}

bool insert(int num,node* &cur){
		if(cur==NULL){
			cur= new node;
			cur->num=num;
			cur->left=NULL;
			cur->right=NULL;
			return true;
		}
		if(num>cur->num)
		{
			return insert(num,cur->right);
		}
		else if(num<cur->num)
		{	
			return insert(num,cur->left);
		}
		return false;
}

void show_order(node *cur){
	if(cur->left)
		show_order(cur->left);
	if(cur!=NULL)
		printf("%d",cur->num);
	if(cur->right)
		show_order(cur->right);
}

int main(){
	int n,i;
	scanf("%d",&n);
	int the_num;
	
	node *root=NULL;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&the_num);
		insert(the_num,root);
	}
	
	int find_num;
	scanf("%d",&find_num);
	printf("%d",find(find_num,root));
	printf("~~~~~~~~~~~~~~~\n");
	show_order(root);
	
	
		
	return 0;
}
