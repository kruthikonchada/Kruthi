#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main() 
{
    char root[50],sub[50],report[50],del[50],transfer[50],user[50],role[50];
    int ch,i,temp[50],mode[50],mode1[50],n=0,m=0,count=0;
    printf("Enter root role name : ");
    scanf("%s",&root);
    int add()
    {
        i=n;
        while(i==n)
        {
            printf("Enter sub role name : ");
            scanf("%s",&sub);
            printf("Enter reporting to role name : ");
            scanf("%s",&report);
            temp[i]=sub;
            printf("%s ",temp[i]);
            i++;
        }
    }
    int display()
    {
        printf("%s ",root);
        for(i=1;i<=n;i++)
        {
            printf("%s ",temp[i]);
        }
        printf("\n");
    }
    int delete()
    {
        printf("Enter the role to be deleted : ");
        scanf("%s",&del);
        printf("Enter the role to be transferred : ");
        scanf("%s",&transfer);
        for(i=1;i<=n;i++)
        {
            if(temp[i]==del)
            {
                temp[i]=transfer;
            }
        }
    }
    int AddUser()
    {
        i=m;
        while(i==m)
        {
            printf("Enter User Name : ");
            scanf("%s",&user);
            printf("Enter Role : ");
            scanf("%s",&role);
            mode[i]=user;
            mode1[i]=role;
            i++;        
        }
    }
    int DisplayUser()
    {
        for(i=1;i<=m;i++)
        {
            printf("%s - %s\n",mode[i],mode1[i]);
        }
    }
    int DisplayUsersAndSubUsers()
    {
        
    }
    int DeleteUser()
    {

    }
    int UsersFromTop()
    {

    }
    int RoleHierarchy()
    {

    }
    int common()
    {
        
    }
    while(ch!=11)
    {
        printf("Operations");
        printf("\n\t1. Add Sub Role\n\t2. Display Roles\n\t3. Delete Role\n\t4. Add User\n\t5. Display Users");
        printf("\n\t6. Display Users and Sub Users\n\t7. Delete User\n\t8. Number of users from top");
        printf("\n\t9. Height of role hierachy\n\t10. Common boss of users");
        printf("\nOperations to be performed : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: n++; 
            add();
            break;
            case 2: display();
            break;
            case 3: delete();
            break;
            case 4: m++;
            AddUser();
            break;
            case 5: DisplayUser();
            break;
            case 6: DisplayUsersAndSubUsers();
            break;
            case 7: DeleteUser();
            break;
            case 8: UsersFromTop();
            break;
            case 9: RoleHierarchy();
            break;
            case 10: common();
            break;
            case 11: exit(0);
            break;
            default: printf("Invalid operation.\nEnter Again...");
            break;
            }
    }
    return 0;
}