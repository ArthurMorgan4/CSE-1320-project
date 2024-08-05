#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//I me mine
// Using Alexey's Entries to search
struct Entries
{
	char Entry[99][270];
    char View[99][270];
    int length[99];
    int find[99];
};
typedef struct
{
    char NewUserName[100];
    char NewPassword[100];
}User;
User newUser;
int userRegistered = 0;
void register_for_scribble()
{
    if(userRegistered)
    {
        printf("Username is already taken. Please log in. \n");
        return;
    }
    //Code that will allow the user to create a user name and password
    printf("Create a Username: ");
    scanf("%s", newUser.NewUserName);
    printf("Create a Password: ");
    scanf("%s", newUser.NewPassword);
    userRegistered = 1;
    printf(" User has been registered! \n");
    
}
void login( )
{
//Code that will allow you to log in 
}
void create_new_entry(struct Entries* e)
{
    printf("Entries should not exceed 250 characters(including spaces) limit\n");
    int count;
    FILE *entries;
    FILE *view;
    FILE *backup;
    entries=fopen("entries.txt", "r");
    view=fopen("view.txt", "r");
    backup=fopen("backup.txt","r");
    if(view==NULL)
    {
    printf("File for search can't be opened");
    return;
    }
    if(entries==NULL)
    {
    printf("File for entry can't be opened");
    return;
    }
    if(backup==NULL)
    {
    printf("File for backup can't be opened");
    return;
    }
    fseek(entries, 0, SEEK_END);
    fseek(backup, 0, SEEK_END);
    int sizeE = ftell(entries);
    int sizeB = ftell(backup);
    for(int i=0; i<99; i++)
    {
    fscanf(view, "%d", &e->length[i]);
    }
    fclose(entries);
    fclose(view);
    fclose(backup);
    if(sizeE==0 || sizeB==0)
    {
        backup=fopen("backup.txt", "w+");
        entries=fopen("entries.txt", "w+");
        view=fopen("view.txt", "w+");
    }
    else
    {
        backup=fopen("backup.txt", "a+");
        entries=fopen("entries.txt", "a+");
        view=fopen("view.txt", "a+");
    }
    for(int i=0; i<99; i++)
        {
            if (e->length[i]!=0)
            {
            count++;
            }
        }
	for(int i=0; i<99; i++)
    {
        if(strlen( e->Entry[i])==0)
        {
            printf("Make the entry%d: ", count);
            fgets(e->Entry[i], sizeof(e->Entry[i]), stdin);
            int l=strlen(e->Entry[i]);
            if(l>250)
            {
                printf("You exceeded allowed characters number");
                int clear;
                while ((clear = getchar()) != '\n' && clear != EOF);
                fclose(backup);
                fclose(entries);
                fclose(view);
                return;
            }
            e->Entry[i][strcspn(e->Entry[i], "\n")] = 0;
            e->length[i]=strlen(e->Entry[i]);
            fprintf(entries, "%s\n", e->Entry[i]);
            fprintf(backup,"%s\n", e->Entry[i]);
            fprintf(view, "%d\n",e->length[i]);
            break;
        }
    }
    fclose(view);
    fclose(entries);
    fclose(backup);
}
void view_entry(struct Entries* e)
{
    int stringlocation;
    int count=0;
    int userinput;
    FILE *entries;
    FILE *view;
    FILE *backup;
    entries=fopen("entries.txt", "r");
    view=fopen("view.txt", "r");
    backup=fopen("backup.txt","r");
    if(view==NULL)
    {
    printf("File for search can't be opened");
    return;
    }
    if(entries==NULL)
    {
    printf("File for viewing entries can't be opened\n");
    printf("Loading backup file\n");
    printf("choose entry from 1 to 99: ");
    scanf("%d", &userinput);
    if(userinput<1 || userinput>99)
    {
        printf("Error, Invalid entry number");
    }
    for(int i=0; i<userinput; i++)
    {
    fscanf(view, "%d", &e->length[i]);
    }
    for(int i=0; i<userinput-1; i++)
    {
        if (e->length[i]!=0)
        {
        count++;
        stringlocation+=e->length[i]+1;
        }
    }
    if(userinput==1)
    {
    fseek(backup, 0, SEEK_SET);
    fgets(e->View[count],sizeof(e->View[count]), backup);
    if(strlen(e->View[count])==0)
    {
        printf("Entry%d doesn't exist", userinput);
        return;
    }
    printf("Entry1 is: %s", e->View[count]);
    }
    else
    {
        fseek(entries, stringlocation-1, SEEK_SET);
        fgets(e->View[count],sizeof(e->View[count]), backup);
        if(strlen(e->View[count])==0)
        {
            printf("Entry%d doesn't exist", userinput);
            return;
        }
        printf("Entry%d is: %s",userinput, e->View[count]);
    }
    fclose(view);
    fclose(entries);
    fclose(backup);
    }
    printf("choose entry from 1 to 99: ");
    scanf("%d", &userinput);
    if(userinput<1 || userinput>99)
    {
        printf("Error, Invalid entry number");
    }
    for(int i=0; i<userinput; i++)
    {
    fscanf(view, "%d", &e->length[i]);
    }
    for(int i=0; i<userinput-1; i++)
    {
        if (e->length[i]!=0)
        {
        count++;
        stringlocation+=e->length[i]+1;
        }
    }
    if(userinput==1)
    {
    fseek(entries, 0, SEEK_SET);
    fgets(e->View[count],sizeof(e->View[count]), entries);
    if(strlen(e->View[count])==0)
    {
        printf("Entry%d doesn't exist", userinput);
        return;
    }
    printf("Entry1 is: %s", e->View[count]);
    }
    else
    {
        fseek(entries, stringlocation-1, SEEK_SET);
        fgets(e->View[count],sizeof(e->View[count]), entries);
        if(strlen(e->View[count])==0)
        {
            printf("Entry%d doesn't exist", userinput);
            return;
        }
        printf("Entry%d is: %s",userinput, e->View[count]);
    }
    fclose(view);
    fclose(entries);
    fclose(backup);
}
void search_for_entry(struct Entries* e) //Using the current date for the 'keyword' would work best, but manually put in current date in the entry or remember a certain word in that entry
{
    char keyword[200];
    printf("Search entries using a keyword: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0';
    int f = 0;
    if(strstr(e->entry1, keyword)!= NULL)
    {
        printf("Entry 1: %s\n", e->entry1);
        f = 1;
    }
    if(strstr(e->entry2, keyword)!= NULL)
    {
        printf("Entry 2: %s\n", e->entry2);
        f = 1;
    }
    if(strstr(e->entry3, keyword)!= NULL)
    {
        printf("Entry 3: %s\n", e->entry3);
        f = 1;
    }
    if(strstr(e->entry4, keyword)!= NULL)
    {
        printf("Entry 4: %s\n", e->entry4);
        f = 1;
    }
    if(strstr(e->entry5, keyword)!= NULL)
    {
        printf("Entry 5: %s\n", e->entry5);
        f = 1;
    }
    if(strstr(e->entry6, keyword)!= NULL)
    {
        printf("Entry 6: %s\n", e->entry6);
        f = 1;
    }
    if(strstr(e->entry7, keyword)!= NULL)
    {
        printf("Entry 7: %s\n", e->entry7);
        f = 1;
    }
    if(strstr(e->entry8, keyword)!= NULL)
    {
        printf("Entry 8: %s\n", e->entry8);
        f = 1;
    }
    if(strstr(e->entry9, keyword)!= NULL)
    {
        printf("Entry 9: %s\n", e->entry9);
        f = 1;
    }
    if(strstr(e->entry10, keyword)!= NULL)
    {
        printf("Entry 10: %s\n", e->entry10);
        f = 1;
    }
    if(strstr(e->entry11, keyword)!= NULL)
    {
        printf("Entry 11: %s\n", e->entry11);
        f = 1;
    }
    if(strstr(e->entry12, keyword)!= NULL)
    {
        printf("Entry 12: %s\n", e->entry12);
        f = 1;
    }
    if(strstr(e->entry13, keyword)!= NULL)
    {
        printf("Entry 13: %s\n", e->entry13);
        f = 1;
    }
    if(strstr(e->entry14, keyword)!= NULL)
    {
        printf("Entry 14: %s\n", e->entry14);
        f = 1;
    }
    if(strstr(e->entry15, keyword)!= NULL)
    {
        printf("Entry 15: %s\n", e->entry15);
        f = 1;
    }
    if(!f)
    {
        printf("No entries found using that keyword '%s'.\n", keyword);
    }
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
void calendar()
{
    printf("           AUGUST          \n");
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    printf("--- --- --- --- --- --- ---\n");
    printf("                  1   2   3\n");
    printf("  4   5   6  (7)  8   9  10\n");
    printf(" 11  12  13  14  15  16  17\n");
    printf(" 18  19  20  21  22  23  24\n");
    printf(" 25  26  27  28  29  30  31\n");
    printf("--- --- --- --- --- --- ---\n");
}
void Restore(struct Entries* e, struct Backup* b)
{
    int option;
    printf("Which entry do you want to restore?\n");
    scanf("%d", &option);
    switch(option)
    {
        case 1:
        if(strlen(b->back1) > 0)
        {
            printf("This entry will be restored: %s", b->back1);
            strcpy(e->entry1, b->back1);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 2:
        if(strlen(b->back2) > 0)
        {
            printf("This entry will be restored: %s", b->back2);
            strcpy(e->entry2, b->back2);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 3:
        if(strlen(b->back3) > 0)
        {
            printf("This entry will be restored: %s", b->back3);
            strcpy(e->entry3, b->back3);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 4:
        if(strlen(b->back4) > 0)
        {
            printf("This entry will be restored: %s", b->back4);
            strcpy(e->entry4, b->back4);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 5:
        if(strlen(b->back5) > 0)
        {
            printf("This entry will be restored: %s", b->back5);
            strcpy(e->entry5, b->back5);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 6:
        if(strlen(b->back6) > 0)
        {
            printf("This entry will be restored: %s", b->back6);
            strcpy(e->entry6, b->back6);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 7:
        if(strlen(b->back7) > 0)
        {
            printf("This entry will be restored: %s", b->back7);
            strcpy(e->entry7, b->back7);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 8:
        if(strlen(b->back1) > 0)
        {
            printf("This entry will be restored: %s", b->back8);
            strcpy(e->entry8, b->back8);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 9:
        if(strlen(b->back9) > 0)
        {
            printf("This entry will be restored: %s", b->back9);
            strcpy(e->entry9, b->back9);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 10:
        if(strlen(b->back10) > 0)
        {
            printf("This entry will be restored: %s", b->back10);
            strcpy(e->entry10, b->back10);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 11:
        if(strlen(b->back11) > 0)
        {
            printf("This entry will be restored: %s", b->back11);
            strcpy(e->entry11, b->back11);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 12:
        if(strlen(b->back12) > 0)
        {
            printf("This entry will be restored: %s", b->back12);
            strcpy(e->entry12, b->back12);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 13:
        if(strlen(b->back13) > 0)
        {
            printf("This entry will be restored: %s", b->back13);
            strcpy(e->entry13, b->back13);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
        case 14:
        if(strlen(b->back14) > 0)
        {
            printf("This entry will be restored: %s", b->back14);
            strcpy(e->entry14, b->back14);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
                case 15:
        if(strlen(b->back15) > 0)
        {
            printf("This entry will be restored: %s", b->back15);
            strcpy(e->entry15, b->back15);
            printf("Entry has been restored");
        }
        else
        {
            printf("There is no backup's available");
        }
        break;
    }
}
int main ()
{
    char entry[100];
    char name[100];
    int choice; 
    char password[100];
    char user_name[100] = "Arthur_morgan2027";
    char user_password[100] = "John";
    struct Entries e = {"","","","","","","","","","","","","","",""};
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
    printf("Hello welcome to scribble\n");
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
    } */
	int i=1;
	while(i==1)
	{
		int p;
		printf("\nif you want to start again enter 1, if you want to quit enter 0: ");
		scanf("%d", &p);
		if(p==1)
		{
			printf("\nWelcome :), what would you like to do today?\n\n");
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
				//register_for_scribble();
				break;
			case 2:
				//error_message();
				break;
			case 3:
				create_new_entry(&e);
				break;
			case 4:
				view_entry(&e);
				break;
			case 5:
				//edit_entry(&e);
				break;
			case 6:
				//delete_entry(&e);
				break;
			case 7:
				//search_for_entry(&e);
				break;
			case 8:
				//error_message();
				break;
			case 9:
				//calendar();
				break;
			case 10:
				//Backup(&e,&b);
				break;
			case 11:
				//Restore(&e, &b);
				break;
			case 12:
				//error_message();
				break;
			case 13:
				//exit_the_program();
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
   //error_message();
	return 0;
}