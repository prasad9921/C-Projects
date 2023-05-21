#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("select a number for the task you want\n");
	printf("1:ph detemination\n 2:hardness detemination\n 3:alkalinity determination\n 4:emf of the cell\n");
	scanf("%d",&a);
	if(a==1){
		float e,ph;
		printf("enter the value of emf of the cell\n");
		printf("The e value of the cell ust be less than 0.4\n");
		scanf("%f",&e);
		ph=(e+0.6994-0.2422)/0.0591;
		printf("The required ph value is:%f\n",ph);
}
if(a==4){
	float c,a;
	printf("enter the e0 value of cathode and anode\n");
	scanf("%f %f",&c,&a);
	printf("the e0 vaue of cell is %f\n",c-a);
}
if(a==2){
	float mh,vh,ve,me,mh1,vh1,mh2,ve1,ve2,mho,vho,ai,vi;
	printf("enter the amount and volume of impurity\n");
	scanf("%f %f",&ai,&vi);
	mh=ai*10/vi;
	printf("The molarity of the standard hard water is %f\n",mh);
	printf("enter the value of volume of shw and the volume of EDTA\n");
	scanf("%f %f",&vh,&ve);
	me=(mh*vh)/ve;
	printf("The molarity of EDTA is %f\n",me);
	printf("enter the volume the required water sample and volume of EDTA\n");
	scanf("%f %f",&vh1,&ve1);
	mh1=me*ve1/vh1;
	printf("The molarity of water titrating with edta is %f\n",mh1);
	printf("enter the volume of edta\n");
	scanf("%f",&ve2);
	mh2=ve2*me/vh1;
		printf("The molarity of water after boiling and titrating with edta is %f\n",mh2);
		printf("The Total Hardness of water is %f ppm of caco3 \n",mh1*100000);
		printf("The permanent Hardness of water is %f ppm of caco3 \n",mh2*100000);
		printf("The permanent Hardness of water is %f ppm of caco3 \n",100000*(mh1-mh2));
}
if(a==3){
	int p,m;
	printf("Enter the values of p and m\n");
	scanf("%d %d",&p,&m);
	if(p==0&&m==0)
	printf("alkalinity is absent\n");
	else if(p==0&&m!=0)
	printf("alkalinity is due to HCO3- ions\n");
	else if(p==m)
	printf("alkalinity is due to OH- ions\n");
	else if(p==m/2)
	printf("alkalinity is due to CO3-2 ions\n");
	else if(p>m/2)
	printf("alkalinity is due to CO3-2 and OH- ions\n");
	else if(p<m/2)
	printf("alkalinity is due to HCO3- and CO3-2 ions\n");
}
return 0;
}

