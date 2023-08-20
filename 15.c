#include<stdio.h>
//#include<conio.h>
int main()

{
	int choice,qty,i;
	int total_amount=0;
	int net=0;
	menu:
		printf("menu card \n");
		printf("1.coffe  Rs:50\n");
		printf("2.tea    Rs:20\n");
		printf("3.pizza  Rs:200 \n");
		printf("4.dabeli Rs:40\n");
		printf("enter your choice : \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("you have selected coffe \n");
				printf("enter your qty :\n");
				scanf("%d",&qty);
				net=net+(qty*50);
				break;
			
			case 2:
				printf("you have selected tea \n");
				printf("enter your qty : \n");
				scanf("%d",&qty);
				net=net+(qty*20);
				break;
				
				
			case 3:
				printf("you have selected pizza \n");
				printf("enter your qty : \n");
				scanf("%d",&qty);
				net=net+(qty*200);
				break;
				
				case 4:
				printf("you have selected dabeli \n");
				printf("enter your qty : \n");
				scanf("%d",&qty);
				net=net+(qty*40);
				break;
			default:
				printf("item is not available \n");
		}
		
		printf("do you want to continue press 1 or 2 for not: \n");
		scanf("%d",&i);
		if(i==1)
		{
			goto menu;
		}
		printf("total amount : %d \n",net);
		
		
		
		int c;
		float amounttobepaid; 

		printf("enter code ");
		scanf("%d",&c);
		if(c==1)
		{
			
			amounttobepaid = net-(net*20)/100;
		}
		else if(c==2)
		{
			
			amounttobepaid = net-(net*30)/100;
		}
		else if(c==3)
		{
			
			amounttobepaid = net-(net*35)/100;
		}
		else if(c==1 && c==2 && c==3)
		{
			
			amounttobepaid = net-(net*50)/100;
		}
		else 
		{
			printf("you have to pay :%d\n",net);
		}
		
		printf("you have to pay %f",amounttobepaid);
		
		
}
