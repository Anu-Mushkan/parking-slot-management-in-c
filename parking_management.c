#include<stdio.h>
#include<conio.h>
int main ()
{
	char name[20],VN[10];
	float r;
	int i=0,f,j=0,T=0,d,s=0,a,t,q,w1=0,w2=0,w3=0;
	printf("THIS IS MUSHKAN'S PARKING SLOT\n\n");
	do
	{
		printf("\nIF YOU WANT TO PARK or BACK OUT YOUR VECHILE THAN PLEASE\n ENTER YOUR VECHILE NUMBER\n");
	    scanf("%s",&VN);
	    printf("your VECHILE NUMBER %s HAS BEEN REGISTERED\n",VN);
	    printf("\n 1-TWO WHEELER\n 2-THREE WHEELER\n 3-FOUR WHEELER\n 4-BACK OUT VECHILE");
	    scanf("%d",&d);
	    switch(d)
	    {
		case 1:
		    printf("TWO WHEELER PARKING CHARGE = RS 5\n YOUR VECHILE HAS  BEEN PARKED\n PLEASE PAY THE CHARGE\n THANK YOU");
		    s=s+5;
		    break;
		case 2:
		    printf("THREE WHEELER PARKING CHARGE = RS 15\nYOUR VECHILE HAS  BEEN PARKED\n PLEASE PAY THE CHARGE\n THANK YOU");
		    T=T+15;
		    break;
		case 3:
		    printf("FOUR WHEELER PARKING CHARGE = RS 30\nYOUR VECHILE HAS  BEEN PARKED\n PLEASE PAY THE CHARGE\n THANK YOU");
		    f=f+30;
		    break;
		case 4:
			if((s/5+T/15+f/20)>0)
			{
				
			    j+=1;
			    printf("YOUR VECHILE ARE\n1-TWO WHEELER\n 2-THREE WHEELER\n 3-FOUR WHEELER\n");
			    scanf("%d",&q);
			    switch(q)
			    {
			    	case 1:
				    	if(s/5>0)
				    	{
				    		w1=w1+1;
						    printf("RECIEVE YOUR TWO WHEELER VECHILE\nTHANK YOU !!");	
						}
					    else
					    {
					    	printf("!!!!! NO TWO WHEELER AVAILABLE IN PARKING SLOT!!!!!");	
						}
					    break;
				    case 2:
				        if(T/15>0)
				        {
				        	w2=w2+1;
					        printf("RECIEVE YOUR THREE WHEELER VECHILE\nTHANK YOU !!");
						}
					    else
					    {
					       	printf("!!!!! NO THREE WHEELER AVAILABLE IN PARKING SLOT!!!!!");	
						}       	   
					    break;
				    case 3:
				    	if(f/30>0)
				    	{
				    		w3=w3+1;
					        printf("RECIEVE YOUR FOUR WHEELER VECHILE\nTHANK YOU !!");
						}
						else
						{
							printf("!!!!! NO FOUR WHEELER AVAILABLE IN PARKING SLOT!!!!!");
						}
					    break;
			    }
			}
			else
			{
				printf("NO VECHILE AVAILABLE IN PARKING SLOT");
			}    
		}
    	printf("\n\nenter 1 for MORE VECHILE ENTRIES");
		scanf("%d",&a);	
	}while(a==1);
	t=s+T+f;
	printf("\ntotal income = %d",t);
	printf("\nTOTAL VECHILES AVAILABLE IN PARKING SLOTS = %d\n",s/5+T/15+f/20-j);
	printf("____________________________");
	printf("\nSPOT STATUS");
	printf("\n----------------------------");
	printf("\nTWO WHEELER VECHILE   = %d",s/5-w1);
	printf("\nTHREE WHEELER VECHILE = %d",T/15-w2);
	printf("\nFOUR WHEELER VECHILE  = %d",f/20-w3);
}