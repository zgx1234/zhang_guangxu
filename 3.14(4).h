{
     M=12*yuexin;
     return  M;
 }
 int NIANXIN()
 {
     X=1.1*M;
     return X;
 }
 void displaymessage1()
 {
     cout<<getxing()<<getming()<<"的年薪为 "<<nianxin();
 }
 void displaymessage2()
 {
     cout<<"提升10%的年薪为"<<NIANXIN();
 }
private:

        string ming;
        string xing;
        int yuexin;
        int M;
        int X;

   };
