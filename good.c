#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct Entries
{
	char entry1[200];
	char entry2[200];
	char entry3[200];
	char entry4[200];
	char entry5[200];
	char entry6[200];
	char entry7[200];
	char entry8[200];
	char entry9[200];
	char entry10[200];
	char entry11[200];
	char entry12[200];
	char entry13[200];
	char entry14[200];
	char entry15[200];
};

void register_for_scribble( )
{

//Code that will allow the user to create a user name and password

}
void login( )
{

//Code that will allow you to log in

}
void create_new_entry(struct Entries* e)
{
	if(strlen(e->entry1)==0)
	{
    printf("Enter a string for entry 1: ");
    fgets(e->entry1, sizeof(e->entry1), stdin);
    }
    else if (strlen(e->entry2) == 0) {
        printf("Enter a string for entry 2: ");
        fgets(e->entry2, sizeof(e->entry2), stdin);
    }
    else if (strlen(e->entry3) == 0) {
        printf("Enter a string for entry 3: ");
        fgets(e->entry3, sizeof(e->entry3), stdin);
    }
    else if (strlen(e->entry4) == 0) {
        printf("Enter a string for entry 4: ");
        fgets(e->entry4, sizeof(e->entry4), stdin);
    }
    else if (strlen(e->entry5) == 0) {
        printf("Enter a string for entry 5: ");
        fgets(e->entry5, sizeof(e->entry5), stdin);
    }
    else if (strlen(e->entry6) == 0) {
        printf("Enter a string for entry 6: ");
        fgets(e->entry6, sizeof(e->entry6), stdin);
    }
    else if (strlen(e->entry7) == 0) {
        printf("Enter a string for entry 7: ");
        fgets(e->entry7, sizeof(e->entry7), stdin);
    }
    else if (strlen(e->entry8) == 0) {
        printf("Enter a string for entry 8: ");
        fgets(e->entry8, sizeof(e->entry8), stdin);
    }
    else if (strlen(e->entry9) == 0) {
        printf("Enter a string for entry 9: ");
        fgets(e->entry9, sizeof(e->entry9), stdin);
    }
    else if (strlen(e->entry10) == 0) {
        printf("Enter a string for entry 10: ");
        fgets(e->entry10, sizeof(e->entry10), stdin);
    }
    else if (strlen(e->entry11) == 0) {
        printf("Enter a string for entry 11: ");
        fgets(e->entry11, sizeof(e->entry11), stdin);
    }
    else if (strlen(e->entry12) == 0) {
        printf("Enter a string for entry 12: ");
        fgets(e->entry12, sizeof(e->entry12), stdin);
    }
    else if (strlen(e->entry13) == 0) {
        printf("Enter a string for entry 13: ");
        fgets(e->entry13, sizeof(e->entry13), stdin);
    }
    else if (strlen(e->entry14) == 0) {
        printf("Enter a string for entry 14: ");
        fgets(e->entry14, sizeof(e->entry14), stdin);
    }
    else if (strlen(e->entry15) == 0) {
        printf("Enter a string for entry 15: ");
        fgets(e->entry15, sizeof(e->entry15), stdin);
    }
    else {
        printf("All available entries are filled, please delete one of the previous entries before adding the next one");}
}

void view_entry(struct Entries* e)
{
    int l1 = strlen(e->entry1);
	int l2 = strlen(e->entry2);
	int l3 = strlen(e->entry3);
	int l4 = strlen(e->entry4);
	int l5 = strlen(e->entry5);
	int l6 = strlen(e->entry6);
	int l7 = strlen(e->entry7);
	int l8 = strlen(e->entry8);
	int l9 = strlen(e->entry9);
	int l10 = strlen(e->entry10);
	int l11 = strlen(e->entry11);
	int l12 = strlen(e->entry12);
	int l13 = strlen(e->entry13);
	int l14 = strlen(e->entry14);
	int l15 = strlen(e->entry15);
    int g;
    printf("choose entry from 1 to 15: ");
    scanf("%d", &g);
    
   switch(g) {
        case 1:
        if (l1 > 0) {
            printf("Entry 1: %s\n", e->entry1);
        } else {
            printf("Entry 1 doesn't exist, please create an entry 1\n");
            }
        break;
        case 2:
        if (l2 > 0) {
            printf("Entry 2: %s\n", e->entry2);
        } else {
            printf("Entry 2 doesn't exist, please create an entry 2\n");
        }
        break;
        case 3:
        if (l3 > 0) {
            printf("Entry 3: %s\n", e->entry3);
        } else {
            printf("Entry 3 doesn't exist, please create an entry 3\n");
        }
        break;
        case 4:
        if (l4 > 0) {
            printf("Entry 4: %s\n", e->entry4);
        } else {
            printf("Entry 4 doesn't exist, please create an entry 4\n");
        }
        break;
        case 5:
        if (l5 > 0) {
            printf("Entry 5: %s\n", e->entry5);
        } else {
            printf("Entry 5 doesn't exist, please create an entry 5\n");
        }
        break;
        case 6:
        if (l6 > 0) {
            printf("Entry 6: %s\n", e->entry6);
        } else {
            printf("Entry 6 doesn't exist, please create an entry 6\n");
        }
        break;
        case 7:
        if (l7 > 0) {
            printf("Entry 7: %s\n", e->entry7);
        } else {
            printf("Entry 7 doesn't exist, please create an entry 7\n");
        }
        break;
        case 8:
        if (l8 > 0) {
            printf("Entry 8: %s\n", e->entry8);
        } else {
            printf("Entry 8 doesn't exist, please create an entry 8\n");
        }
        break;
        case 9:
        if (l9 > 0) {
            printf("Entry 9: %s\n", e->entry9);
        } else {
            printf("Entry 9 doesn't exist, please create an entry 9\n");
        }
        break;
        case 10:
        if (l10 > 0) {
            printf("Entry 10: %s\n", e->entry10);
        } else {
            printf("Entry 10 doesn't exist, please create an entry 10\n");
        }
        break;
        case 11:
        if (l11 > 0) {
            printf("Entry 11: %s\n", e->entry11);
        } else {
            printf("Entry 11 doesn't exist, please create an entry 11\n");
        }
        break;
        case 12:
        if (l12 > 0) {
            printf("Entry 12: %s\n", e->entry12);
        } else {
            printf("Entry 12 doesn't exist, please create an entry 12\n");
        }
        break;
        case 13:
        if (l13 > 0) {
            printf("Entry 13: %s\n", e->entry13);
        } else {
            printf("Entry 13 doesn't exist, please create an entry 13\n");
        }
        break;
        case 14:
        if (l14 > 0) {
            printf("Entry 14: %s\n", e->entry14);
        } else {
            printf("Entry 14 doesn't exist, please create an entry 14\n");
        }
        break;
        case 15:
        if (l15 > 0) {
            printf("Entry 15: %s\n", e->entry15);
        } else {
            printf("Entry 15 doesn't exist, please create an entry 15\n");
        }
        break;
        default:
            printf("Invalid entry number. Please choose a number between 1 and 15.\n");
            break;
    }
}
void edit_entry(struct Entries* e)
{
    
}
void delete_entry(struct Entries* e)
{

    int g;
    printf("choose which entry to delete from 1 to 15: ");
    scanf("%d", &g);
    
   switch(g) {
        case 1:
        if (strlen(e->entry1) > 0) {
        e->entry1[0] = '\0';
        printf("Entry 1 is deleted");
        } else {
            printf("Entry 1 doesn't exist yet\n");
            }
        break;
        case 2:
        if (strlen(e->entry2) > 0) {
            e->entry2[0] = '\0';
            printf("Entry 2 is deleted\n");
        } else {
            printf("Entry 2 doesn't exist yet\n");
        }
        break;
        case 3:
        if (strlen(e->entry3) > 0) {
            e->entry3[0] = '\0';
            printf("Entry 3 is deleted\n");
        } else {
            printf("Entry 3 doesn't exist yet\n");
        }
        break;
        case 4:
        if (strlen(e->entry4) > 0) {
            e->entry4[0] = '\0';
            printf("Entry 4 is deleted\n");
        } else {
            printf("Entry 4 doesn't exist yet\n");
        }
        break;
        case 5:
        if (strlen(e->entry5) > 0) {
            e->entry5[0] = '\0';
            printf("Entry 5 is deleted\n");
        } else {
            printf("Entry 5 doesn't exist yet\n");
        }
        break;
        case 6:
        if (strlen(e->entry6) > 0) {
            e->entry6[0] = '\0';
            printf("Entry 6 is deleted\n");
        } else {
            printf("Entry 6 doesn't exist yet\n");
        }
        break;
        case 7:
        if (strlen(e->entry7) > 0) {
            e->entry7[0] = '\0';
            printf("Entry 7 is deleted\n");
        } else {
            printf("Entry 7 doesn't exist yet\n");
        }
        break;
        case 8:
        if (strlen(e->entry8) > 0) {
            e->entry8[0] = '\0';
            printf("Entry 8 is deleted\n");
        } else {
            printf("Entry 8 doesn't exist yet\n");
        }
        break;
        case 9:
        if (strlen(e->entry9) > 0) {
            e->entry9[0] = '\0';
            printf("Entry 9 is deleted\n");
        } else {
            printf("Entry 9 doesn't exist yet\n");
        }
        break;
        case 10:
        if (strlen(e->entry10) > 0) {
            e->entry10[0] = '\0';
            printf("Entry 10 is deleted\n");
        } else {
            printf("Entry 10 doesn't exist yet\n");
        }
        break;
        case 11:
        if (strlen(e->entry11) > 0) {
            e->entry11[0] = '\0';
            printf("Entry 11 is deleted\n");
        } else {
            printf("Entry 11 doesn't exist yet\n");
        }
        break;
        case 12:
        if (strlen(e->entry12) > 0) {
            e->entry12[0] = '\0';
            printf("Entry 12 is deleted\n");
        } else {
            printf("Entry 12 doesn't exist yet\n");
        }
        break;
        case 13:
        if (strlen(e->entry13) > 0) {
            e->entry13[0] = '\0';
            printf("Entry 13 is deleted\n");
        } else {
            printf("Entry 13 doesn't exist yet\n");
        }
        break;
        case 14:
        if (strlen(e->entry14) > 0) {
            e->entry14[0] = '\0';
            printf("Entry 14 is deleted\n");
        } else {
            printf("Entry 14 doesn't exist yet\n");
        }
        break;
        case 15:
        if (strlen(e->entry15) > 0) {
            e->entry15[0] = '\0';
            printf("Entry 15 is deleted\n");
        } else {
            printf("Entry 15 doesn't exist yet\n");
        }
        break;
        default:
        printf("Invalid entry number. Please choose a number between 1 and 15.\n");
        break;
        

}
}
void search_for_entry()
{



}
void exit_the_program()
{

	printf("Of course, ciao\n");
	exit(0);


}
void error_message( )
{
	printf("This page is currently unavailable\n");
	printf("If you need further help please call 817-739-3672 and ask for Arthur ");
}

int main ()
{
    char password[100];
    char user_name[100] = "Arthur_Morgan2027";
    char user_password[100] = "John";
    char name[100];
	struct Entries e= {"","","","","","","","","","","","","","",""};
	int choice;

	   printf("  ____________             __________\n");
	   printf(" /           /\\           /         /|\n");
	   printf("/___________/  \\        /__________/ |\n");
	   printf("|           \\   \\      /           | |\n");
	   printf("|            \\   \\    /            | |\n");
	   printf("|             \\   \\  /             | |\n");
	   printf("|              \\   \\/              | |    * *\n");
	   printf("|                \\/      **        | |  *   *\n");
	   printf("|                    * *  *    *   | |*   *\n");
	   printf("|                    *  *     *  * | *  *\n");
	   printf("|                  *  ** *     *  * *  *\n");
	   printf("|           |\\    * * /|* *     *  *  *\n");
	   printf("|           | \\      / | * *     *   *\n");
	   printf("|           |  \\    /  |  * *     ***|\n");
	   printf("|           |  | \\/    |    *      | |\n");
	   printf("|           |  |       |           | |\n");
	   printf("|           |  |       |           | |\n");
	   printf("|           |  |       |           | |\n");
	   printf("|___________| /        |___________|/\n");

	   printf("Hello welcome to scribble\n)");
	   printf("Please enter your username and password to access the app: \n\n");

	   printf("Enter your user name: ");
	   fgets(password, sizeof(name), stdin);

	   printf("Enter your password: ");
	   fgets(password, sizeof(password), stdin);

	   name[strlen(name) - 1] = '\0';
	   password[strlen(password) - 1] = '\0';

	   while(strcmp(password, user_password) != 0 && strcmp (name, user_name) != 0 )
	   {
	   printf("Incorrect credentials, renter your information.\n");
	   printf("Enter your user name: ");
	   fgets(password, sizeof(name), stdin);

	   printf("Enter your password: ");
	   fgets(password, sizeof(password), stdin);

	   name[strlen(name) - 1] = '\0';
	   password[strlen(password) - 1] = '\0';
	   }
	
	int i=1;
	while(i==1)
	{
		int p;
		printf("if you want to start again enter 1, if you want to quit enter 0: ");
		scanf("%d", &p);
		if(p==1)
		{
			printf("Welcome :), what would you like to do today?\n");
			printf("1. Register\n");
			printf("2. Login\n");
			printf("3. Create Diary Entry\n");
			printf("4. View Diary Entries\n");
			printf("5. Edit Diary Entry\n");
			printf("6. Delete Diary Entry\n");
			printf("7. Search Diary Entries\n");
			printf("8. Categorize Entries\n");
			printf("9. View Calendar\n");
			printf("10. Backup Entries\n");
			printf("11. Restore Entries\n");
			printf("12. Help\n");
			printf("13. Exit\n");
			printf("Enter your choice: ");
			scanf("%d", &choice);
			getchar();
			switch (choice)
			{
			case 1:
				error_message();
				break;
			case 2:
				error_message();
				break;
			case 3:
				create_new_entry(&e);
				break;
			case 4:
				view_entry(&e);
				break;
			case 5:
				error_message();
				break;
			case 6:
				delete_entry(&e);
				break;
			case 7:
				error_message();
				break;
			case 8:
				error_message();
				break;
			case 9:
				error_message();
				break;
			case 10:
				error_message();
				break;
			case 11:
				error_message();
				break;
			case 12:
				error_message();
				break;
			case 13:
				exit_the_program();
				break;
			}
		}
		else if(p==0)
		{
			i=0;
		}
		else 
		{printf("ERROR! Invalid input, enter 1 or 0 only!\n");}
	}

   error_message();

	return 0;
}