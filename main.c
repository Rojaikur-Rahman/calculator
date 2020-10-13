#include <stdio.h>

int sumation(char name[])
{
    int modefortype;
    printf("Enter result TYPE: \n 1. integer .\n 2. float \n 3. EXIT \nMODE : ");
    scanf("%d",&modefortype);

    if ( modefortype == 1 )
    {
                                printf("\n INTEGER MODE \n");
        int i,numberOfRolling,sum = 0,n;
        printf("Hey %s, how many numbers to sum: ",name);
        scanf("%d",&numberOfRolling);

        printf("Enter values : \n ");
        for(i=1; i<=numberOfRolling; i++)
        {
            printf(" Number %d : ",i);
            scanf("%d",&n);
            sum += n;
        }
        printf("\n Sum is : %d\n",sum);
    }
    else if( modefortype == 2 )
    {
                                printf("\n FLOAT MODE \n");
        int i,numberOfRolling;
        float sum = 0, n;
        printf("Hey %s, how many numbers to sum: ",name);
        scanf("%d",&numberOfRolling);

        printf("Enter values : \n ");
        for(i=1; i<=numberOfRolling; i++)
        {
            printf(" Number %d : ",i);
            scanf("%f",&n);
            sum += n;
        }
        printf("\n Sum is : %f\n",sum);
    }
}
int substraction(char name[])
{
    int modefortype;
    printf("Enter result TYPE: \n 1. integer .\n 2. float \n 3. EXIT \nMODE : ");
    scanf("%d",&modefortype);

    if (modefortype == 1)
    {
                                printf("\n INTEGER MODE \n");
        int num1,num2,sub = 0;
        printf("Hey %s, Enter two numbers (first number will substract by 2nd number): ",name);

        printf("\nNumber 1 : ");
        scanf("%d",&num1);

        printf("Number 2 : ");
        scanf("%d",&num2);

        sub = num1 - num2;

        printf("Substract is : %d\n",sub);
    }
    else if (modefortype == 2)
    {
                                printf("\n FLOAT MODE \n");


        float num1,num2,sub = 0;
        printf("Hey %s, Enter two numbers (first number will substract by 2nd number): ",name);

        printf("\nNumber 1 : ");
        scanf("%f",&num1);

        printf("Number 2 : ");
        scanf("%f",&num2);

        sub = num1 - num2;

        printf("Substract is : %f\n",sub);

    }
    else
    {
        return 0;
    }

}
int multiplicatin(char name[])
{
    int modefortype;
    printf("Enter result TYPE: \n 1. integer .\n 2. float \n 3. EXIT \nMODE : ");
    scanf("%d",&modefortype);

    if ( modefortype == 1)
    {
        int mul[30]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
        int numsofrolling;
        int i;
        printf("\n\t\t\t\t\t\t INTEGER MODE \n");
        printf("\nHey %s, how many numbers to multiply : ",name);
        scanf("%d",&numsofrolling);

        printf("Enter values : \n ");
        for (i=0; i<numsofrolling; i++)
        {
            printf(" Number %d : ",i+1);
            scanf("%d",&mul[i]);
        }


        printf("Multiplication of %d numbers is : %d\n",numsofrolling,mul[0]*mul[1]*mul[2]*mul[3]*mul[4]*mul[5]*mul[6]*mul[7]*mul[8]*mul[9]*mul[10]*mul[11]*mul[12]*mul[13]*mul[14]*mul[15]*mul[16]*mul[17]*mul[18]*mul[19]*mul[20]*mul[21]*mul[22]*mul[23]*mul[24]*mul[25]*mul[26]*mul[27]*mul[28]*mul[29]);
        return 0;
    }
    else if ( modefortype == 2 )
    {

        float mul[30]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
        int numsofrolling;
        int i;
        printf("\n\t\t\t\t\t\t FLOAT MODE \n");
        printf("\nHey %s, how many numbers to multiply : ",name);
        scanf("%d",&numsofrolling);

        printf("Enter values : \n ");
        for (i=0; i<numsofrolling; i++)
        {
            printf(" Number %d : ",i+1);
            scanf("%f",&mul[i]);
        }


        printf("Multiplication of %d numbers is : %f\n",numsofrolling,mul[0]*mul[1]*mul[2]*mul[3]*mul[4]*mul[5]*mul[6]*mul[7]*mul[8]*mul[9]*mul[10]*mul[11]*mul[12]*mul[13]*mul[14]*mul[15]*mul[16]*mul[17]*mul[18]*mul[19]*mul[20]*mul[21]*mul[22]*mul[23]*mul[24]*mul[25]*mul[26]*mul[27]*mul[28]*mul[29]);
        return 0;
    }
    else
    {
        return 0;
    }


}
int division(char name[])
{
    int modeforres;
    printf("Enter result TYPE: \n 1. integer .\n 2. float \n 3. EXIT \nMODE : ");
    scanf("%d",&modeforres);

    if ( modeforres == 1 )
    {
                                printf("\n INTEGER MODE \n");

        int num1,num2;
        int div = 1;
        printf("Hey %s,Enter 2 numbers to divide(float numbers) : ",name);
        printf("\nNumber 1 : ");
        scanf("%d",&num1);
        printf("Number 2 : ");
        scanf("%d",&num2);

        div = num1 / num2;

        printf("Division is : %d\n",div);
    }
    else if( modeforres == 2)
    {
                                printf("\n FLOAT MODE \n");

        float num1,num2;
        float div = 1;
        printf("Hey %s,Enter 2 numbers to divide(float numbers) : ",name);
        printf("\nNumber 1 : ");
        scanf("%f",&num1);
        printf("Number 2 : ");
        scanf("%f",&num2);

        div = num1 / num2;

        printf("Division is : %f\n",div);
    }
    else
    {
        return 0;
    }

}
int square(char name[])
{
    int modeforres;
    printf("Enter result TYPE: \n 1. integer .\n 2. float \n 3. EXIT \nMODE : ");
    scanf("%d",&modeforres);

    if (modeforres == 1)
    {
                                printf("\n INTEGER MODE \n");

        int numforsquare,result = 1;
        printf("Hey %s, Enter a number to square : ",name);
        scanf("%d",&numforsquare);

        result = numforsquare * numforsquare;

        printf("Square is %d\n",result);
    }
    else if (modeforres == 2)
    {
                                printf("\n FLOAT MODE \n");

        float numforsquare,result = 1;
        printf("Hey %s, Enter a number to square : ",name);
        scanf("%f",&numforsquare);

        result = numforsquare * numforsquare;

        printf("Square is %f\n",result);
    }
    else{
        return 0;
    }

}
int cube(char name[]) {
    int modeforres;
    printf("Enter result TYPE: \n 1. integer .\n 2. float \n 3. EXIT \nMODE : ");
    scanf("%d", &modeforres);

    if (modeforres == 1) {
                                printf("\n INTEGER MODE \n");

        int numforcube, result = 1;
        printf("Hey %s, Enter a number to cube : ", name);
        scanf("%d", &numforcube);

        result = numforcube * numforcube * numforcube;

        printf("Cube is %d\n", result);

    }
    else if (modeforres == 2){
                                printf("\n FLOAT MODE \n");

        float numforcube, result = 1;
        printf("Hey %s, Enter a number to cube : ", name);
        scanf("%f", &numforcube);

        result = numforcube * numforcube * numforcube;

        printf("Cube is %f\n", result);
    }
    else{
        return 0;
    }

}

struct person
{
    char gmailid[100];
    char username[90];
    char password[70];
};

int main()
{
    struct person person1,person2;

    int mode,sum,sub,mul,div,squ,cbe,loginorsigup;
    int sumv1,subv1,mulv1,divv1,squv1,cbev1,lve2;
    int sumv2,subv2,mulv2,divv2,squv2,cbev2;
    int sumv3,subv3,mulv3,divv3,squv3,cbev3;
    int sumv4,subv4,mulv4,divv4,squv4,cbev4;
    int sumv5,subv5,mulv5,divv5,squv5,cbev5;
    int sumv6,subv6,mulv6,divv6,squv6,cbev6;
    char name[100];
    int modeforif1,modeforif2,modeforif3,modeforif4,modeforif5,modeforif6;

    printf("Hi there, welcome to our visual calculator.We some extra convenience to the users so we've named the calculator as a visual calculator. Our convenience to the users are : \n CONVENIENCE : \n This calculator has a log in , sign up and without sign up convenience.\n So that you can log in with your account and start using the calculator immediately.. ");
    printf("What you want to do now : \n 1. LOG IN \n 2. SIGN UP \n 3. Use without sign in \n 4. EXIT \n MODE : ");
    scanf("%d",&loginorsigup);
    if (loginorsigup == 1)
    {
        printf("Enter your email address : ");
        scanf("%s",&person1.gmailid);
        printf("Enter password for account (%s) : ",person1.gmailid);
        fflush(stdin);
        gets(person1.password);

        printf("\n Password and e-mail address doesn't match. \n\t\t\t\t\t\t\tPLEASE TRY AGAIN LATER. \n");

    }
    else if (loginorsigup == 2)
    {
        printf("Enter your user name : ");
        fflush(stdin);
        gets(person2.username);
        printf("Create an account : ");
        fflush(stdin);
        gets(person2.gmailid);
        printf("Create a strong password for account '%s' : ",person2.gmailid);
        gets(person2.password);
        printf("\t\t\t\t\t\t\t\t\t saved successfully.");
        printf("\n\nWhat you want to do now ? \n 1. Let's go to calculator \n 2. View your profile \n 3. EXIT\n MODE : ");
        scanf("%d",&lve2);
        if (lve2 == 1)
        {
            printf("\t\t\t\t\t\tTHE VISUAL CALCULATOR");

            printf("\nHi %s,\nI'm a bot(only use for calculator) created by MOHAMMED ROJAIKUR RAHMAN.",person2.username);
            printf("Enter the number of mode : ");
            printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
            printf("MODE : ");
            scanf("%d",&mode);

            if ( mode == 1 )
            {
                sum = sumation(person2.username);
                printf("Enter the number of mode : ");
                printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n ");
                printf("MODE : ");
                scanf("%d",&modeforif1);
                if (modeforif1 == 1)
                {
                    sumv1 = sumation(person2.username);
                }
                else if (modeforif1 == 2)
                {
                    subv1 = substraction(person2.username);
                }
                else if (modeforif1 == 3)
                {
                    mulv1 = multiplicatin(person2.username);
                }
                else if (modeforif1 == 4)
                {
                    divv1 = division(person2.username);
                }
                else if (modeforif1 == 5)
                {
                    squ = square(person2.username);
                }
                else if (modeforif1 == 6)
                {
                    cbe = cube(person2.username);
                }
                else
                {
                    return 0;
                }

            }
            else if ( mode == 2 )
            {
                sub = substraction(person2.username);
                printf("Enter the number of mode : ");
                printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
                printf("MODE : ");
                scanf("%d",&modeforif2);
                if (modeforif2 == 1)
                {
                    sumv2 = sumation(person2.username);
                }
                else if (modeforif2 == 2)
                {
                    subv2 = substraction(person2.username);
                }
                else if (modeforif2 == 3)
                {
                    mulv2 = multiplicatin(person2.username);
                }
                else if (modeforif2 == 4)
                {
                    divv2 = division(person2.username);
                }
                else if (modeforif2 == 5)
                {
                    squv2 = square(person2.username);
                }
                else if (modeforif2 == 6)
                {
                    cbev2 = cube(person2.username);
                }
                else
                {
                    return 0;
                }

            }
            else if ( mode == 3 )
            {
                mul = multiplicatin(person2.username);
                printf("Enter the number of mode : ");
                printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
                printf("MODE : ");
                scanf("%d",&modeforif3);
                if (modeforif3 == 1)
                {
                    sumv3 = sumation(person2.username);
                }
                else if (modeforif3 == 2)
                {
                    subv3 = substraction(person2.username);
                }
                else if (modeforif3 == 3)
                {
                    mulv3 = multiplicatin(person2.username);
                }
                else if (modeforif3 == 4)
                {
                    divv3 = division(person2.username);
                }
                else if (modeforif3 == 5)
                {
                    squv3 = square(person2.username);
                }
                else if (modeforif3 == 6)
                {
                    cbev3 = cube(person2.username);
                }
                else
                {
                    return 0;
                }


            }
            else if ( mode == 4 )
            {
                div = division(person2.username);
                printf("Enter the number of mode : ");
                printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
                printf("MODE : ");
                scanf("%d",&modeforif4);
                if (modeforif4 == 1)
                {
                    sumv4 = sumation(person2.username);
                }
                else if (modeforif4 == 2)
                {
                    subv4 = substraction(person2.username);
                }
                else if (modeforif4 == 3)
                {
                    mulv4 = multiplicatin(person2.username);
                }
                else if (modeforif4 == 4)
                {
                    divv4 = division(person2.username);
                }
                else if (modeforif4 == 5)
                {
                    squv4 = square(person2.username);
                }
                else if (modeforif4 == 6)
                {
                    cbev4 = cube(person2.username);
                }
                else
                {
                    return 0;
                }

            }
            else if ( mode == 5 )
            {
                squ = square(person2.username);
                printf("Enter the number of mode : ");
                printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
                printf("MODE : ");
                scanf("%d",&modeforif5);
                if (modeforif5 == 1)
                {
                    sumv5 = sumation(person2.username);
                }
                else if (modeforif5 == 2)
                {
                    subv5 = substraction(person2.username);
                }
                else if (modeforif5 == 3)
                {
                    mulv5 = multiplicatin(person2.username);
                }
                else if (modeforif5 == 4)
                {
                    divv5 = division(person2.username);
                }
                else if (modeforif5 == 5)
                {
                    squv5 = square(person2.username);
                }
                else if (modeforif5 == 6)
                {
                    cbev5 = cube(person2.username);
                }
                else
                {
                    return 0;
                }

            }
            else if ( mode == 6 )
            {
                cbe = cube(person2.username);
                printf("Enter the number of mode : ");
                printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
                printf("MODE : ");
                scanf("%d",&modeforif6);
                if (modeforif6 == 1)
                {
                    sumv6 = sumation(person2.username);
                }
                else if (modeforif6 == 2)
                {
                    subv6 = substraction(person2.username);
                }
                else if (modeforif6 == 3)
                {
                    mulv6 = multiplicatin(person2.username);
                }
                else if (modeforif6 == 4)
                {
                    divv5 = division(person2.username);
                }
                else if (modeforif6 == 5)
                {
                    squv6 = square(person2.username);
                }
                else if (modeforif6 == 6)
                {
                    cbev6 = cube(person2.username);
                }
                else
                {
                    return 0;
                }

            } else{
                return 0;
            }

        }
        else if (lve2 == 2)
        {
            printf("\n User Name        : %s\n",person2.username);
            printf(" Account          : %s\n",person2.gmailid);
            printf(" Account Password : %s\n",person2.password);
        }
        else{
            return 0;
        }

    }
    else if (loginorsigup == 3)
    {
                            printf("\n\t\t\tYou are using THE VISUAL CALCULATOR.(Without sign up)\n");

        printf("\nYou havn't entered your name. so please enter your name thus we can realize that you aren't a robot.  \n");
        printf("\nName : ");
        fflush(stdin);
        gets(name);


        printf("Hi %s,\nI'm a bot(only use for calculator) created by MOHAMMED ROJAIKUR RAHMAN.",name);
        printf("Enter the number of mode : ");
        printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
        printf("MODE : ");
        scanf("%d",&mode);

        if ( mode == 1 )
        {
            sum = sumation(name);
            printf("Enter the number of mode : ");
            printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
            printf("MODE : ");
            scanf("%d",&modeforif1);
            if (modeforif1 == 1)
            {
                sumv1 = sumation(name);
            }
            else if (modeforif1 == 2)
            {
                subv1 = substraction(name);
            }
            else if (modeforif1 == 3)
            {
                mulv1 = multiplicatin(name);
            }
            else if (modeforif1 == 4)
            {
                divv1 = division(name);
            }
            else if (modeforif1 == 5)
            {
                squ = square(name);
            }
            else if (modeforif1 == 6)
            {
                cbe = cube(name);
            }
            else
            {
                return 0;
            }

        }
        else if ( mode == 2 )
        {
            sub = substraction(name);
            printf("Enter the number of mode : ");
            printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
            printf("MODE : ");
            scanf("%d",&modeforif2);
            if (modeforif2 == 1)
            {
                sumv2 = sumation(name);
            }
            else if (modeforif2 == 2)
            {
                subv2 = substraction(name);
            }
            else if (modeforif2 == 3)
            {
                mulv2 = multiplicatin(name);
            }
            else if (modeforif2 == 4)
            {
                divv2 = division(name);
            }
            else if (modeforif2 == 5)
            {
                squv2 = square(name);
            }
            else if (modeforif2 == 6)
            {
                cbev2 = cube(name);
            }
            else
            {
                return 0;
            }

        }
        else if ( mode == 3 )
        {
            mul = multiplicatin(name);
            printf("Enter the number of mode : ");
            printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
            printf("MODE : ");
            scanf("%d",&modeforif3);
            if (modeforif3 == 1)
            {
                sumv3 = sumation(name);
            }
            else if (modeforif3 == 2)
            {
                subv3 = substraction(name);
            }
            else if (modeforif3 == 3)
            {
                mulv3 = multiplicatin(name);
            }
            else if (modeforif3 == 4)
            {
                divv3 = division(name);
            }
            else if (modeforif3 == 5)
            {
                squv3 = square(name);
            }
            else if (modeforif3 == 6)
            {
                cbev3 = cube(name);
            }
            else {
                return 0;
            }
        }

        else if ( mode == 4 )
        {
            div = division(name);
            printf("Enter the number of mode : ");
            printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
            printf("MODE : ");
            scanf("%d",&modeforif4);
            if (modeforif4 == 1)
            {
                sumv4 = sumation(name);
            }
            else if (modeforif4 == 2)
            {
                subv4 = substraction(name);
            }
            else if (modeforif4 == 3)
            {
                mulv4 = multiplicatin(name);
            }
            else if (modeforif4 == 4)
            {
                divv4 = division(name);
            }
            else if (modeforif4 == 5)
            {
                squv4 = square(name);
            }
            else if (modeforif4 == 6)
            {
                cbev4 = cube(name);
            }
            else
            {
                return 0;
            }

        }
        else if ( mode == 5 )
        {
            squ = square(name);
            printf("Enter the number of mode : ");
            printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
            printf("MODE : ");
            scanf("%d",&modeforif5);
            if (modeforif5 == 1)
            {
                sumv5 = sumation(name);
            }
            else if (modeforif5 == 2)
            {
                subv5 = substraction(name);
            }
            else if (modeforif5 == 3)
            {
                mulv5 = multiplicatin(name);
            }
            else if (modeforif5 == 4)
            {
                divv5 = division(name);
            }
            else if (modeforif5 == 5)
            {
                squv5 = square(name);
            }
            else if (modeforif5 == 6)
            {
                cbev5 = cube(name);
            }
            else
            {
                return 0;
            }

        }
        else if ( mode == 6 )
        {
            cbe = cube(name);
            printf("Enter the number of mode : ");
            printf("\n 1 . Addition \n 2 . Substruction \n 3 . Multiplication \n 4 . Division \n 5 . square \n 6 . cubic \n 7 . EXIT \n");
            printf("MODE : ");
            scanf("%d",&modeforif6);
            if (modeforif6 == 1)
            {
                sumv6 = sumation(name);
            }
            else if (modeforif6 == 2)
            {
                subv6 = substraction(name);
            }
            else if (modeforif6 == 3)
            {
                mulv6 = multiplicatin(name);
            }
            else if (modeforif6 == 4)
            {
                divv6 = division(name);
            }
            else if (modeforif6 == 5)
            {
                squv6 = square(name);
            }
            else if (modeforif6 == 6)
            {
                cbev6 = cube(name);
            }
            else
            {
                return 0;
            }

        } else{
            return 0;
        }
    }
    else{
        return 0;
    }

    return 0;
}