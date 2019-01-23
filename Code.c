#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<string.h>
structacc
{
doublebal,ltran;
longid;
charuid[13],pan[10],tpwd[20],pwd[20],fname[30],lname[30],paisa[30],key[30],trolls[20];
structacc*next;
}*head,*trav,*temp;
inti=0;
voidlogin()
{
chara[100],pwd2[20],pwd3[20],tran[20],troll[20];
longid;
intch,id2,x,f1,chn,in,cht;
doubleamt;
vapaslogin:
system("cls");
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t \t|\n");
printf("\t\t|\tWelcometoLOOTBankAccountportal\t|\n");
printf("\t\t|\t \t|\n");
printf("\t\t+-----------------------------------------------+\n");
printf("\nEnteryouronedigituserid:");
scanf("%ld",&id);
if(id>i){
system("cls");
printf("\n\n\n\n\n\n\n\n\n\t +-----------------------------------------------------+\n");
printf("\t | |\n");
printf("\t | Sorry |\n");
printf("\t | Noaccountwithsuchidfound |\n");
printf("\t | |\n");
printf("\t +-----------------------------------------------------+\n");
sleep(2);
system("cls");
}
else
{
trav=head;
while(trav->id!=id)
trav=trav->next;
printf("Hello,%s",trav->fname);
printf("\nEnteryourpassword:");
scanf("%s",&pwd2);
trav=head;
if(strcmp(trav->pwd,pwd2))
{
printf("\nIncorrectPassword!!\n1.Trylogginginagain?\n2.ForgotPassword?\n");
scanf("%d",&chn);
switch(chn)
{
case1:gotovapaslogin;
case2:trendytrollers:
printf("Enteryourtrollkey:");
scanf("%s",&troll);
if(strcmp(trav->trolls,troll))
{
printf("Wrongtrollpassword\n1.Entertrollkeyagain\n2.Goback");
scanf("%d",&cht);
switch(cht)
{
case1:gototrendytrollers;
case2:system("cls");
break;
}
}
else
{
system("cls");
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t \t|\n");
printf("\t\t|\tWelcometoLOOTBankAccountportal\t|\n");
printf("\t\t|\t \t|\n");
printf("\t\t+-----------------------------------------------+\n");
gotoapnakhaata;
}
}
}
else
{
system("cls");
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t \t|\n");
printf("\t\t|\tWelcometoLOOTBankAccountportal\t|\n");
printf("\t\t|\t \t|\n");
printf("\t\t+-----------------------------------------------+\n");
apnakhaata:
printf("+------------------------+\n");
printf("|1.Transfermoney. |\n|2.DisplayA/Cdetails. |\n|3.LinkPANwith
account.|\n|4.Registeracomplaint.|\n|5.LogOut. |\n+------------------------+\nEnter
yourchoice:\n");
scanf("%d",&ch);
while(id!=trav->id)
trav=trav->next;
switch(ch)
{
benkhaata:
case1:printf("EnterBeneficiary'sID:\n");
scanf("%d",&id2);
if(id2>i){
printf("No account found with such id.\nPlease Try
Again!.\n\n");
system("cls");
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t \t|\n");
printf("\t\t|\tWelcometoLOOTBankAccountportal\t|\n");
printf("\t\t|\t \t|\n");
printf("\t\t+-----------------------------------------------+\n");
}
elseif(id2==id)
{
printf("CannotPlaceATransferToTheSameAccount!\nPlease
EnterAValidBeneficiaryID!\n\n");
sleep(2);
system("cls");
gotobenkhaata;
}
else
{
printf("Availablebalance:%lf\n",trav->bal);
vapas:
printf("Entertheamounttobetransferred:");
scanf("%lf",&amt);
if(amt>trav->bal)
{
printf("Insufficient Balance\nAvailable
balance:%lf\n",trav->bal);
gotovapas;
}
else
{
tranvapas:
printf("Enteryourtransactionpassword:\n");
scanf("%s",&tran);
if(!strcmp(trav->tpwd,tran))
{
temp=head;
while(temp->id!=id2)
temp=temp->next;
trav->ltran=(-1)*amt;
temp->ltran=amt;
temp->bal+=amt;
trav->bal-=amt;
for(in=0;temp->fname[in]!='\0';in++)
trav->paisa[in]=temp->fname[in];
for(in=0;temp->lname[in]!='\0';in++)
trav->paisa[in]=temp->lname[in];
for(in=0;trav->fname[in]!='\0';in++)
temp->paisa[in]=trav->fname[in];
for(in=0;trav->lname[in]!='\0';in++)
temp->paisa[in]=trav->lname[in];
printf("Amounttransferredsuccessfully!!\n");
getch();
system("cls");
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t
\t|\n");
printf("\t\t|\tWelcome to LOOT Bank Account
portal\t|\n");
printf("\t\t|\t
\t|\n");
printf("\t\t+-----------------------------------------------+\n");
}
else
{
printf("Incorrectpassword\n");
gototranvapas;
}
}
}
gotoapnakhaata;
case2:if(trav->ltran==0)
printf("AccountHolder's Name:%s %s\nAccountHolder's ID:
%ld\nBalance:%lf\nNoLastTransaction\n",trav->fname,trav->lname,trav->id,trav->bal);
elseif(trav->ltran<0)
printf("AccountHolder's Name:%s %s\nAccountHolder's ID:
%ld\nBalance:%lf\nLastTransaction:YouraccountwasdebitedbyRs.%lfto%s'saccount.
\n",trav->fname,trav->lname,trav->id,trav->bal,(-1)*trav->ltran,trav->paisa);
else
printf("AccountHolder's Name:%s %s\nAccountHolder's ID:
%ld\nBalance:%lf\nLastTransaction:YouraccountwascreditedbyRs.%lfby%s.\n",trav
->fname,trav->lname,trav->id,trav->bal,trav->ltran,trav->paisa);
if(trav->pan==NULL)
printf("LinkyourPANasearlyaspossible\n");
getch();
system("cls");
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t \t|\n");
printf("\t\t|\tWelcometoLOOTBankAccountportal\t|\n");
printf("\t\t|\t \t|\n");
printf("\t\t+-----------------------------------------------+\n");
gotoapnakhaata;
case3:if(trav->pan[0]==NULL)
{
printf("EnteryouPANnumber\n");
scanf("%s",&trav->pan);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\t +-----------------------------------------------------
+\n");
printf("\t |
|\n");
printf("\t | PAN hasbeensuccessfullylinked
|\n");
printf("\t | HaveA NiceDay!!..
|\n");
printf("\t |
|\n");
printf("\t +-----------------------------------------------------+\n");
sleep(2);
system("cls");
}
else
printf("PANisalreadylinked!.");
system("cls");
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t \t|\n");
printf("\t\t|\tWelcometoLOOTBankAccountportal\t|\n");
printf("\t\t|\t \t|\n");
printf("\t\t+-----------------------------------------------+\n");
gotoapnakhaata;
case4:system("cls");
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t \t|\n");
printf("\t\t|\tWelcometoLOOTBankAccountportal\t|\n");
printf("\t\t|\t \t|\n");
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t***WelcometoLOOTOnlineComplaintForum***\n\nEnter
yourcomplaintbelow:-\n");
gets(a);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\t +-----------------------------------------------------
+\n");
printf("\t |
|\n");
printf("\t | WewillworkOnyourissuesoon,
|\n");
printf("\t | PleasenoteyourComplaintid :CC%d
|\n",(x<0)?(-x):(x));
printf("\t | HaveA NiceDay!!..
|\n");
printf("\t |
|\n");
printf("\t +-----------------------------------------------------+\n");
sleep(2);
system("cls");
// printf("WewillworkOnyourissuesoon,pleasenoteyourcomplaintid
:CC%d",(x<0)?(-x):(x));
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t \t|\n");
printf("\t\t|\tWelcometoLOOTBankAccountportal\t|\n");
printf("\t\t|\t \t|\n");
printf("\t\t+-----------------------------------------------+\n");
gotoapnakhaata;
case5:system("cls");
printf("\n\n\n\n\n\n\n\n\n\t +-----------------------------------------------------
+\n");
printf("\t |
|\n");
printf("\t | YouHaveBeenSuccessfullyLoggedOut!!
|\n");
printf("\t | HaveA NiceDay!!..
|\n");
printf("\t |
|\n");
printf("\t +-----------------------------------------------------+\n");
sleep(2);
system("cls");
break;
}
}
}
}
voidcreate()
{
intstore/*,count=0*/,len;
charpwd1[20],adar[30];
structacc*a=(structacc*)malloc(sizeof(structacc));
a->next=NULL;
system("cls");
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t \t|\n");
printf("\t\t|\tWelcometoLOOTBankAccountportal\t|\n");
printf("\t\t|\t \t|\n");
printf("\t\t+-----------------------------------------------+\n\n");
printf("Enteryourfirstname:");
scanf("%s",&a->fname);
printf("Enteryourlastname:");
scanf("%s",&a->lname);
Aadhaar:
printf("Enteryour12digitAadhaarnumber:");
scanf("%s",&a->uid);
if(strlen(a->uid)!=12)
{
printf("PleaseEnterAValidAadharNumber!\n");
gotoAadhaar;
}
vapasconfirm:
printf("\nEnterYourPassword:");
scanf("%s",&a->pwd);
printf("ConfirmYourPassword:");
scanf("%s",&pwd1);
if(strcmp(a->pwd,pwd1))
{
printf("PasswordDoesn'tMatch!!\nPleaseRetry.\n");
gotovapasconfirm;
}
else
{
strcat(pwd1,"het3030");
printf("Yourid is %d.\nYourpassword is %s.\nYouronline transaction password
is:%s.\nPleaseRememberTheseDetailsCorrectly!",++i,a->pwd,pwd1);
printf("\n\nCongratulations!!!,your account has been succesfully created with
us.\n\nEnterOpeningBalance:");
scanf("%lf",&a->bal);
a->id=i;
a->pan[0]=NULL;
a->ltran=0;
(a->id%2==0)?(strcpy(a->trolls,"chaipilo")):(strcpy(a->trolls,"halofrands"));
strcpy(a->tpwd,pwd1);
if(head==NULL)
head=a;
else
{
trav=head;
while(trav->next!=NULL)
trav=trav->next;
trav->next=a;
}
system("cls");
printf("\n\n\n\n\n\n\n\n\n\t +-----------------------------------------------------+\n");
printf("\t | |\n");
printf("\t | Accountopenedsuccessfully!! |\n");
printf("\t | HaveANiceDay!!.. |\n");
printf("\t | |\n");
printf("\t +-----------------------------------------------------+\n");
sleep(2);
system("cls");
}
}
intmain()
{
intch;
system("cls");
do{
printf("\t\t+-----------------------------------------------+\n");
printf("\t\t|\t \t|\n");
printf("\t\t|\tWelcometoLOOTBankAccountportal\t|\n");
printf("\t\t|\t \t|\n");
printf("\t\t+-----------------------------------------------+\n");
printf("+---------------------+");
printf("\n|1.Existingcustomer?|\n|2.Createanaccount.|\n|3.Exit. |\n");
printf("+---------------------+\n");
printf("EnterYourChoice:");
scanf("%d",&ch);
switch(ch)
{
case1:login();
break;
case2:create();
break;
case3:system("cls");
printf("\n\n\n\n\n\n\n\n\n\t +-----------------------------------------------------+\n");
printf("\t | |\n");
printf("\t | ThankYouForBankingWithUs!! |\n");
printf("\t | HaveANiceDay!!.. |\n");
printf("\t | |\n");
printf("\t +-----------------------------------------------------+\n");
sleep(2);
break;
default:printf("Entervalidchoice!\n");
}
}while(ch!=3);
return0;
}
