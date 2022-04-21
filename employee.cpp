 
 ​#​include​<​iostream.h​> 
 ​#​include​<​conio.h​> 
 ​class​ ​emp 
 ​{ 
 ​        ​private: 
 ​                ​char​ name[​20​],dept [​40​],add [​40​],gen[​7​]; 
 ​                ​int​ sal,age; 
 ​        ​public: 
 ​                ​void​ ​get​(); 
 ​                ​void​ ​put​(); 
 ​}; 
 ​void​ ​emp::get​() 
 ​{ 
 ​cout<<​"​name of employee​\n​"​; 
 ​cin>>name; 
 ​cout<<​"​name of department​\n​"​; 
 ​cin>>dept; 
 ​cout<<​"​enter the address of employee​\n​"​; 
 ​cin>>add; 
 ​cout<<​"​salary of employee​\n​"​; 
 ​cin>>sal; 
 ​cout<<​"​age of employee​\n​"​; 
 ​cin>>age; 
 ​cout<<​"​enter gender of employee​\n​"​; 
 ​cin>>gen; 
 ​cout<<​"​\n\n​"​; 
 ​} 
 ​void​ ​emp::put​() 
 ​{ 
 ​cout<<​"​\n​name​\t​"​<<name<<​"​\n​department​\t​"​<<dept<<​"​\n​age​\t​"​<<​"​\n​address​\t​"​<<add<<​"​\n​salary​\t​"​<<sal<<​"​\n​gender​\t​"​<<gen; 
 ​} 
 ​void​ ​main​() 
 ​{ 
 ​clrscr​(); 
 ​int​ i,no; 
 ​//​cout<<"enter number of employee"; 
 ​//​cin>>no; 
 ​//​emp e[no]; 
 ​cout<<​"​enter detail of three employee​\n​"​; 
 ​emp e[​3​]; 
 ​for​(i=​0​;i<​3​;i++) 
 ​{ 
 ​e[i].​get​(); 
 ​clrscr​(); 
 ​} 
 ​cout<<​"​\n\t​detail of employee ​\n\n​"​; 
 ​for​(i=​0​;i<​3​;i++) 
 ​{ 
 ​e[i].​put​(); 
 ​cout<<​"​\n​"​; 
 ​} 
 ​getch​(); 
 ​}
