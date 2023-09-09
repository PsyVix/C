#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Phonebook
{
    char pno[10];
    char name[99];
    char label[15];
    struct Phonebook *next; // pointer to next Pbook in linked list
};

typedef struct Phonebook Pbook;

void menu(Pbook **head);
void insert(Pbook **head);
void display_list(Pbook **head);
void modify(Pbook **head);
void delete(Pbook **head);

int main()
{
    Pbook *head = NULL;
    char pas2[20], pas1[20] = {"password"};
    printf("\t\t\t\t\t-------------------Authorized Personnel Only-------------------");
    printf("\n\tEnter Password:");
    scanf("%s", pas2);
    if (strcmp(pas1, pas2) == 0)
    {
        menu(&head);
    }
    else
    {
        printf("Access Denied");
        exit(-99);
    }
    return 0;
}

void menu(Pbook **head)
{
    int ch;

    while (1)
    {
        printf("********************************************************\n");
        printf("*                                                      *\n");
        printf("*                          Menu                        *\n");
        printf("*                                                      *\n");
        printf("********************************************************\n");
        printf("*        1. Enter new Contact                          *\n");
        printf("*        2.Delete Contact                              *\n");
        printf("*        3.Modify Contact                              *\n");
        printf("*        4.Display Contact list                        *\n");
        printf("*        5.Logout                                      *\n");
        printf("********************************************************\np");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert(head);
            break;
        case 2:
            delete(head);
            break;
        case 3:
            modify(head);
            break;
        case 4:
            display_list(head);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}

void insert(Pbook **head)
{
    Pbook *temp = (Pbook *)malloc(sizeof(Pbook));
    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter Contact data (Phone Number, Name, Label): ");
    scanf("%s%s%s", temp->pno, temp->name, temp->label);
    temp->next = NULL;
    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        Pbook *last = *head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = temp;
    }
}

void display_list(Pbook **head)
{
    if (*head == NULL)
    {
        printf("Contact List is Empty\n");
    }
    else
    {
        Pbook *ptr = *head;
        printf("Phone Number\t\t|\t\tName\t\t|\t\tlabel\n");
        printf("---------------------------------------------------------------------------------------\n");
        while (ptr != NULL)
        {
            printf("%s\t\t|\t\t%s\t\t|\t\t%s\n",ptr->pno, ptr->name, ptr->label);
            ptr = ptr->next;
        }
    }
}

void modify(Pbook **head)
{
    char crn[99];
    printf("Enter Contact name: ");
    scanf("%s", crn);

    Pbook *ptr = *head;
    while (ptr != NULL)
    {
        if (strcmp(ptr->name, crn) == 0)
        {
            printf("Enter new data (phone Number, Contact Name, Label): ");
            scanf("%s %s %s", ptr->pno, ptr->name, ptr->label);
            printf("Contact is modified\n");
            return;
        }
        ptr = ptr->next;
    }

    printf("Contact %s not found.\n", crn);
}

void delete(Pbook **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        char crn[99];
        printf("Enter Contact name: ");
        scanf("%s", crn);

        Pbook *temp = *head;
        Pbook *ptemp = NULL;
        while (temp != NULL)
        {
            if (strcmp(temp->name, crn) == 0)
            {
                if (ptemp != NULL)
                {
                    ptemp->next = temp->next;
                }
                else
                {
                    *head = temp->next;
                }

                free(temp);
                printf("Contact %s is deleted.\n", crn);
                return;
            }
            ptemp = temp;
            temp = temp->next;
        }

        printf("Contact not found.\n");
    }
}
