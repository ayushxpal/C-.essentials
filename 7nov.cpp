// // // // // // // // // #include <iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // class BC
// // // // // // // // // {
// // // // // // // // //     public:
// // // // // // // // //         void printBC()
// // // // // // // // //         {
// // // // // // // // //             cout<<"\nPrinting message in base class"<<endl;
// // // // // // // // //         }
// // // // // // // // //         void show()
// // // // // // // // //         {
// // // // // // // // //             cout<<"\nshow() of base class"<<endl;
// // // // // // // // //         }
// // // // // // // // // };

// // // // // // // // // class DC: public BC{
// // // // // // // // //     public:
// // // // // // // // //     void printDC()
// // // // // // // // //     {
// // // // // // // // //         cout<<"\nPrinting message in derived class"<<endl;
// // // // // // // // //     }
// // // // // // // // //     void show()
// // // // // // // // //     {
// // // // // // // // //         cout<<"\nshow() of derived class"<<endl;
// // // // // // // // //     }
// // // // // // // // // };

// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     BC *bptr;
// // // // // // // // //     BC base;
// // // // // // // // //     bptr=&base;
// // // // // // // // //     cout<<"bptr points to base objects\n";
// // // // // // // // //     bptr->show();
// // // // // // // // //     DC derived;
// // // // // // // // //     bptr=&derived;
// // // // // // // // //     cout<<"bptr now points to derived objects\n";
// // // // // // // // //     bptr->show();
// // // // // // // // //     DC *dptr;
// // // // // // // // //     dptr=&derived;
// // // // // // // // //     cout<<"dptr is derived type pointer\n";
// // // // // // // // //     dptr->show();
// // // // // // // // //     dptr->printDC();
// // // // // // // // //     cout<<"using ((DC*)bptr)\n";
// // // // // // // // //     ((DC*)bptr)->show();
// // // // // // // // //     ((DC*)bptr)->printDC();
// // // // // // // // //     return 0;
// // // // // // // // // }


// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;
// // // // // // // // class BC
// // // // // // // // {
// // // // // // // //     public:
// // // // // // // //         virtual voidshow()
// // // // // // // //         {
// // // // // // // //             cout<<"\nshow() of base class"<<endl;
// // // // // // // //         }
// // // // // // // // };
// // // // // // // // class DC:public BC
// // // // // // // // {
// // // // // // // //     public:
// // // // // // // //     void show()
// // // // // // // //     {
// // // // // // // //         public:
// // // // // // // //         void show()
// // // // // // // //         {
// // // // // // // //             cout<<"\nshow() of derived class"<<endl;
// // // // // // // //         }
// // // // // // // //     }
// // // // // // // // };

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     BC *bptr;
// // // // // // // //     BC base;
// // // // // // // //     bptr=&base;
// // // // // // // //     cout<<"\n-----Runtime polymorphism-----\n";
// // // // // // // //     cout<<"bptr points to base objects\n";
// // // // // // // //     bptr->show();
// // // // // // // //     DC derived;
// // // // // // // //     bptr=&derived;
// // // // // // // //     cout<<"bptr now points to derived objects\n";
// // // // // // // //     bptr->show();
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // #include <iostream>
// // // // // // // using namespace std;
// // // // // // // class sample
// // // // // // // {
// // // // // // //     public:
// // // // // // //     virtual void exapmle()=0;
// // // // // // //     void show()
// // // // // // //     {
// // // // // // //         cout<<"\nshow() of base class"<<endl;
// // // // // // //     }
// // // // // // // };

// // // // // // // class derived:public sample
// // // // // // // {
// // // // // // //     public:
// // // // // // //     void example()
// // // // // // //     {
// // // // // // //         cout<<"\nshow() of derived class"<<endl;
// // // // // // //     }
// // // // // // // };
// // // // // // // int main()
// // // // // // // {
// // // // // // //     sample *ptr;
// // // // // // //     derived1 obj1;
// // // // // // //     ptr=&obj1;
// // // // // // //     // ptr->example();
// // // // // // //     sptr->show();
// // // // // // //     return 0;
// // // // // // // }

// // // // // // #include <iostream>
// // // // // // using namespace std;
// // // // // // #include <stdlib.h>
// // // // // // int main()
// // // // // // {
// // // // // //     int *p=NULL;
// // // // // //     p=new int;
// // // // // //     {
// // // // // //         cout<<"\n Memory allocation failure";
// // // // // //         exit(1);
// // // // // //     }
// // // // // //     if(p==NULL)
// // // // // //     {
// // // // // //         cout<<"\n Memory allocation failure";
// // // // // //         exit(1);
// // // // // //     }
// // // // // //     else
// // // // // //     {
// // // // // //         cout<<"\n Memory allocation success";
// // // // // //     }
// // // // // // }

// // // // // #include <iostream>
// // // // // using namespace std;
// // // // // int main()
// // // // // {
// // // // //     float *p=NULL;
// // // // //     float *r=NULL;

// // // // // }

// // // // #include <iostream>
// // // // #include <queue>
// // // // #include <stack>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     class Graph
// // // //     {
// // // //         int numNodes;
// // // //         int** adjMatrix;

// // // //         public:
// // // //         Graph(int numNodes)
// // // //         {
// // // //             this->numNodes=numNodes;
// // // //             adjMatrix=new int*[numNodes];
// // // //             for(int i=0;i<numNodes;i++)
// // // //             {
// // // //                 adjMatrix[i]=new int[numNodes];
// // // //                 for(int j=0;j<numNodes;j++)
// // // //                 {
// // // //                     adjMatrix[i][j]=0;
// // // //                 }
// // // //             }
// // // //         }
// // // //     }
// // // // }

// // // #include <iostream>
// // // #include <stdlib.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     int *arr;
// // //     int size;
// // //     cout<<"/n Enter the size of integer array: ";
// // //     cin>>size;
// // //     cout<<"\n creating an array of size: "<<size;
// // //     arr=new int[size];
// // //     if(arr=NULL)
// // //     {
// // //         cout<<"\n Problem in memory allocation";
// // //         exit(1);
// // //     }

// // //     else
// // //     {
// // //         cout<<"\n Dynamic allocation of memory for array arr is successfull";
// // //         cout<<"\n Enter the elements of array: ";
// // //         for(int i=0;i<size;i++)
// // //         {
// // //             cin>>*(arr+i);
// // //         }

// // //         cout<<"\n Elements of array are: ";
// // //         for(int i=0;i<size;i++)
// // //         {
// // //             cout<<*(arr+i)<<" ";
// // //         }

// // //     }
// // //     delete[] arr;
// // //     cout<<"\n Memory deallocated successfully";
// // //     return 0;
// // // }


// // #include <iostream>
// // using namespace std;
// // #include <stdlib.h>
// // int main()
// // {
// //     double *arr, *sum, *avg;
// //     int size;
// //     sum= new double;
// //     avg= new double;
// //     cout<<"\n Enter the size of double array: ";
// //     cin>>size;
// //     cout<<"\n Creating an array of size: "<<size;
// //     arr=new double[size];
// //     if (arr==NULL || sum==NULL || avg=NULL )
// //     {
// //         cout<<"\n Problem in memory allocation";
// //         exit(1);
// //     }
// //     else
// //     {
// //         cout<<"\n Dynamic allocation of memory for array arr is successfull";
// //         cout<<"\n Enter the elements of array: ";
// //         for(int i=0;i<size;i++)
// //         {
// //             cin>>*(arr+i);
// //         }
// //         *sum=0;
// //         for(int i=0;i<size;i++)
// //         {
// //             *sum=*sum+*(arr+i);
// //         }
// //         *avg=*sum/size;
// //         cout<<"\n Sum of elements of array: "<<*sum;
// //         cout<<"\n Average of elements of array: "<<*avg;
// //         delete[] arr;
// //         delete sum;
// //         delete avg;
// //         return 0;
// //     }
// // }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int *pvalue=NULL;
//     pvalue=new int;
//     *pvalue=23;
//     cout<<"Address where ppointer is pointing before deletion: "<<pvalue<<endl;
//     delete pvalue;
//     cout<<"Address where ppointer is pointing after deletion: "<<pvalue<<endl;
//     pvalue=NULL;
//     cout<<"\n"<<pvalue;
//     return 0;
// }


#include <iostream>
using namespace std;
class Array
{
    int *arr;
    int size;
    public:
    void get_data(int n)
    {
        size=n;
        arr=new int[size];
        for (int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }

    int get_sum()
    {
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum=sum+arr[i];
        }
    }

    void display_data()
    {
        for (int i=0; i<size; i++)
        {
            cout<<"\t"<<arr[i];

        }

        cout<<"\n Sum of elements of array: "<<get_sum();
    }

    ~Array()
    {
        delete[] arr;
        cout<<"\n Memory deallocated successfully";
    }
};

int main()
{
    Array a;
    int n;
    cout<<"\n Enter the number of elements :";
    cin>>n;
    a.get_data(n);
    a.display_data();
    return 0;
}