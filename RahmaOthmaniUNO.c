#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER_OF_CARDS 108
#define MAX_STRING_SIZE 13
void menuplay () ;
void start() ;
char cardsrahma[NUMBER_OF_CARDS][MAX_STRING_SIZE] ;
char cardsuser1[NUMBER_OF_CARDS][MAX_STRING_SIZE] ;
char cardsuser2[NUMBER_OF_CARDS][MAX_STRING_SIZE] ;
char pioche[NUMBER_OF_CARDS][MAX_STRING_SIZE] ;
char name[50] ;
char center [13] ;
int nbc=108 ;
int x ;
int counter=1 ;
int f=1 ;
int nbn=0 ; int nbu1=0 ; int nbu2=0 ;
char cards[NUMBER_OF_CARDS][MAX_STRING_SIZE] =

{ 

  "bleu_0","rouge_0","jaune_0","vert_0",
  
 ///////////////////////// 
  
  "bleu_1","rouge_1","jaune_1","vert_1",
  
  "bleu_1","rouge_1","jaune_1","vert_1",
  
  ///////////////////////
  
  "bleu_2","rouge_2","jaune_2","vert_2",
  
  "bleu_2","rouge_2","jaune_2","vert_2",
  
  ///////////////////////
  
  "bleu_3","rouge_3","jaune_3","vert_3",
  
  "bleu_3","rouge_3","jaune_3","vert_3",

  //////////////////////
  
  "bleu_4","rouge_4","jaune_4","vert_4",
  
  "bleu_4","rouge_4","jaune_4","vert_4",
  
  ////////////////////
  
  "bleu_5","rouge_5","jaune_5","vert_5",
  
  "bleu_5","rouge_5","jaune_5","vert_5",
  
  /////////////////////
  
  "bleu_6","rouge_6","jaune_6","vert_6",
  
  "bleu_6","rouge_6","jaune_6","vert_6",
  
  ///////////////////
  
  "bleu_7","rouge_7","jaune_7","vert_7",
  
  "bleu_7","rouge_7","jaune_7","vert_7",
  
  ///////////////
  
  "bleu_8","rouge_8","jaune_8","vert_8",
  
  "bleu_8","rouge_8","jaune_8","vert_8",
  
  ////////////////
  
  "bleu_9","rouge_9","jaune_9","vert_9",
  
  "bleu_9","rouge_9","jaune_9","vert_9",
  
  ////////////////////////
  
  "bleu_+2","rouge_+2","jaune_+2","vert_+2",
  
  "bleu_+2","rouge_+2","jaune_+2","vert_+2",
  
  ////////////////////////
  
   "bleu_block","rouge_block","jaune_block","vert_block",
  
  "bleu_block","rouge_block","jaune_block","vert_block",
  
  ////////////////////////
   
	"bleu_reverse","rouge_reverse","jaune_reverse","vert_reverse",
	"bleu_reverse","rouge_reverse","jaune_reverse","vert_reverse",
  
  ////////////////////////
  
  "joker","joker","joker","joker",
  
  
  //////////////////////////
  
  "+4","+4","+4","+4"
};
////////////////////////////////////////////////////////////
int name_center_cards (char card[13])
{
	int j ; int i ; int k ;char test_card_color[13] ; char test_card_color1[13] ;
	
	if(card[0]== '+')
	
		return 1 ;
	
	if(card[0]== 'j' && card[1]== 'o' )
	
		return 1 ;
	
	for(k=0;k<13;k++)
	{
		if(card[k]=='_')
		k=13 ;
		if (k==12)
		return 1 ;
	} 
	i=0 ;
	do {
		test_card_color[i]=card[i] ;
		i++ ;
	   }while(card[i] != '_' && i<13) ; 
	   if (card[i] != '_')
	    
	   	return 0 ; 
		 
	j=0 ;
	do {
		test_card_color1[j]=center[j] ;
		j++ ;
	   }while(center[j] !='_' && j<13) ;   
	k=0 ;
	while(test_card_color[k]==test_card_color1[k] && (k<i)) 
		{
			if(k==(i-1))
			{
				return 1 ;
			}
			k++ ;
		}
		//cards j+1 et i+1 sont les nombre aprres couleur 
	if(card[i+1]==center[j+1])
	{
		return 1 ;
	} 
return 0 ;
}
////////////////////////////////////////////////////////////
int name_check_cards (char card[13])
{
	int j ; int i ; char test_card[13] ; int k ;
	for(i=0;i<nbn;i++)
	{ k=0 ;
		for (j=0;j<13;j++)	
		{ 
			test_card[j]=cardsrahma[i][j] ;
		}

		if (strcmp( test_card , card)==0)
		{
			return 1 ;
		}
		
	} 
return 0 ;
}
/////////////////////////////////////////////////////////////////
void view_cards (char hand[NUMBER_OF_CARDS][MAX_STRING_SIZE] , int ncard )
{
	int i ; 
	for(i=0;i<ncard;i++)
	{
		printf("%s\t",hand[i]) ;
	}
	printf("\n") ;
}
/////////////////////////////////////////////////////////////////
void take_from_pioche (int r )
{ 
	int x ;  int i ; int j ; 
	
	
if (r==1)
{
	srand(time(0)); 
		x=rand()%nbc;
	   
	
 
	for (j=0;j<13;j++)	
	{ 
	 cardsrahma[nbn][j]=pioche[x][j]; 
	
	}	
     nbn++ ;

for(i=x;i<nbc-1;i++)
{
	for(j=0;j<13;j++)
	pioche[i][j]=pioche[i+1][j] ;
}

nbc-- ;

}
///////////////
if (r==2)
{
srand(time(0)); 
		x=rand()%nbc;
	   
	
 
	for (j=0;j<13;j++)	
	{ 
	 cardsuser1[nbu1][j]=pioche[x][j]; 
	
	}	
     nbu1++ ;

for(i=x;i<nbc-1;i++)
{
	for(j=0;j<13;j++)
	pioche[i][j]=pioche[i+1][j] ;
}
 
nbc-- ;
	
}
/////////////
if(r==3)
{
	srand(time(0)); 
		x=rand()%nbc;
	   
	
 
	for (j=0;j<13;j++)	
	{ 
	 cardsuser2[nbu2][j]=pioche[x][j]; 
	
	}	
     nbu2++ ;

for(i=x;i<nbc-1;i++)
{
	for(j=0;j<13;j++)
	pioche[i][j]=pioche[i+1][j] ;
}

nbc-- ;

}
//////////////// 4 est le xarte dans table cntre
if(r==4)
{
	srand(time(0)); 
		x=rand()%nbc;
	   
	if((pioche[x][0]=='+')|| (pioche[x][0]=='j' && pioche[x][1]=='o'))
	{
	take_from_pioche(4) ;
	}else {
	for (j=0;j<13;j++)	
		{ 
	 		center[j]=pioche[x][j]; 
		}	
    

		for(i=x;i<nbc-1;i++)
		{
			for(j=0;j<13;j++)
				pioche[i][j]=pioche[i+1][j] ;
	}

		nbc-- ;		}
 


}
}
/////////////////////////////////////////////////////////////////
void ecraser_card (char card[13])
{
	int j ; 
	if(center[6] != 'v') 
	{
		for(j=0;j<13;j++)
		{
		pioche[nbc][j]=center[j] ;
		}
		nbc++ ;	
	}

	for(j=0;j<13;j++)
	{
		center[j]=card[j] ;
	}
}
///////////////////////////////////////////////////////////////////
void delete_card_from_hand (char card[13] )
{
		int j ; int i ; char test_card[13] ; int k ;
////////na7ina card min and rahma
	if (x==0)
	{
		for(i=0;i<nbn;i++)
		{ 
			for (j=0;j<13;j++)	
			{ 
				test_card[j]=cardsrahma[i][j] ;
			}

			if (strcmp( test_card , card)==0)
			{
			k=i ;
			i=nbn+1 ;
			}
		} 

		for (i=k;i<nbn-1;i++)
		{
			for(j=0;j<13;j++)
			{
				cardsrahma[i][j]=cardsrahma[i+1][j] ;
			}
		}
		nbn-- ;
	}
	if(x==1)
	{
		for(i=0;i<nbu1;i++)
		{ 
			for (j=0;j<13;j++)	
			{ 
				test_card[j]=cardsuser1[i][j] ;
			}

			if (strcmp( test_card , card)==0)
			{
			k=i ;
			i=nbu1+1 ;
			}
		} 

		for (i=k;i<nbu1-1;i++)
		{
			for(j=0;j<13;j++)
			{
				cardsuser1[i][j]=cardsuser1[i+1][j] ;
			}
		}
		nbu1-- ;
	}
	
		if(x==2)
	{
		for(i=0;i<nbu2;i++)
		{ 
			for (j=0;j<13;j++)	
			{ 
				test_card[j]=cardsuser2[i][j] ;
			}

			if (strcmp( test_card , card)==0)
			{
			k=i ;
			i=nbu2+1 ;
			}
		} 

		for (i=k;i<nbu2-1;i++)
		{
			for(j=0;j<13;j++)
			{
				cardsuser2[i][j]=cardsuser2[i+1][j] ;
			}
		}
		nbu2-- ;
	}
}
///////////////////////////////////////////////////////////////////////////
void choose_color ()
{ char color[5] ; char color1[7] ; int k ;
	if(x==0)
	{
		do
		{
			printf("\n choose a color (rouge/vert/jaune/bleu) : ") ;
			scanf("%s",&color);
		} while (strcmp(color , "rouge" )==0 && strcmp(color , "vert" )==0 && strcmp(color , "jaune" )==0 && strcmp(color , "bleu" )==0) ;
	
	strcpy(color1,color);
	color1[5]='_' ;
	color1[6]='v' ;
	ecraser_card(color1) ;	
	} 
	else 
	{
		srand( time(0)); 
		k=rand()%4 ;
		switch (k)
		{
		case 0 : strcpy(color,"rouge")  ;
			break ;
		case 1 : strcpy(color,"vert")  ;
			break ;
		case 2 : strcpy(color,"jaune")  ;
			break ;
		case 3 : strcpy(color,"bleu")  ;
			break ;
		} 
	strcpy(color1,color);
	color1[5]='_' ;
	color1[6]='v' ;
	ecraser_card(color1) ;
	}
}
/////////////////////////////////////////////////////////////////////////
void game_manager (char card[13] )
{
	int i ; int j ;
	if(card[0]=='+')
	{ j=x+1+counter ;
		if(j>3)
		j-=3 ;
		if(j<0) 
		j+=3 ;
			for(i=0;i<4;i++)
			take_from_pioche(j) ;
			
			choose_color () ;
			
						x+=counter ;
					
					
	}else if (card[0]=='j' && card[1]=='o')
			{
				choose_color () ;
			} else if (card[5]=='b' || card[6]=='b' )
					{ 
						x=x+counter ;
				
					} else if (card[5]=='r' || card[6]=='r' )
							{ 
								counter=counter*(-1) ;
								
							}else if (card[5]=='+' || card[6]=='+')
									{
										j=x+1+counter ;
										if(j>3)
										j-=3 ;
										if(j<0) 
										j+=3 ;
										for(i=0;i<2;i++)
										take_from_pioche(j) ;
										x+=counter ;
					
									}
}
//////////////////////////////////////////////////////////////////////
void set_user_card_random ()
{ int i ; int j ; char card[13] ; int k=0;
	if (x==1)
	{ 
		for(i=0;i<nbu1;i++)
		{
			for(j=0;j<13;j++)
			{
				card[j]=cardsuser1[i][j] ;
			} 
			if(name_center_cards(card)==1)
			{
				ecraser_card (card) ; 
				delete_card_from_hand (card )  ;  
				 game_manager (card ) ;
				k=1 ; 
				i=nbu1+1 ;
				printf("\nuser1 set %s\n",card) ; 
				sleep(2) ;
			}  
		} 
		if(k==0)
		{ 
			take_from_pioche(x+1) ; 
			printf("\nuser1 is drawing a card \n") ;
				sleep(2) ;
			for(j=0;j<13;j++)
			{
				card[j]=cardsuser1[nbu1-1][j] ;
			} 
			if(name_center_cards(card)==1)
			{
				ecraser_card (card) ;
				delete_card_from_hand (card )  ;
				 game_manager (card ) ;
				k=1 ;
				printf("\nuser1 set %s\n",card) ;
				sleep(2) ;
			} 
		}
	}
	
	if (x==2)
	{
		for(i=0;i<nbu2;i++)
		{
			for(j=0;j<13;j++)
			{
				card[j]=cardsuser2[i][j] ;
			} 
			if(name_center_cards(card)==1)
			{ 
				ecraser_card (card) ; 
				delete_card_from_hand (card )  ;
				 game_manager (card ) ;
				k=1 ;
				i=nbu2+1 ;
				printf("\nuser2 set %s\n",card) ; 
				sleep(2) ;  
			}  
		}
		if(k==0)
		{
			take_from_pioche(x+1) ; 
			printf("\nuser2 is drawing a card \n") ;
				sleep(2) ;
			for(j=0;j<13;j++)
			{
				card[j]=cardsuser2[nbu2-1][j] ;
			} 
			if(name_center_cards(card)==1)
			{
				ecraser_card (card) ;
				delete_card_from_hand (card )  ;
				 game_manager (card ) ;
				k=1 ;
				printf("\nuser2 set %s\n",card) ;
				sleep(2) ;
			} 
		}
	}  
}
////////////////////////////////////////////////////////////////////
void score (char card1[108][13] , char card2[108][13] , int n1 , int n2)
{
	int s ; int j ; int i ;
s=0 ;
	for(i=0;i<n1 ; i++)
	{
		if(card1[i][0]=='+')
		s+=50 ;
		else if (card1[i][0]=='j' && card1[i][1] == 'o' )
				{
					s+=50 ; 
				} else {
					for(j=0;j<13;j++)
					{
						if((card1[i][j]=='_' )&&(card1[i][j+1]=='+' || card1[i][j+1]=='r' || card1[i][j+1]=='b'))
						s+=20   ;
						else if(card1[i][j]=='_')
	                     s+=card1[i][j+1]-48 ;
					}
				}
					
	}
	
	for(i=0;i<n2 ; i++)
	{
		if(card2[i][0]=='+')
		s+=50 ;
		else if (card2[i][0]=='j' && card2[i][1] == 'o' )
				{
					s+=50 ; 
				} else {
					for(j=0;j<13;j++)
					{
						if((card2[i][j]=='_' )&&(card2[i][j+1]=='+' || card2[i][j+1]=='r' || card2[i][j+1]=='b'))
						s+=20   ;
						else if(card2[i][j]=='_')
	                     s+=card2[i][j+1]-48 ;
					}
				}
					
	}
	printf("%d",s) ;
f-- ;
if(f<0)
{printf("\n\n\n\n game over !!!!!!! \n\n\n\n") ;	
menuplay () ; 
}else { whostart() ;
}
	
} 
///////////////////////////////////////////////////////////////////
void game()
{ char card[13] ;
	if (x==0) 
	{ 
		printf("%s turn\n\n",name) ;
		printf("\t\t\t%s\n\n",center) ;
		printf("%s's cards :  ",name) ;
		view_cards(cardsrahma , nbn) ;
		
		do 
		{
		printf("choose a card to (set) else take a card from pioche by writing(draw) : ") ;
		scanf("%s",&card) ;
		}while((name_center_cards(card)!=1 || name_check_cards(card)!=1) && (card[0]!='d' || card[1]!='r' || card[2]!='a' || card[3]!='w' ) ) ;
		
		if(name_center_cards(card)==1 && name_check_cards(card)==1)
		{	
			ecraser_card (card) ;
			delete_card_from_hand(card) ;
			 game_manager (card ) ;
			
		}if(card[0]=='d'  && card[1]=='r' && card[2]=='a' && card[3]=='w' )
		{
			
		
			take_from_pioche(x+1) ;
		printf("%s is drawing a card \n\n",name) ;
		sleep(2) ;
			view_cards(cardsrahma , nbn) ;
		
		do 
		{
		printf("choose a card to (set) else pass by writing(pass) : ") ;
		scanf("%s",&card) ;
		}while((name_center_cards(card)!=1 || name_check_cards(card)!=1) && (card[0]!='p' || card[1]!='a' || card[2]!='s' || card[3]!='s' ) ) ;
		
		if(name_center_cards(card)==1 && name_check_cards(card)==1)
		{	
			ecraser_card (card) ;
			delete_card_from_hand(card) ;	
			 game_manager (card ) ;
		}
		}	
			 
	}
	
	if (x==1) 
	{
		printf("user1 turn\n\n") ;
		sleep(2) ;
		printf("\t\t\t%s\n\n",center) ;
		printf("%s's cards :  ",name) ;
		view_cards(cardsrahma , nbn) ;
		sleep(2) ;
		set_user_card_random (x ) ;
		sleep(2) ;
	}
	if (x==2) 
	{
		printf("user2 turn\n\n") ;
		sleep(2) ;
		printf("\t\t\t%s\n\n",center) ;
		printf("%s's cards :  ",name) ;
		view_cards(cardsrahma , nbn) ;
		sleep(2) ;
		set_user_card_random (x ) ;
		sleep(2) ;
	}

if (nbn==1 && x==0) 
{
	printf("\n\n%s UNO\n\n",name) ;
}

if (nbu1==1&& x==1)
{
	printf("\n\nuser1 UNO\n\n") ;
}
if (nbu2==1 && x==2)
{
	printf("\n\nuser2 UNO\n\n") ;
}
x+=counter ;
if (x>2)
x=x-3 ;
if(x<0)
x=x+3 ;
if (nbn<1)
{
	printf("%s won the game wih a score equal to\n ",name) ;
	score(cardsuser1,cardsuser2,  nbu1,nbu2) ;
	
} 
else if (nbu1<1)
		{
		printf("user1 won the game wih a score equal to\n ") ;
	score(cardsrahma,cardsuser2, nbn,nbu2) ;
		}
	else if (nbu2<1)
			{
					printf("user2 won the game wih a score equal to\n ") ;
	score(cardsuser1,cardsrahma,  nbu1,nbn) ;	
			}
		else game() ;

}
//////////////////////////////////////////////////////////////////
void distribute ()
{
	 int i ;
	srand( time(0)); 
	x=rand()%3 ;
	printf("now we are going to name who is going to distriubute\n") ;
	sleep(2) ;
	switch (x)
	{
		case 0 : printf("%s is distributing\n",name) ;
		break ;
		case 1 : printf("user1 is distributing\n") ;
		break ;
		case 2 : printf("user2 is distributing\n") ;
		break ;
	}
		sleep(2);	
	for( i=0 ; i<7 ; i++)
		{
		take_from_pioche(1) ;
		}
	for( i=0 ; i<7 ; i++)
		{
		take_from_pioche(2) ;
		}
	for( i=0 ; i<7 ; i++)
		{
		take_from_pioche(3) ;
		}	
	
		take_from_pioche(4) ;
			
//	view_cards(cardsrahma , nbn) ;

}
////////////////////////////////////////////////////////////////////
void whostart ()
{
	char card1[3][13] ; 
	int c1=-1 ;	int c3=-1 ;	int c2=-1 ; int i ; int j ;
		nbc=108 ;
	for (i=0;i<108;i++)
	{
		for (j=0;j<13;j++)
		{
      	 pioche[i][j]=cards[i][j] ;
	    }
	}
srand( time(0)); 

	i=rand()%108 ;
		for (j=0;j<13;j++)
		card1[0][j]=pioche[i][j] ;
	i=rand()%108 ;
		for (j=0;j<13;j++)
		card1[1][j]=pioche[i][j] ;
	i=rand()%108 ;
		for (j=0;j<13;j++)
		card1[2][j]=pioche[i][j] ;
		
printf("%s is drawing a card\n",name) ;
sleep(2) ;
printf("%s has %s\n",name,card1[0]) ;
	sleep(1) ;
printf("user1 is drawing a card\n") ;
sleep(2) ;
printf("user1 has %s\n",card1[1]) ;
	sleep(1) ;
printf("user2 is drawing a card\n") ;
sleep(2) ;
printf("user2 has %s\n",card1[2]) ;
sleep(1) ; 

// code ascii de 0 est 48 et code ascii de 9 est 57 .
for (j=0;j<13;j++)
{
	if((card1[0][j]=='_' ) && ( card1[0][j+1]>47 && card1[0][j+1]<58 ))
	{
		c1=card1[0][j+1] ;
	}
}


for (j=0;j<13;j++)
{
	if((card1[1][j]=='_' ) && ( card1[1][j+1]>47 && card1[1][j+1]<58 ))
	{
		c2=card1[1][j+1] ;
	}
}


for (j=0;j<13;j++)
{
	if((card1[2][j]=='_' ) && ( card1[2][j+1]>47 && card1[2][j+1]<58 ))
	{
		c3=card1[2][j+1] ;
	}
}

if(c1>c2 && c1>c3 )
{
	printf("%s will start\n", name) ;
	distribute () ;
	x=0 ;
	game() ;
} 
else

if(c2>c1 && c2>c3 )
{
	printf("user1 will start\n") ;
	distribute () ;
	x=1 ;
	game() ;
}
else

if(c3>c2 && c3>c1 )
{
	printf("user2 will start\n") ;
	distribute () ;
	x=2 ;
	game() ;
}
else{
	printf("its draw we will start again\n") ;
	whostart() ;
}
printf("\n") ;
sleep(1) ;

}
////////////////////////////////////////////////////
void start() 
 { int i ; int j ;
	
	printf("what is your name :  ") ;
	scanf("%s",&name) ;

/*	for (i=0;i<108;i++)
	{
		printf("%s\n",pioche[i]) ;
	}*/
	whostart() ;
	

}
/////////////////////////////////////////////////////////////////////
void menuplay () 
{ int z ; 

	printf("1.start\n") ;
	printf("2.quit\n") ;
	printf("please select an option :") ;
scanf("%d",&z);

switch (z) 
{
case 1 : start() ;
break ;
case 2 : break ;
default : printf("please enter a number available below \n") ;
menuplay() ;
break;
}

}


//////////////////////////////////////////////////////////
int main()
{
	
printf("\n\n\n\t welcome to uno game by rahma \n\n\n") ;

menuplay () ;

return 0;
}

////////////////////////////////////////////////////////////////////
