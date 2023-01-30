#include <stdio.h>
#include <math.h>
#include<string.h>
#include <conio.h>
#include <windows.h>
void c1()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
void c2()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
}
void c3()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
}
void c4()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
}
void c5()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
}
void c6()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
}
void c7()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
}
void c8()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
}
void c9()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
}
void c10()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
}
void c11()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
}
void c12()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
}
void c13()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
}
void c14()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
}
void c15()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),16);
}
void re()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
}
long int Bin_to_Dec(long int); //1:BINARY TO DECIMAL
long int Bin_to_Oct(long int); //2:BINARY TO OCTAL
long int Bin_to_Hex(long int); //3:BINARY TO HEXA-DECIMAL
long int Dec_to_Bin(long int); //4:DECIMAL TO BINARY
long int Dec_to_Oct(long int); //5:DECIMAL TO OCTAL
long int Dec_to_Hex(long int); //6:DECIMAL TO HEXA-DECIMAL
long int Oct_to_Bin(long int); //7:OCTAL TO BINARY
long int Oct_to_Dec(long int); //8:OCTAL TO DECIMAL
long int Oct_to_Hex(long int); //9:OCTAL TO HEXA-DECIMAL
void Hex_to_Bin(char []); //10:HEXA-DECIMAL TO BINARY
void Hex_to_Dec(char []); //11:HEXA-DECIMAL TO DECIMAL
void Hex_to_Oct(char []); //12:HEXA-DECIMAL TO OCTAL
 
int main()
{
    int op,num=1,check;
    long int bin,oct,dec;
    char hex[100];
    int i,j,space;  //  FOR PATTERN
     
    c1();printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");
     
    while(num!=0)
    {
        c2();printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");
     
        c3();printf("=> BINARY <=\n");
        c1();printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");
 
        c5();printf("\n=> DECIMAL <=\n");
        re();printf("4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");
 
        c7();printf("\n=> OCTAL <=\n");
        c8();printf("7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");
 
        c9();printf("\n=> HEXA-DECIMAL <=\n");
        c10();printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");
         
        c8();printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&op);
         
        switch(op)
        {
            case 1:
                c12();printf("\n***BINARY TO DECIMAL***\n");
                D:
                re();printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);
                // CHECKING INPUT IS IN BINARY FORM
                check=bin;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        c15();printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        c4();printf("***TRY AGAIN****\n");
                        goto D;
                    }
                    else
                    check=check/10;
                }
                 
                Bin_to_Dec(bin); break;
             
            case 2:
                c1();printf("\n***BINARY TO OCTAL***\n");
                E:
                c2();printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);
                // CHECKING INPUT IS IN BINARY FORM
                check=bin;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        c15();printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        c13();printf("***TRY AGAIN****\n");
                        goto E;
                    }
                    else
                    check=check/10;
                }
                 
                Bin_to_Oct(bin); break;
             
            case 3:
                c3();printf("\n***BINARY TO HEXA-DECIMAL***\n");
                F:
                c5();printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);
                // CHECKING INPUT IS IN BINARY FORM
                check=bin;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        c15();printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        c13();printf("***TRY AGAIN****\n");
                        goto F;
                    }
                    else
                    check=check/10;
                }
                 
                Bin_to_Hex(bin); break;
             
            case 4:
                c6();printf("\n***DECIMAL TO BINARY***\n");
                c7();printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Bin(dec); break;
             
            case 5:
                c8();printf("\n***DECIMAL TO OCTAL***\n");
                c9();printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Oct(dec); break;
             
            case 6:
                c10();printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
                c11();printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Hex(dec); break;
             
            case 7:
                c12();printf("\n***OCTAL TO BINARY***\n");
                A:
                c11();printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        c15();printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto A;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Oct_to_Bin(oct); break;
             
            case 8:
                c1();printf("\n***OCTAL TO DECIMAL***\n");
                B:
                c2();printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        c15();printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto B;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Oct_to_Dec(oct); break;
             
            case 9:
                c3();printf("\n***OCTAL TO HEXA-DECIMAL***\n");
                C:
                c5();printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        c15();printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto C;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Oct_to_Hex(oct); break;
             
            case 10:
                c6();printf("\n***HEXA-DECIMAL TO BINARY***\n");
                X:
                c7();printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        c8();printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        c15();printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto X;
                    }
                }
                Hex_to_Bin(hex); break;
             
            case 11:
                c9();printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
                Y:
                c10();printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        c11();printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        c15();printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Y;
                    }
                }
                Hex_to_Dec(hex); break;
             
            case 12:
                c12();printf("\n***HEXA-DECIMAL TO OCTAL***\n");
                Z:
                c8();printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        c1();printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        c15();printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Z;
                    }
                }
                Hex_to_Oct(hex); break;
             
            default:
                c15();printf("\n***INVALID NUMBER***\n");
                break;                                          
        }
        c2();printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");re();
        scanf("%d",&num);
 
    }
}
 
long int Bin_to_Dec(long int bin)
{
    int rem,sum=0,i=0,jj;
    char num[10][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char num2[10]="0123456789";
    char new[10];
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
     
    c14();printf("\nEquivalent Decimal Number : %d",sum);
    sprintf(new, "%d", sum);
    printf("\nString : %s",new);
    for(i=0;i<strlen(new);i++)
    {
        for(jj=0;jj<strlen(num2);jj++)
        {
            if(new[i] == num2[jj])
            {
                PlaySound(TEXT(num[jj]), NULL, SND_FILENAME);
            }
        }
    }
}
 
long int Bin_to_Oct(long int bin)
{
    int i=0,rem,sum=0,remain[100],len=0;
     
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%8;
        sum=sum/8;
        i++;
        len++;
    }
    c14();printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        c14();
        printf("%d",remain[i]);
    }
}

 
long int Bin_to_Hex(long int bin)
{
    int rem,i=0,sum=0,remain[100],len=0;
     
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }
    c14();printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(remain[i])
        {
            case 10:
                c14();printf("A"); break;
             
            case 11:
                c14();printf("B"); break;
                 
            case 12:
                c14();printf("C"); break;
                 
            case 13:
                c14();printf("D"); break;
                 
            case 14:
                c14();printf("E"); break;
                 
            case 15:
                c14();printf("F"); break;
                 
            default:
                c14();printf("%d",remain[i]);
        }
         
    }
}
 
long int Dec_to_Bin(long int dec)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=dec%2;
        dec=dec/2;
        i++;
        len++;
    }
    while(dec!=0);
     
    c14();printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        c14();printf("%d",rem[i]);
    }
}
 
long int Dec_to_Oct(long int dec)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=dec%8;
        dec=dec/8;
        i++;
        len++;
    }
    while(dec!=0);
     
    c14();printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        c14();printf("%d",rem[i]);
    }
}
 
long int Dec_to_Hex(long int dec)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=dec%16;
        dec=dec/16;
        i++;
        len++;
    }
    while(dec!=0);
     
    c14();printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                c14();printf("A"); break;
             
            case 11:
                c14();printf("B"); break;
                 
            case 12:
                c14();printf("C"); break;
                 
            case 13:
                c14();printf("D"); break;
                 
            case 14:
                c14();printf("E"); break;
                 
            case 15:
                c14();printf("F"); break;
                 
            default:
                c14();printf("%d",rem[i]);
        }
         
    }
}
 
long int Oct_to_Bin(long int oct)
{
    int rem[50],len=0,decimal=0,i=0,num,ans;
     
    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
     
    i=0;
    do
    {
        rem[i]=decimal%2;
        decimal=decimal/2;
        i++;
        len++;
    }
    while(decimal!=0);
     
    c14();printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
 
long int Oct_to_Dec(long int oct)
{
    int decimal=0,i=0,ans,jj;
	char num[10][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char num2[10]="0123456789";
    char new[10]; 
    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    c14();printf("\nEquivalent Decimal Number : %d",decimal);
    sprintf(new, "%d", decimal);
    printf("\nString : %s",new);
    for(i=0;i<strlen(new);i++)
    {
        for(jj=0;jj<strlen(num2);jj++)
        {
            if(new[i] == num2[jj])
            {
                PlaySound(TEXT(num[jj]), NULL, SND_FILENAME);
            }
        }
    }
}
 
long int Oct_to_Hex(long int oct)
{
    int rem[50],len=0,decimal=0,i=0,num,ans=0;
    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    i=0;
    while(decimal!=0)
    {
        rem[i]=decimal%16;
        decimal=decimal/16;
        i++;
        len++;
    }
    c14();printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                c14();printf("A"); break;
             
            case 11:
                c14();printf("B"); break;
                 
            case 12:
                c14();printf("C"); break;
                 
            case 13:
                c14();printf("D"); break;
                 
            case 14:
                c14();printf("E"); break;
                 
            case 15:
                c14();printf("F"); break;
                 
            default:
                c14();printf("%d",rem[i]);
        }
         
    }
}
 
void Hex_to_Bin(char hex[])
{
    int i=0;
    c14();printf("\nEquivalent Binary Number : ");
    for(i=0;i<strlen(hex);i++)
    {
        switch (hex[i])
        {
        case '0':
            c14();printf("0000"); break;
        case '1':
            c14();printf("0001"); break;
        case '2':
            c14();printf("0010"); break;
        case '3':
            c14();printf("0011"); break;
        case '4':
            c14();printf("0100"); break;
        case '5':
            c14();printf("0101"); break;
        case '6':
            c14();printf("0110"); break;
        case '7':
            c14();printf("0111"); break;
        case '8':
            c14();printf("1000"); break;
        case '9':
            c14();printf("1001"); break;
        case 'A':
        case 'a':   
            c14();printf("1010"); break;
        case 'B':
        case 'b':
            c14();printf("1011"); break;
        case 'C':
        case 'c':   
            c14();printf("1100"); break;
        case 'D':
        case 'd':   
            c14();printf("1101"); break;
        case 'E':
        case 'e':   
            c14();printf("1110"); break;
        case 'F':
        case 'f':   
            c14();printf("1111"); break;
         
        default:
            c14();printf("\n Invalid hexa digit %c ", hex[i]);            
        }
    }
 
}
 
void Hex_to_Dec(char hex[])
{
    int jj,i,num=0,power=0,decimal=0;
    char nu[10][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char nu2[10]="0123456789";
    char new[10];
     
    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=hex[i]-48;
        }
         
        decimal=decimal+num*pow(16,power);
        power++;
    }
    c14();printf("\nEquivalent Decimal Number : %d",decimal);
    sprintf(new, "%d", decimal);
    printf("\nString : %s",new);
    for(i=0;i<strlen(new);i++)
    {
        for(jj=0;jj<strlen(nu2);jj++)
        {
            if(new[i] == nu2[jj])
            {
                PlaySound(TEXT(nu[jj]), NULL, SND_FILENAME);
            }
        }
    }
 
}
 
void Hex_to_Oct(char hex[])
{
    int i,len,num=0,power=0,decimal=0,rem[100];
     
    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=hex[i]-48;
        }
         
        decimal=decimal+num*pow(16,power);
        power++;
    }
     
    i=0,len=0;
    while(decimal!=0)
    {
        rem[i]=decimal%8;
        decimal=decimal/8;
        i++;
        len++;
    }
    c14();printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        c14();printf("%d",rem[i]);
    }
re();     
}
