#include<stdio.h>

int C[8]={0};

int tot=0;

void search(int cur){
	if(cur==8) tot++;
	else{
		int i;
		for(i=1;i<=8;i++){
			int ok=1;
			C[cur]=i;
			int j;
			for(j=1;j<=cur;j++){
				if(C[cur]==C[j]||cur-C[cur]==j-C[j]||cur+C[cur]==j+C[j])
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
	search(1);
	printf("%d",tot);
	return 0;
}
