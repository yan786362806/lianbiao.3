//
//  main.cpp
//  lianbiao.3
//
//  Created by 20141105044y on 15/12/9.
//  Copyright © 2015年 20141105044y. All rights reserved.
//

#include <iostream>
struct student
{
    char name[100];
    char born;
    student *next;
    
};

int main(int argc, const char * argv[]) {
    int i;
    student *p,*q,*head;
    head=new student;
    head->next=0;
    p=head;
    for(i=0;i<4;i++)
    {
        q=new student;
        p->next=q;
        q->next=0;
        scanf("%s %d",q->name,&(q->born));
        p=q;
    }
    p=head->next;
    while(p!=0)
    {
        printf("%s %d   p=%x\n",p->name,p->born,p);
        p=p->next;
    }
    
    return 0;
}