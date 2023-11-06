#include <iostream>
using namespace std;

struct p{
    char x;
} p[9]={'1','2','3','4','5','6','7','8','9'};


void draw();
int check();
int design();
int menu();
int instructions();
int multiplayer();
int credits();

int main(){
	menu(); 
}

void draw(){
    printf("  \n\n\n\n\t %c | %c | %c     \n"
           "  \t---|---|---\n"
           "  \t %c | %c | %c   \n"
           "  \t---|---|---\n"
           "  \t %c | %c | %c   \n",p[0].x,p[1].x,p[2].x,p[3].x,p[4].x,p[5].x,p[6].x,p[7].x,p[8].x,p[9].x);
}

// The play bord has designed here in draw function.

int check() {
	
	if ((p[0].x=='O' && p[1].x=='O' && p[2].x=='O') || (p[3].x=='O' && p[4].x=='O' && p[5].x=='O') ||  				 
        (p[6].x=='O' && p[7].x=='O' && p[8].x=='O') || (p[0].x=='O' && p[3].x=='O' && p[6].x=='O') ||
        (p[1].x=='O' && p[4].x=='O' && p[7].x=='O') || (p[2].x=='O' && p[5].x=='O' && p[8].x=='O') ||
        (p[0].x=='O' && p[4].x=='O' && p[8].x=='O') || (p[2].x=='O' && p[4].x=='O' && p[6].x=='O'))

	{
		return 1;	
	}
	
	else if ((p[0].x=='X' && p[1].x=='X' && p[2].x=='X') || (p[3].x=='X' && p[4].x=='X' && p[5].x=='X')||     		 
        	 (p[6].x=='X' && p[7].x=='X' && p[8].x=='X') || (p[0].x=='X' && p[3].x=='X' && p[6].x=='X')||
        	 (p[1].x=='X' && p[4].x=='X' && p[7].x=='X') || (p[2].x=='X' && p[5].x=='X' && p[8].x=='X')||
        	 (p[0].x=='X' && p[4].x=='X' && p[8].x=='X') || (p[2].x=='X' && p[4].x=='X' && p[6].x=='X'))	
	
		{
			return 2;
		}
	else if (p[0].x!='1' && p[1].x!='2' && p[2].x!='3' &&
		       p[3].x!='4' && p[4].x!='5' && p[5].x!='6' &&
		       p[6].x!='7' && p[7].x!='8' && p[8].x!='9')
		{
		return 0;
		}

}
//	The conditions to Check whether which player has won or the game has been drawn.

int design(){
	cout<<"\n\n      ************************************************************************************"<< endl;
	cout<<"              ||||||  |||| |||||    ||||||  |||||| ||||||   ||||||  ||||||  ||||||"<<endl;
	cout<<"                ||     ||  ||         ||    ||  || ||         ||    ||  ||  ||    "<<endl;
	cout<<"                ||     ||  ||         ||    |||||| ||         ||    ||  ||  ||||||"<<endl;
	cout<<"                ||     ||  ||         ||    ||  || ||         ||    ||  ||  ||    "<<endl;
	cout<<"                ||    |||| |||||      ||    ||  || ||||||     ||    ||||||  ||||||"<<endl;
	cout<<"      ************************************************************************************"<< endl;
	
	cout << "" << endl; 
	cout << "" << endl; 
	cout << "" << endl; 
	cout << "			                    Menu						" << endl;
	cout << "" << endl; 
	cout << "" << endl; 

}

// Design of the game menu is here

int credits(){
	char m;
	system("cls");
	cout<<endl;
	
		
    cout<<endl<<endl;
	cout<< "    *****************************************************************"<< endl;
	cout<< "             |||| ||// |||||  ||||||  || |||||| ||||||          "<<endl;
	cout<< "             ||   ||/  ||      ||  || ||   ||   ||              "<<endl;
	cout<< "             ||   ||   |||||   ||  || ||   ||   ||||||          "<<endl;
	cout<< "             ||   ||   ||      ||  || ||   ||       ||          "<<endl;
	cout<< "             |||| ||   |||||  ||||||  ||   ||   ||||||          "<<endl;
	cout<< "    *****************************************************************"<< endl;
    cout<<endl<<endl;
    

	
	cout<<"         IM/2020/006-Sansala Nanayakkara"<<endl;
	cout<<"         IM/2020/035-Sadeesha Dilrangi"<<endl;
	cout<<"         IM/2020/040-Anushanga Kaluarachchi"<<endl;
	cout<<"         IM/2020/069-Navod Yasara"<<endl;
	cout<<"         IM/2020/115-Sonal Paranawithana"<<endl;
	cout<<"\n\n\nDo you want to go to the main menu?(y/n)\n";    // go back to menu or exit
            cin>>m;
            if(m=='y'){
            	system("cls");
            	menu();
			}else if(m=='n'){
				exit(0);
			}
            
}

int menu(){
	int i;
	struct p p2[9]={'1','2','3','4','5','6','7','8','9'};
	for(int i=0;i<9;i++){
        p[i]=p2[i];
	}
	
	design();
	cout<<"\t\t\t\t\t1. Start Game\n";
	cout<<"\t\t\t\t\t2. Instructions\n";
	cout<<"\t\t\t\t\t3. Credits"<<endl;
	cout<<"\t\t\t\t\t4. Quit Game\n"<<endl;
	cout<<"\n\nSubmit the number of the preferred option: ";
	cin>>i;
	if(i==1){
		multiplayer();
	}
	else if (i==2){
		instructions();
	}
	else if (i==3){
		credits();
	}
}

int multiplayer(){	
    system("cls");
    string p1;
	string p2;
	
	cout<<"Enter name of the First Player: \n";
	cin>>p1;
	
	cout<<"Enter name of the Second Player: \n";
	cin>>p2;
	
	cout<<p1<< " is player 1, therefore "<<p1<< " will go first. \n";
	cout<<p2<< " is player 2, therefore "<<p2<< " will go second. \n\n";
    draw();
    int i,ps,ps1;
    
    for(i=0;i<=9;i++){
    	
        if(check()==1)
        {
        	char m;
            printf("\nCongratulations!!! \nPlayer 2 Wins the Game\n");
            
			cout<<"\nDo you want to go to the main menu?(y/n)\n";	// go back to menu or exit
            cin>>m;
            if(m=='y'){
            	system("cls");
            	menu();
			}else if(m=='n'){
				exit(0);
			}
            break;
        }
        
		if(check()==2)
        {
        	char m;
            printf("\nCongratulations!!!\nPlayer 1 Wins the Game\nPlay again\n");
           
		    cout<<"\nYou want to go to the main menu?(y/n)\n";		// go back to menu or exit
            cin>>m;
            if(m=='y'){
            	system("cls");
            	menu();
			}else if(m=='n'){
				exit(0);
			}
            break;
        }

    
		if(i%2==0){
			printf("\n\nMake Player 1's turn: ");
	        scanf("%d",&ps);
	        system("cls");
	        
	        
			if(p[ps-1].x!='1' && p[ps-1].x!='2' && p[ps-1].x!='3' &&
	           p[ps-1].x!='4' && p[ps-1].x!='5' && p[ps-1].x!='6' &&		//array index = TTT Board Number-1(ps-1 in this case)
	           p[ps-1].x!='7' && p[ps-1].x!='8' && p[ps-1].x!='9')
	           {
	               printf("\n\nInvalid position\n Invalid Input ! \nPlay again\n");
	               break;
	           }
	        
	        p[ps-1].x='X';
	        draw();
	        
			if(check()==0) {
			   	
				char m;
				printf("\n\nThe Game has Drawn !\n");
	           	
				   cout<<"\nYou want to go to the main menu?(y/n)";		// go back to menu or exit
            	cin>>m;
            	
				if(m=='y'){
            	system("cls");
            	menu();
				}
				else if(m=='n'){
				multiplayer();
				}
				break;
				}
			
	    }
	    
		if(i%2==1){
				printf("\n\nMake Player 2's turn: ");
		        scanf("%d",&ps1);
		        system("cls");
		        
		    
			if(p[ps1-1].x!='1' && p[ps1-1].x!='2' && p[ps1-1].x!='3' &&
	           p[ps1-1].x!='4' && p[ps1-1].x!='5' && p[ps1-1].x!='6' &&		//array index = TTT Board Number-1(ps-1 in this case)
	           p[ps1-1].x!='7' && p[ps1-1].x!='8' && p[ps1-1].x!='9')
		        
				{
		        printf("\n\nInvalid position\nInvalid Input!\nPlay again\n");
		        break;
		        }
		        p[ps1-1].x='O';
		        draw();
		    
			if(check()==0){
				
				char m;
			   	printf("\nThe Game has Drawn !\n");
			   	
				   cout<<"\nYou want to go to the main menu?(y/n)";		// go back to menu or exit
            	cin>>m;
            	if(m=='y'){
            		
				system("cls");
            	menu();
				}
				
				else if(m=='n'){
				multiplayer();
				}
				break;
	        
			}
	    }
	}
	
}

int instructions(){
	char m;
	system("cls");
	
	cout<<"      ************************************************************************************"<< endl;
	cout<< "             || ||/||||| ||||||  ||  ||// ||  ||  ||||  ||  ||  ||||  ||/||||| ||||||              "<<endl;
    cout<< "             || ||/   || ||     |||| ||/  ||  || ||    |||| || ||  || ||/   || ||        "<<endl;
    cout<< "             || ||    || ||||||  ||  ||   ||  || ||     ||  || ||  || ||    || ||||||     "<<endl;
    cout<< "             || ||    ||     ||  ||  ||   ||  || ||     ||  || ||  || ||    ||     ||    "<<endl;
    cout<< "             || ||    || ||||||   || ||    ||||   ||||   || ||  ||||  ||    || ||||||       "<<endl;
    cout<<"      ************************************************************************************"<< endl;
    cout << "" << endl;
	cout << "1.The game is played on a 3x3 grid (total of 9 squares)\n" << endl;
	cout << "2.The game is programmed to let the first player use the symbol X while the other player is prompted the symbol O\n" << endl;
	cout <<	"3.In order to win the game, one has to get three identical marks (of that specific player) in the following ways: \n";
	cout << "* Three identical marks vertically" << endl;
	cout << "* Three identical marks horizontally" << endl;
	cout << "* Three identical marks diagonally\n" << endl;
	cout << "4.If all the nine squares are filled without any formation of three identical marks of either X or O in the required orders, the contest is considered to be drawn.\n\n";
	
	//  Display how to play the game.
	
	cout<<"\n\n\nDo you want to go to the main menu?(y/n)";		// go back to menu or exit
	cin>>m;
            if(m=='y'){
            	system("cls");
            	menu();
			}else if(m=='n'){
				exit(0);
			}
            
}
