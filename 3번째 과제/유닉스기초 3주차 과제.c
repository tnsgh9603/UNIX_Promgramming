#include <stdio.h>
#include <malloc.h>

typedef struct list{

    char d;
    struct list* next;
}*LINK, node;

LINK HEAD;
LINK create_list(char[]);
LINK searchpt(LINK, char);
void insert(LINK, char);
void prt_list(LINK);
LINK search_node_pointer;

int main()
{
    char ckey;
    HEAD = create_list("cdefgh");
    scanf("%c", &ckey);
    search_node_pointer = searchpt(HEAD, ckey);
    insert(search_node_pointer, ckey);
    prt_list(HEAD);
}

//create list
LINK  create_list(char s[])
{
    LINK  head, tail;
    int i;
    head = 0;
    if (s[0] != '\0')
    {
        head = (LINK)malloc(sizeof(node));
        head->d = s[0];
        tail = head;
        for (i = 1; s[i] != '\0'; ++i)
        {
            tail->next = (LINK)malloc(sizeof(node));
            tail = tail->next;
            tail->d = s[i];
        }
        tail->next = 0;
    }
    return(head);
}

//search list  
LINK searchpt(LINK pt, char key)
{
    node *tmp = NULL;
    if (pt == 0)
        return (0);
    else
    {
        while ((pt->d <= key) && (pt->next != 0)) {
            tmp = pt;
            pt = pt->next;
            

        }
    }
    if (pt->next == NULL) { //맨 마지막에 노드 삽입
        if (tmp->d == key) { //중간에 노드 삽입
            return tmp;
        }
        else {
            return pt;
        }
    }
    else if (tmp == NULL){ //맨 처음 노드 삽입
        return tmp;
    }
    else if (tmp->d == key) { //중간에 노드 삽입
        return tmp;
    }
}

//insert
void insert(LINK inspt, char key)
{   
    LINK tpt;
    tpt = (LINK)malloc(sizeof(node));
    tpt->d = key;
    if (inspt == NULL) { //맨처음에 노드 삽입
        tpt->next = HEAD;
        HEAD = tpt ;
        
    }
    else if (inspt->next == NULL) { // 맨 마지막에 노드 삽입
        inspt->next = tpt;
        tpt->next = NULL;
    }
    else {
        tpt->next = inspt->next; // 중간에 노드 삽입
        inspt->next = tpt;
    }
}
//print list
void prt_list(LINK head)
{
    while (head != 0)
    {
        printf("%c ->", head->d);
        head = head->next;
    }
    printf("nil\n");
}