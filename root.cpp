#include<iostream>
using namespace std;

int main()
{
      int a,b,res=1;

      int i,n=6,p;

          for(i=1;i<10;i++)

               { a=i; b=10;

                    while(b!=0)

               {
                    res*=a;
                    p=res;
       if(res>11)

              { while(p>11)
    {
        p-=10;

        p--;

    }

             res=p;
             }


            b--;
           cout<<"  "<<res;

}
           cout<<endl;

}

}
