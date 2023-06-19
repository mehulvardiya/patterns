#include<iostream>
#include<cmath>
using namespace std;

int main()
{  int n;
  cin>>n;
  /*1
    1 2
    1 2 3
  for(int i=1;i<=n;i++){
	  for(int j=1;j<=i;j++){
		  cout<<j;
	  }
	  cout<<endl;
  }*/

   /*1
     2 3
     4 5 6
     int z=1;
     for(int i=1;i<=n;i++){
	  for(int j=1;j<=i;j++){
		  cout<<z;
		  z=z+1;
	  }
	  cout<<endl;
     }*/

     /*   1
        2 3
      4 5 6
      int k=1;
       for(int i=1;i<=n;i++){
        for(int z=1;z<=n-i;z++){
        cout<<" ";
        }
        for(int j=1;j<=i;j++){
		  cout<<k;
		  k++;
        }
	  cout<<endl;
     }*/

     /*1
       2 3
       3 4 5
       4 5 6 7
       int k=0;
       for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
		  cout<<j+k;
        }
        k++;
	  cout<<endl;
     }*/

     /*   *
        * * *
      * * * * *
       for(int i=1;i<=n;i++){
        for(int z=1;z<=n-i;z++){
        cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
		  cout<<"*";
        }
	  cout<<endl;
     }*/

     /*1 1 1 1
       2 2 2 2
       3 3 3 3
       for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
		  cout<<i;
        }
	  cout<<endl;
     }*/

     /* 1 2 3 4
        1 2 3 4
        1 2 3 4
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
		  cout<<j;
        }
	  cout<<endl;
     }*/

     /* 4 3 2 1
        4 3 2 1
        4 3 2 1
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
		  cout<<n-j+1;
        }
	  cout<<endl;
     }*/

     /*1
       2 1
       3 2 1
       for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
		  cout<<j;
        }
	  cout<<endl;
     }*/

     /*A B C D
       A B C D
       A B C D
       for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch='A'+j-1;
		  cout<<ch;
        }
	  cout<<endl;
     }*/

     /*A B C D
       B C D E
       C D E F
       for(int i=1;i<=n;i++){
            char ch='A'+i-1;
        for(int j=1;j<=n;j++){
            char c=ch+j-1;
		  cout<<c;
        }
	  cout<<endl;
     }*/

     /*A
       B B
       C C C
       for(int i=1;i<=n;i++){
            char ch='A'+i-1;
        for(int j=1;j<=i;j++){
		  cout<<ch;
        }
	  cout<<endl;
     }*/

     /*A
       B C
       C D E
       char ch='A';
       for(int i=1;i<=n;i++){
            char c=ch+i-1;
        for(int j=1;j<=i;j++){
		  cout<<c;
		  c++;

        }
	  cout<<endl;
     }*/

     /*D
       C D
       B C D
       int num=n;
       for(int i=1;i<=n;i++){
            char ch='A'+num-1;
        for(int j=1;j<=i;j++){
		  cout<<ch;
		  ch++;
        }
	  cout<<endl;
	  num--;
     }*/

     /*   *
        * *
      * * *
       for(int i=1;i<=n;i++){
        for(int z=1;z<=n-i;z++){
        cout<<" ";
        }
        for(int j=1;j<=i;j++){
		  cout<<"*";
        }
	  cout<<endl;
     }*/

     /*1
      12
     123
     for(int i=1;i<=n;i++){
        for(int z=1;z<=n-i;z++){
        cout<<" ";
        }
        for(int j=1;j<=i;j++){
		  cout<<j;
        }

	  cout<<endl;
     }*/

     /* * * *
        * *
        *
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
		  cout<<"*";
        }
	  cout<<endl;
     }*/

     /* * * *
          * *
            *
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
		  cout<<"*";
        }
	  cout<<endl;
     }*/

     /* *****
         ****
          ***
           **
            *
     for(int i=1;i<=n;i++){
        for(int z=1;z<=i;z++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
		  cout<<"*";
        }
	  cout<<endl;
     }*/

     /*    1
         1 2 1
       1 2 3 2 1
     1 2 3 4 3 2 1
     for(int i=1;i<=n;i++){
        for(int z=1;z<=n-i;z++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
		  cout<<j;
        }
         for(int j=i-1;j>=1;j--){
		  cout<<j;
        }
	  cout<<endl;
     }*/

     /* 1
       232
      34543
     4567654
    int k=0;
     for(int i=1;i<=n;i++){
        for(int z=1;z<=n-i;z++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
		  cout<<j+k;
        }
         k++;
         for(int j=i-1;j>=1;j--){
		  cout<<i+j-1;
        }
	  cout<<endl;
     }*/

     /* n=3
          *
         ***
        *****
         ***
          *
       for(int i=1;i<=n;i++){
        for(int z=1;z<=n-i;z++){
        cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
		  cout<<"*";
        }
	  cout<<endl;
     }
     for(int i=1;i<=n-1;i++){
        for(int z=1;z<=i;z++){
        cout<<" ";
        }
        for(int j=1;j<=2*(n-i)-1;j++){
		  cout<<"*";
        }
	  cout<<endl;
     }     */

     /*n=3
          *
         ***
          *

     int num=(n/2)+1;
    int count = num - 1;
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= count; j++) {
          cout<<" ";
        }
        count--;
        for(int k = 1; k <= (2 * i) - 1; k++) {
          cout<<"*";
        }
        cout<<endl;
    }

    count = 1;
    for(int i = 1; i <= (num - 1); i++) {
      for(int j = 1; j <= count; j++) {
        cout<<" ";
      }
      count++;
      for(int k = 1; k <= (2 * (num - i)) - 1; k++) {
        cout<<"*";
      }

      cout<<endl;
    }*/
}
