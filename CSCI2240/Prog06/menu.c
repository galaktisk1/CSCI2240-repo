/*
 * Auth: Caleb Jackson
 * Date: 04-21-26
 * Course: CSCI-2240 (Sec: 001)
 * Desc: PROG-06, User Information Menu System.
 */

#include <stdbool.h>
#include <stdio.h>

#define ARRAY_SIZES 32

void print_menu(void);

int main(void)
{
    char first_name[ARRAY_SIZES];
    char last_name[ARRAY_SIZES];
    char home_city[ARRAY_SIZES];
    char home_state[ARRAY_SIZES];
    int choice;
    bool got_first = false;
    bool got_last = false;
    bool got_city = false;
    bool got_state = false;
    bool got_everything = false;
    bool allow_exit = false;
    bool done = false;

    printf("*** User Information Menu System ***\n");
    print_menu();

    while (!done && scanf("%d", &choice) == 1)
    {
        switch (choice)
        {
            case 1:
                if (got_first)
                {
                    printf("Already have a first name.\n");
                }
                else
                {
                    printf("Enter your first name: ");
                    scanf("%s", first_name);
                    got_first = true;
                    printf("Thank You.\n");
                }
                break;
            case 2:
                if (got_last)
                {
                    printf("Already have a last name.\n");
                }
                else
                {
                    printf("Enter your last name: ");
                    scanf("%s", last_name);
                    got_last = true;
                    printf("Thank You.\n");
                }
                break;
            case 3:
                if (got_city)
                {
                    printf("Already have a Home City.\n");
                }
                else
                {
                    printf("Enter your Home City: ");
                    scanf("%s", home_city);
                    got_city = true;
                    printf("Thank You.\n");
                }
                break;
            case 4:
                if (got_state)
                {
                    printf("Already have a Home State.\n");
                }
                else
                {
                    printf("Enter your Home State: ");
                    scanf("%s", home_state);
                    got_state = true;
                    printf("Thank You.\n");
                }
                break;
            case 5:
                got_everything = got_first && got_last && got_city && got_state;
                if (got_everything)
                {
                    printf("That's everything. Thanks!\n");
                    done = true;
                }
                else if (allow_exit)
                {
                    printf("Ok, if you insist!\n");
                    done = true;
                }
                else
                {
                    printf("You still have some info to provide!\n");
                    allow_exit = true;
                }
                break;
            default:
                printf("Invalid selection!\n");
                break;
        }

        got_everything = got_first && got_last && got_city && got_state;

        if (!done)
        {
            print_menu();
        }
    }

    printf("User Info Summary:\n");

    if (got_first)
    {
        printf("First Name: %s\n", first_name);
    }
    else
    {
        printf("First Name: (Not Given)\n");
    }

    if (got_last)
    {
        printf("Last Name: %s\n", last_name);
    }
    else
    {
        printf("Last Name: (Not Given)\n");
    }

    if (got_city)
    {
        printf("Home City: %s\n", home_city);
    }
    else
    {
        printf("Home City: (Not Given)\n");
    }

    if (got_state)
    {
        printf("Home State: %s\n", home_state);
    }
    else
    {
        printf("Home State: (Not Given)\n");
    }

    printf("\n");

    return 0;
}

void print_menu(void)
{
    printf("\n");
    printf("[1] Provide your First Name.\n");
    printf("[2] Provide your Last Name.\n");
    printf("[3] Provide Home City.\n");
    printf("[4] Provide Home State.\n");
    printf("[5] Exit\n\n");
    printf("Please make a selection and press [ENTER]: ");
} 