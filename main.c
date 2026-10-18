/*
	Name: Reese Murphy
	Date: 10/17/26
	Course: CptS 121 (Hacktober Fest)
	Description: A Halloween horror game where you search for your missing brother and uncover the mystery of
				 a house that shouldn't exist.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int get_choice(int min, int max)
{
	int choice = 0;
	int valid;
	int c;

	do
	{
		printf("\nChoice: ");
		valid = scanf("%d", &choice);

		while ((c = getchar()) != '\n' && c != EOF)
		{
		}

		if (valid != 1)
		{
			choice = min - 1;
			printf("Please enter a number.\n");
		}
		else if (choice < min || choice > max)
		{
			printf("Choose %d to %d.\n", min, max);
		}

	} while (choice < min || choice > max);

	return choice;

}

int main(void)
{
	int choice;
	int checked_hall = 0;
	int checked_kitchen = 0;
	int talked_to_noah = 0;

	Sleep(1500);
	printf("====================================\n");
	printf("           THE LAST HOUSE\n");
	printf("====================================\n\n");
	Sleep(2000);

	printf("HALLOWEEN - 11:40 PM\n\n");
	Sleep(2000);

	printf("Your brother Noah went trick-or-treating.\n");
	printf("His last text said he'd be home in ten minutes.\n");
	printf("That was an hour ago.\n\n");

	printf("You follow his phone location to an empty lot.\n");
	printf("Except it isn't empty anymore.\n\n");
	printf("A house stands between two streetlights.\n");
	printf("You remember when this lot was cleared.\n\n");

	printf("The front door opens.\n");

	printf("A woman holds out a bowl of candy.\n\n");
	printf("\"Trick or treat?\"\n\n");

	printf("1. Take a piece.\n");
	printf("2. Refuse and ask for Noah.\n");

	choice = get_choice(1, 2);

	system("cls");

	if (choice == 1)
	{
		printf("\nYou take a wrapped chocolate.\n");
		printf("Your name is written on the wrapper.\n\n");

		printf("The woman looks at it. \n");
		printf("\"Oh. You're the next one.\"\n\n");

		printf("You drop the candy.\n");
		printf("It lands back in the bowl.\n\n");
	}
	else
	{
		printf("\n\"I'm looking for my brother. Noah.\"\n\n");

		printf("The woman looks toward the stairs.\n");
		printf("\"He came in an hour ago.\"\n\n");
	}

	printf("You step inside.\n\n");
	printf("The woman stays by the door.\n");
	printf("You hear footsteps upstairs.\n\n");

	do
	{
		Sleep(1000);

		printf("\nWhat do you do?\n");
		printf("1. Search the hallway.\n");
		printf("2. Call out to Noah.\n");
		printf("3. Go upstairs.\n");

		choice = get_choice(1, 4);

		system("cls");

		if (choice == 1)
		{
			if (checked_hall == 0)
			{
				checked_hall = 1;

				printf("\nYou find a pile of shoes by the stairs.\n");
				printf("One pair belongs to Noah.\n\n");

				printf("Beside them is a row of candy wrappers.\n");
				printf("Each has a different name written on it.\n");
				printf("Some names have been crossed out.\n");
			}
			else
			{
				printf("\nThe shoes haven't moved.\n");
				printf("You hear someone walking above you.\n");
			}
		}
		else if (choice == 2)
		{
			printf("\n\"Noah? It's me!\"\n\n");

			if (talked_to_noah == 0)
			{
				talked_to_noah = 1;

				printf("A pause.\n\n");
				printf("\"Don't take the candy,\" Noah whispers.\n\n");
				printf("\"I did. Now I can't leave.\"\n");
				printf("\"She said someone else has to take it.\"\n");
			}
			else
			{
				printf("Noah answers from upstairs.\n");
				printf("\"Please hurry. She's waiting.\"\n");
			}
		}
	} while (choice != 3);

	printf("\nYou climb the stairs.\n\n");
	printf("Noah sits inside a bedroom.\n");
	printf("He looks tired, but unharmed.\n\n");

	printf("\"The front door won't let me out,\" he says.\n");
	printf("\"I can reach it, but I can't cross it.\"\n\n");

	printf("You look back toward the stairs.\n");
	printf("The woman is still holding the bowl.\n\n");


	if (checked_hall == 1)
	{
		printf("You remember the names on the wrappers.\n");
		printf("Noah isn't the first person to be trapped here.\n\n");
	}

	printf("Noah looks at you.\n");
	printf("\"You don't have to do it.\"\n\n");
	Sleep(1000);

	printf("1. Take a piece of candy.\n");
	printf("2. Leave without him.\n");

	choice = get_choice(1, 2);

	system("cls");

	if (choice == 1)
	{
		printf("\nYou walk downstairs.\n");
		printf("The woman holds out the bowl.\n\n");

		printf("You take a piece.\n\n");
		printf("Noah walks past you toward the front door.\n");
		printf("This time, nothing stops him.\n\n");

		printf("He looks back at you.\n");
		printf("\"I'm sorry.\"\n\n");

		printf("The woman closes the door.\n");
		printf("You hear Noah running down the street.\n\n");

		printf("The woman sets the bowl on the table.\n");
		printf("She writes your name on a fresh wrapper.\n\n");

		printf("ENDING: TRICK OR TREAT\n");
	}
	else
	{
		printf("\nYou take Noah's hand.\n");
		printf("\"Come on. We're leaving.\"\n\n");

		printf("He tries the stairs, then the front door.\n");
		printf("He cannot cross the threshold.\n\n");

		printf("You step outside alone.\n");
		printf("The woman doesn't follow.\n\n");

		printf("You call the police from the street.\n");
		printf("When you look back, the house is gone.\n\n");

		printf("Your phone buzzes.\n");
		printf("A message from Noah's number:\n\n");

		printf("\"You did the right thing.\"\n\n");

		printf("Then another message arrives.\n\n");
		printf("\"But I'm still here.\"\n\n");

		printf("ENDING: THE EMPTY LOT\n");
	}

	printf("\n====================================\n");
	printf("              THE END\n");
	printf("====================================\n");

	return 0;
}
