 
 ​#​include​<​iostream.h​> 
 ​#​include​<​conio.h​> 
 ​class​ ​product 
 ​{ 
 ​ ​private: 
 ​       ​int​ pno; 
 ​       ​char​ pname[​20​]; 
 ​       ​float​ prize; 
 ​       ​char​ comp; 
 ​       ​int​ qua; 
  
 ​ ​public: 
 ​        ​void​ ​get​(); 
 ​        ​void​ ​put​(); 
 ​}; 
 ​void​ ​product::get​() 
 ​{ 
 ​        cout<<​"​enter no =​"​; 
 ​        cin>>pno; 
 ​        cout<<​"​enter name=​"​; 
 ​        cin>>pname; 
 ​        cout<<​"​enter prize =​"​; 
 ​        cin>>prize; 
 ​        cout<<​"​enter company=​"​; 
 ​        cin>>comp; 
 ​        cout<<​"​enter quentity =​"​; 
 ​        cin>>qua; 
 ​        } 
 ​void​ ​product::put​() 
 ​{ 
 ​        cout<<pno<<​"​\t\t​"​<<pname<<​"​\t\t​"​<<prize<<​"​\t\t​"​<<comp<<​"​\t\t​"​<<qua<<endl; 
 ​} 
 ​main​() 
 ​{ 
 ​        ​int​ i; 
 ​        ​clrscr​(); 
 ​        product p[​3​]; 
 ​        ​for​(i=​0​;i<​3​;i++) 
 ​        { 
 ​        p[i].​get​(); 
 ​        } 
 ​        cout<<​"​######################################################​"​<<endl; 
 ​        cout<<​"​pno​\t\t​name​\t\t​prize​\t\t​company​\t\t​quantity​"​<<endl; 
 ​        cout<<​"​######################################################​"​<<endl; 
 ​        ​for​(i=​0​;i<​3​;i++) 
 ​        { 
 ​        p[i].​put​(); 
 ​        } 
 ​        ​getch​(); 
  
 ​}
