 
 ​#​include​<​iostream.h​> 
 ​#​include​<​conio.h​> 
 ​void​ ​swap​(​int​&x,​int​&y); 
 ​void​ ​main​() 
 ​{ 
 ​int​ a,b; 
 ​clrscr​(); 
 ​cout<<​"​enter the two number​"​; 
 ​cin>>a>>b; 
 ​swap​(a,b); 
 ​getch​(); 
 ​} 
 ​void​ ​swap​(​int​&x,​int​&y) 
 ​{ 
 ​int​ a; 
 ​cout<<​"​\n​value of x&y before swap is​\t​=​"​<<x<<​"​\t​y=​"​<<y; 
 ​a=x; 
 ​x=y; 
 ​y=a; 
 ​cout<<​"​\n​value of x&y after swap is​\t​=​"​<<x<<​"​\t​=​"​<<y; 
 ​}
