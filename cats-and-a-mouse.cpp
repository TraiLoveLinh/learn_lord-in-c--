  #include <iostream>
  using namespace std;
  int main()
  {
    int q,x,y,z;
    cin>>q;
    for(int i=0;i<q;i++)
    {
      cin>>x>>y>>z;
      if(abs(x-z)>abs(y-z))
        cout<<"Cat A"<<endl;
      else if(abs(y-z)<abs(x-z))
        cout<<"Cat B"<<endl;
      else
        cout<<"Mouse C"<<endl;
    }
    return 0;
  }
