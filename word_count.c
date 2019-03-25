//word count using the getchar()
#include<stdio.h>
int main()
{
    do{
    int ch,x=1,word_count=1,line_count=1,character_count=0;
    char choice,lc;
    //promt the user enter the string
    printf("enter the strings:\n\n");
    //we checking and calculating upto end of file
    while( ( ch = getchar() ) != EOF )
    {
	//to assigning first element as a lastelement
	if(x)
	{
	    lc=(char)ch;
	    x--;
	}
	
	character_count++;//incrementing the count value when character read from
	
	
	//if((ch != ' ' || ch != '	' || ch != '\n' ) && (lc == ' ' || lc == '	' || lc == '\n' ))
	//to checking the last bit is space or not
	if(lc == ' ' || lc == '	' || lc == '\n' )
//	if(lc != ' ' || lc != '	' || lc != '\n' )
	{
	    //to check present bit is space or not if space element or tab or nextline it excute
	    if((ch != ' ') && (ch != '	') && ( ch != '\n' ))
	//    if(!(ch == ' ' || ch == '	' || ch == '\n' ))
    		//if(ch == ' ' || ch == '	' || ch == '\n' ) 
	    {
		word_count++;
	    }
	    //if after space element character count increrases
	   /* else
	    {
		word_count++;//incrementing the word count value
	    }*/
	}
	//incrementing the line count based on checking '\n'
	    lc=(char)ch;
	if( ch == '\n' )
	{
	    line_count++;
	}
    }
     printf("\ncharacter count=%d\tword count=%d\tline count=%d\n",character_count,word_count,line_count);
     //promt the user do u want to continue
     printf("do u want to continue press yY/nN:");
     //read and store in variable
     scanf("\n%c",&choice);
     if(choice == 'y' || choice == 'Y')
     {
	 continue;
     }
     return;
   }while(1);
    return 0;
}
