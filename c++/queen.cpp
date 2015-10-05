#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int C[10]={0};

int tot=0;

void search(int cur){
	if(cur==9){
		tot=tot+1;
		for(int i=1;i<=8;i++)
			printf("%d\t",C[i]);
		printf("tot:%d\n",tot);
	}
	else{
		for(int i=1;i<=8;i++){
			int ok=1;
			C[cur]=i;
//			printf("C[1]:%d\t C:%d\t cur:%d\t",C[1],C[cur],cur);
			for(int j=1;j<cur;j++){
				if(C[cur]==C[j]||C[cur]-C[j]==cur-j||C[cur]-C[j]==j-cur)
				{
					ok=0;
					break;
				}

			}
			if(ok)
				
				search(cur+1);

		}
	}
}

int main(){
	for(int i=1;i<=8;i++){
		printf("now the tot:%d\n",tot);
		for(int j=1;j<=8;j++)
			C[j]=0;
		C[1]=i;
		search(2);
		printf("now the tot:%d\n",tot);
	}
	cout<<"total:"<<tot;
	return 0;
}
