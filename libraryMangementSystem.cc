#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
#include<string>
#include<fstream>

using namespace std;

int n;
int n1;
int i;
int inc=0;
int inc1=0;
char arr[1000];

class book
{
   public:
   int bookcode;
   char bookname[20];
   char authorname[20];
   char bookpub[20];
   int bookprice;
   int status;

   public:
  void addbook()
{
   
    status=1;
    std::cout<<"\t\t\t   YOU HAVE CHOSEN TO ADD BOOK DETAILS\t\t\t"<<endl;
    std::cout<<"\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\t\t\t"<<endl;
    std::cout<<endl;
    inc++;
    bookcode=100+inc;
    
    std::cout<<"\n\tBook code                :"<<bookcode;
    std::cout<<endl;
    
    std::cout<<"\n\tEnter book name          :";
    std::cin>>bookname;
    
    std::cout<<"\n\tEnter author name        :";
    std::cin>>authorname;
    
    std::cout<<"\n\tEnter publishing company :";
    std::cin>>bookpub;
    
    std::cout<<"\n\tEnter book price         :";
    std::cin>>bookprice;
        
}
void dispbook()
{
  std::cout<<bookcode<<"\t\t"<<bookname<<"\t\t"<<authorname<<"\t\t"<<bookpub<<"\t\t"<<bookprice;

}
void liststat()
{
  if(status==1)
  {
     std::cout<<"\tAvailable"<<endl;
     std::cout<< endl;
  }
  else
  {
     std::cout<<"\tIssued"<<endl;
     std::cout<< endl;
   }

}
};book b[10];
class student
{
public:
int studid;
char studname[20];
char deptname[20];
int bookcount;
public:
void addstud()
{
    
    std::cout<<"\t\tYOU HAVE CHOSEN TO ADD STUDENT DETAILS";
    std::cout<<"\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    std::cout<< endl;
    std::cout<< endl;
    inc1++;
    studid=100+inc1;
    std::cout<<"\t\tStudent Id            :"<<studid;
    std::cout<< endl;
    std::cout<< endl;
    std::cout<<"\t\tEnter Student Name    :";
    std::cin>>studname;
    std::cout<< endl;
    std::cout<<"\t\tEnter Department Name :";
    std::cin>>deptname;
    std::cout<< endl;
    bookcount=2;
    std::cout<< endl;
    std::cout<<"\t\tMaximum books allowed for a student:"<<bookcount<<endl;
    std::cout<< endl;
 }
 void dispstud()
 {
     std::cout<<"\t"<<studid<<"\t\t"<<studname<<"\t\t"<<deptname<<endl;
    //bookcount=2;
    std::cout<< endl;
 }
};student s[10];
class issue
{
   public:
   int day,month,year;
   int day2,month2,year2;
   int iday,imon,iyear;
   int rday,rmon,ryear;
   int eday,emon,eyear;
   int yr1,yr2,m1,m2,d1,d2,mons1,mons2,mons,days,yrs,sum,j;
   int  loop;
   int fine;

   public:
   void isdatecalc()
   {
		    std::cout<<"\t\tEnter day:";
		    std::cin>>day;
		    std::cout<<"\t\tEnter month:";
		    std::cin>>month;
		    std::cout<<"\t\tEnter year:";
		    std::cin>>year;
		    day2=day;
		    month2=month;
		    year2=year;
		    day2=day2+20;

			   if(((month2==1)||(month2==3)||(month2==5)||(month2==7)||(month2==8)||(month2==10)||(month2==12))&&((day2>31)))
			    {
				day2=day2-31;
				month2=month2+1;
				if(month2==13)
				 {
				   year2++;
				   month2=1;
				 }
			      }
			   else if(((month2==4)||(month2==6)||(month2==9)||(month2==11))&&((day2>30)))
				 {
				     day2-=30;
				     month2++;
				    }
			    else if(((year2%4==0)||(year2%400==0))&&(day2>29)&&(month==2))
			      {
				day2-=29;
				month2++;
			    }
			    else if(((year2%4!=0)||(year2%100!=0)||(year2%400!=0))&&(day2>28)&&(month2==2))
			    {
			      day2-=28;
			      month2++;
			     }
			     std::cout<<endl;
 }
 void isdate()
 {
   iday=day;
   imon=month;
   iyear=year;

   std::cout<<"\t\tIssued date:"<<iday<<"/"<<imon<<"/"<<iyear<<endl;
   std::cout<< endl;
 }
 void retdate()
 {
 rday=day2;
 rmon=month2;
 ryear=year2;
 std::cout<<"\t\tReturn Date:"<<rday<<"/"<<rmon<<"/"<<ryear<<endl;
 std::cout<< endl;
 }
 void edatecalc()
 {
   eday=rday;
   emon=rmon;
   eyear=ryear;
		 eday=eday+20;
		 if(((emon==1)||(emon==3)||(emon==5)||(emon==7)||(emon==8)||(emon==10)||(emon==12))&&((eday>31)))
			    {
				eday=eday-31;
				emon=emon+1;
				if(emon==13)
				 {
				   eyear++;
				   emon=1;
				 }
			      }
			   else if(((emon==4)||(emon==6)||(emon==9)||(emon==11))&&((eday>30)))
				 {
				    eday-=30;
				    emon++;
				    }
			    else if(((eyear%4==0)||(eyear%100==0)||(eyear%400==0))&&(eday>29)&&(emon==2))
			      {
				eday-=29;
			       emon++;
			    }
			    else if(((eyear%4!=0)||(eyear%100!=0)||(eyear%400!=0))&&(eday>28)&&(emon==2))
			    {
			      eday-=28;
			      emon++;
			     }
			     
		 std::cout<<"\t\tYour extended due date is:"<<eday<<"/"<<emon<<"/"<<eyear<<endl;
}
 void finecalc();
 }; issue is;
 void issue::finecalc()
{
  int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};
				 loop=365;
				 sum=0;
				  d1=rday;
				 m1=rmon;
				yr1=ryear;
				std::cout<<endl;
			       std::cout<<"\t\tYour actual return Date Is: "<<d1<<"/"<<m1<<"/"<<yr1<<endl ;
			      std::cout<<endl;
			      std::cout<<"\t\tEnter the date of return below.." <<endl;
			      std::cout<<endl;
			     std::cout<<"\t\tEnter day:";
			     std::cin>>d2;
			     std::cout<<endl;
			      std::cout<<"\t\tEnter month:";
			     std::cin>>m2;
			     std::cout<<endl;
			      std::cout<<"\t\tEnter year:";
			std::cin>>yr2;
			std::cout<<endl;
			days=d2-d1;

			yrs=yr2-yr1;
		   if(m2>=m1)
		   {
		      mons=m1-m2;
		      mons2=abs(mons);
		  }
		  else
		  {
		    mons=m2-m1;
		    mons2=abs(mons);
		  }
		  sum=yrs*loop+mons+days+mons2;
		  if(m2>m1)
		  {
		     j=m1;
		  }
		  else
		  {
		     j=m2;
		  }
		  if(mons2!=0)
		  {


		     for(i=0;i<mons2;i++)
		     {
			sum=sum+mon[j];
			j++;
		      }
		  }
		  
		  std::cout<<"\t\tYour date of return:"<<d2<<"/"<<m2<<"/"<<yr2 ;
		  
		  fine=(sum+mons)*1;

		  if((yr1%4==0)||(yr1%400==0)&&(m1==2))
		  {
		     fine=fine+1;
		  }
		  if((m1==2)&&(yr1%4!=0)||(yr1%400!=0))

		  {
		    fine=fine-1;
		}

		  std::cout<<"\t\t\tFine amount:Rs."<<fine ;
		  std::cout<<"\t\t\t*******" ;
}

int main()
{
int ch,i;
char ch2,ch3,ch4;
int sbookcode,sstudid;
int flag,flag1,pos,spos,ipos;
int sflag,stpos;
int ibookcode,istudid;
int rbookcode,rstudid;
int rflag1,rflag2;
int rpos1,rpos2,l;
char sbookname[100];

do
{
system("CLS");
std::cout<<"\t\t\t***%%%%%%%%%%***"<<endl ;
std::cout<<"\t\t\tLIBRARY MANAGEMENT SYSTEM"<<endl;
std::cout<<"\t\t\t***%%%%%%%%%%***"<<endl;
std::cout<<endl;

std::cout<<"\t\t\t\tMAINMENU"<<endl ;
std::cout<<"\t\t\t\t^^^^^^^^"<<endl ;

std::cout<<"\t\t  ##############################################"<<endl ;


std::cout<<"\t\t$ \t1. ADD  NEW BOOK.               \n"<<endl;
std::cout<<"\t\t$ \t2. VIEW ALL BOOK DETAILS.       \n"<<endl;
std::cout<<"\t\t$ \t3. SEARCH A BOOK.               \n"<<endl;
std::cout<<"\t\t$ \t4. ADD NEW STUDENT.             \n"<<endl;
std::cout<<"\t\t$ \t5. DISPLAY ALL STUDENT DETAILS. \n"<<endl;
std::cout<<"\t\t$ \t6. VIEW A STUDENT.              \n"<<endl;
std::cout<<"\t\t$ \t7. ISSUE  BOOK.                 \n"<<endl;
std::cout<<"\t\t$ \t8. RETURN BOOK.                 \n"<<endl;
std::cout<<"\t\t$ \t0. EXIT.                        \n"<<endl;

std::cout<<"\t\t  ##############################################"<<endl;

std::cout<<"\t\t\t\tHit your choice:";
std::cin>>ch;
switch(ch)
{


	case 1:
	system("CLS");	
	std::cout<<"\t\tYOU HAVE CHOSEN TO ADD BOOK DETAILS"<<endl;
	std::cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    std::cout<<endl;
    std::cout<<endl;
	std::cout<<"\t\tEnter number of books to be added:"<<endl;
	std::cin>>n;
	for(i=1;i<=n;i++)
	{
	   std::cout<<"Enter book code:"<<100+i;
	    b[i].addbook();

	 }
    std::cout<<endl;
    std::cout<<endl;
	 
	std::cout<<"\t\t<<-----Back To Main Menu-----" <<endl;
	std::cout<<endl;
	std::cout<<endl;
	getch();
	main();
	break;

	 case 2:
	 system("CLS");	
	 std::cout<<"\t\t\tLIST OF ALL ADDED BOOKS" <<endl;
	 std::cout<<"\t\t\t^^^^^^^^^^^^^^^^^^^^^^^" <<endl;
     std::cout<<endl;
	 std::cout<<"**************************"<<endl;
	 std::cout<<"BOOKCODE\tBOOKNAME\tAUTHORNAME\tPUB.COMPANY\tPRICE\tSTATUS"<<endl;
	 std::cout<<"**************************"<<endl;
	 for(i=1;i<=n;i++)
	 {
	   b[i].dispbook();
	   b[i].liststat();
	   
	 }
	 std::cout<<endl;
	 std::cout<<endl;
	 /*
	 for(i=1;i<=n;i++)
	 {
	    b[i].liststat();
	 }
	 **/
	 std::cout<<endl;
	 std::cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
	 std::cout<<endl;
	 std::cout<<endl;
	 getch();
	main();
	break;

	case 3:
		   system("CLS");
	       std::cout<<"\t\t\tSEARCH  A BOOK"<<endl;
	       std::cout<<"\t\t\t^^^^^^^^^^^^^^"<<endl;
	       std::cout<<endl;
	       std::cout<<"\t\tEnter book Name to search:";
	       std::cin>>sbookname;
	       for(i=1;i<=n;i++)
	       {
		   //if(sbookname==b[i].bookname)
		   if(strcmp(sbookname,b[i].bookname)==0)
		   {
		       flag=1;
		       pos=i;
		    }
		}
		   if(flag==1)
		   {
		     
		       std::cout<<"\t\tBook is available!!"<<endl;
		       std::cout<<endl;
		       std::cout<<"\t\tTHE BOOK DETAILS ARE..."<<endl;
		       std::cout<<endl;
		       std::cout<<"\t\tBook code          :"<<b[pos].bookcode<<endl;
		       std::cout<<"\t\tBook name          :"<<b[pos].bookname<<endl;
		       std::cout<<"\t\tAuthor name        :"<<b[pos].authorname<<endl;
		       std::cout<<"\t\tPublishing company :"<<b[pos].bookpub<<endl;
		       std::cout<<"\t\tBook price         :"<<b[pos].bookprice<<endl;

		   }
	       else
	       {
		    std::cout<<endl;
		    std::cout<<"\t\tSorry!..No Book Exists With Code:"<<sbookcode<<endl;
		}
		
		std::cout<<"\t\t"<<"<<-----Back To Main Menu-----"<<endl;
		std::cout<<endl;
		std::cout<<endl;
		getch();
		main();
	       break;

	case 4:
		   system("CLS");
	       std::cout<<"\t\tYOU HAVE CHOSEN TO ADD STUDENT DETAILS"<<endl;
	       std::cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

	       
	       std::cout<<endl;
	       std::cout<<"\t\tEnter number of students to be added:";
	       std::cin>>n1;
	       for(i=1;i<=n1;i++)
		{
		   s[i].addstud();

		}
	 std::cout<<endl;
	 std::cout<<"\t\tNumber of newly added students:"<<n1;
	
	std::cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
	std::cout<<endl;
	std::cout<<endl;
	getch();
	main();
	break;

	case 5:
	 system("CLS");	
     std::cout<<"\t\tLIST OF ALL ADDED STUDENTS"<<endl;
     std::cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	 std::cout<<endl;
	 std::cout<<"\t****************"<<endl;
	 std::cout<<"\tSTUDENT ID\tSTUDENT NAME\tDEPT NAME"<<endl;
	 std::cout<<"\t****************"<<endl;

	 for(i=1;i<=n1;i++)
	 {
	   s[i].dispstud();

	 }
     std::cout<<endl;	

	 std::cout<<"\t<<-----Back To Main Menu-----"<<endl;
	 std::cout<<endl;
	 std::cout<<endl;
	 getch();
	main();
	break;

	case 6:
		   system("CLS");
	       std::cout<<"\t\t\tVIEW A STUDENT"<<endl;
	       std::cout<<"\t\t\t^^^^^^^^^^^^^^"<<endl;
	       std::cout<<endl;
	       std::cout<<"\t\tEnter student id to view:";
	       std::cin>>sstudid;
	       for(i=1;i<=n1;i++)
	       {
		   if(sstudid==s[i].studid)
		   {
		       sflag=1;
		       stpos=i;
		    }
		}
		   if(sflag==1)
		   {
		       
		       std::cout<<"\t\tStudent found!!";
		       std::cout<<endl;
		       std::cout<<"\t\tTHE STUDENT DETAILS ARE..."<<endl;
		       std::cout<<endl;
		       std::cout<<"\t\tStudent name             :"<<s[stpos].studname<<endl;
		       std::cout<<"\t\tDepartment name          :"<<s[stpos].deptname<<endl;
		       
		   }
	       else
	       {
		    std::cout<<endl;
		    std::cout<<"\t\tSorry!..No Student found with this id:"<<sstudid<<endl;
		   }
		std::cout<<endl;
		std::cout<<endl;
		std::cout<<"\t\t"<<"<<-----Back To Main Menu-----"<<endl;
		std::cout<<endl;
		std::cout<<endl;
		getch();
		main();
	       break;


	case 7:
		system("CLS");
	       std::cout<<"\t\t YOU HAVE CHOSEN TO ISSUE A BOOK"<<endl;
	       std::cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	       std::cout<<endl;
		   std::cout<<"\t\tEnter student id:";
		    std::cin>>istudid;
		    for(i=1;i<=n1;i++)
		  {
		     if(istudid==s[i].studid)
		     {
		       flag=1;
		       spos=i;

		    }
		}

		   if(flag==1)
		   {
		     std::cout<<"\t\tEnter book code to issue book:";
		     std::cin>>ibookcode;
		     for(i=1;i<=n;i++)
		     {
		       if(ibookcode==b[i].bookcode)
		       {
			  flag1=1;
			  ipos=i;
		       }
		     }
		   }

		    std::cout<<endl;

		   if(flag==1)
		     {
		      if(flag1==1)
		      {

		       if(s[spos].bookcount!=0)
		       {
		       if(b[ipos].status==1)
			{

			  s[spos].bookcount--;

			  b[ipos].status=0;
			  std::cout<<"\t\tDate of issue"<<endl;
			  std::cout<<"\t\t~~~~~"<<endl;
			    is.isdatecalc();
			    is.isdate();
			    is.retdate();
			std::cout<<"\t\tThis book is now issued...."<<endl;
		    std::cout<<endl;
		    std::cout<<"\t\tBooks allowed now:"<<s[spos].bookcount<<endl;
		    std::cout<<endl;
			    std::cout<<"\t Student Id\t Student Name\t BookCode"<<endl;
			    std::cout<<"\t ----------\t ------------\t --------"<<endl;
		   std::cout<<"\t "<<s[spos].studid<<"\t\t "<<s[spos].studname<<"\t\t "<<b[ipos].bookcode<<endl;


		 }

			  else
			  {
			  std::cout<<"\t\tSorry!Book already issued.."<<endl;
			  }

		    }
		     else
		      {
		      std::cout<<"\t\tSorry!.You cannot take more than two books.."<<endl;
		     }

	       }
		 else
		 {
		 std::cout<<"\t\tSorry!..No Book Exists With Code:"<<ibookcode<<endl;
		}
	      }
	      else

	      {
		std::cout<<"\t\tSorry!..No Student Exists with Id:"<<istudid<<endl;
	      }

		std::cout<<endl;
		std::cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
		std::cout<<endl;
		std::cout<<endl;
		getch();
		main();
	       break;

	       case 8:
	       	system("CLS");
		      std::cout<<"\t\tYOU HAVE CHOSEN TO RETURN A BOOK"<<endl;
		      std::cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
		      std::cout<<endl;
		      std::cout<<"\t\tEnter student id:";
			     std::cin>>rstudid;
			     std::cout<<endl;
			     for(i=1;i<=n1;i++)
			   {
			   if(rstudid==s[i].studid)
			   {
			     rflag1=1;
			     rpos1=i;
			   }
			 }




		   if(rflag1==1)
		   {

		     std::cout<<"\t\tEnter book code to return book:";
		     std::cin>>rbookcode;
		     std::cout<<endl;
		     for(i=1;i<=n;i++)
		     {
		       if(rbookcode==b[i].bookcode)
		       {
			  rflag2=1;
			  rpos2=i;
			}
		     }
		   }
		   if(rflag1==1)
		   {
		     if(rflag2==1)
		     {
			std::cout<<"\tIs the bookcode:"<<b[rpos2].bookcode<<" issued to student id:"<<s[rpos1].studid<<" ?y/n:";
			std::cin>>ch4;
			if(ch4=='y')
			{
			if(b[rpos2].status==0)
			 {
			    std::cout<<endl;
			    std::cout<<"\t\tYou can Return the Book...";
			    std::cout<<endl;
			    is.retdate();
			    std::cout<<"\t\tAre you sure you want to return this book ?y/n:";
			    std::cin>>ch2;
			      std::cout<<endl;
			     if(ch2=='y')
			      {
				 std::cout<<"\t\t Is the book returned before due date?y/n:";
				 std::cin>>ch3;
				 std::cout<<endl;
				  if(ch3=='y')
				  {
				     is.retdate();
				    std::cout<<endl;
				    std::cout<<"\t\tBook returned before due date";
				    std::cout<<endl;
				    std::cout<<"\t\t\tFine - NIL";
				    std::cout<<endl;
				   std::cout<<"\t\t\t THANK YOU";
				   b[rpos2].status=1;
				   s[rpos1].bookcount++;
				   std::cout<<endl;
				   std::cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
				   getch();
				   main();
				 }
				 else
				 {
				   
				  std::cout<<endl;
				  std::cout<<"\t\tYOU HAVE TO PAY FINE !!!";

		  is.finecalc();
		
		  b[rpos2].status=1;
		  s[rpos1].bookcount++;
		  std::cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
		  getch();
		  main();
		}
	      }

		  else
		 {
		is.retdate();
		 
		 std::cout<<"\t\tYou can extend the book for another twenty days.."<<endl;
		 is.edatecalc();

		}

		  }
		  else
		  {
		   
		   std::cout<<"\t\tThis Book is not yet issued from library.. "<<endl;
		  }
		}
		else
		{
		 
		  std::cout<<"\t\t This book is not issued to you..Sorry!!!"<<endl;
		}



			}
			  else
			  {
			  
			  std::cout<<"\t\tSorry!..No Book Exists With Code:"<<rbookcode<<endl;
			  }
          
		    }

		     else
		      {
		   
		      std::cout<<"\t\tSorry!..No Student Exists With Id:"<<rstudid<<endl ;
		     }

		
        std::cout<<endl;  


		std::cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
		std::cout<<endl;
		getch();
		main();
		break;








	case 0:exit(0);
	default: return 0;
		 std::cout<<"\t\tYou have entered a wrong choice.."<<endl;
		 std::cout<<"\t\tPlease Re-enter your choice...."<<endl;
		 
		 std::cout<<"\t\t\t<<---Go Back---"<<endl;
		 getch();
		 main();
		 break;


}
}while(ch==0);
getch();
}