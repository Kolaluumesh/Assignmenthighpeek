//Assemption : Price as integer value.
#include<stdio.h>
#include<string.h>
int main(){
	int m,n,price[50],i,j,a,r,t;
	char name[50][20],temp[20],x;
	printf("\n Enter number of Employees : ");
	scanf("%d",&m);
	printf("\n Enter number of goodies : ");
	scanf("%d",&n);
//Input details	
	for(i=0;i<n;i++){
		printf("\n Enter goodie name: ");
		scanf("%s",&name[i]); 
		printf(" Enter goodie price: ");
		scanf("%d",&price[i]);}
//Sorting		
    for (i = 0; i < n; ++i) {
    for (j = i + 1; j < n; ++j) {
      if (price[i] < price[j]) {
         a = price[i];
         strcpy(temp,name[i]);
         price[i] = price[j];
         strcpy(name[i],name[j]);
         price[j] = a; 
		 strcpy(name[j],temp);}}}
//output details
	here:	 
	r=price[0]-price[m-1];
	for(i=1;i<n-m+1;i++){
	if(r>price[i]-price[i+m-1]){
		r=price[i]-price[i+m-1];
		t=i;}}

	for(i=t;i<t+m;i++)
	printf("\n %s : %d ",name[i],price[i]);
	printf("\n difference: %d",r);
	printf("\nwant to continue: y/n");
	scanf("%s",&x);
	if(x=='n')
	return 0;
	
	printf("\n Enter number of Employees : ");
	scanf("%d",&m);
	goto here;}
	
	
