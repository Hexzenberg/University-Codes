//20/02/2023
//Write a java program to sort n numbers using merge sort algorithm also sort that no using modify 
//merge sort algorithm. In modify merge sort algorithm arrays are divided into three equal parts. 
//Also compare the time complexity using method overriding concept.
import java.io.*;
class A{
    void merge(int[] a,int min,int mid,int max){
        int i=min,j=mid+1,k=0;
        int[] b=new int[max-min+1];
        while(i<=mid&&j<=max)b[k++]=(a[i]<a[j])?a[i++]:a[j++];
        while(i<=mid)b[k++]=a[i++];while(j<=max)b[k++]=a[j++];
        for(i=0;i<k;i++)a[min+i]=b[i];
    }
    void me(int[] a,int min,int max){
        if(min<max){
            int mid=(max+min)/2;
            me(a,min,mid);me(a,mid+1,max);merge(a,min,mid,max);
        }
    }
}
class B{
    void me(int[] a,int min,int max){
        if(min<max){
            int mid1=min+(max-min)/3,mid2=min+2*(max-min)/3;
            me(a,min,mid1);me(a,mid1+1,mid2);me(a,mid2+1,max);
            merge(a,min,mid1,mid2,max);
        }
    }
    void merge(int[] a,int min,int mid1,int mid2,int max){
        int[] b=new int[max-min+1];int i=min,j=mid1+1,t=mid2+1,k=0;
        while(i<=mid1&&j<=mid2&&t<=max)b[k++]=(a[i]<a[j])?(a[i]<a[t])?a[i++]:a[t++]:(a[j]<a[t])?a[j++]:a[t++];
        while(i<=mid1&&j<=mid2)b[k++]=(a[i]<a[j])?a[i++]:a[j++];
        while(j<=mid2&&t<=max)b[k++]=(a[j]<a[t])?a[j++]:a[t++];
        while(i<=mid1&&t<=max)b[k++]=(a[i]<a[t])?a[i++]:a[t++];
        while(i<=mid1)b[k++]=a[i++];
        while(j<=mid2)b[k++]=a[j++];
        while(t<=max)b[k++]=a[t++];
        for(int p=min,q=0;p<=max;p++,q++)a[p]=b[q];
    }
}
class Q1{
    public static void main(String[] args)throws IOException{
        DataInputStream ds=new DataInputStream(System.in);    
        System.out.println("Enter the length:");
        int n;n=Integer.parseInt(ds.readLine());int[] a=new int[n],b=new int[n];
        System.out.println("Enter the elements:");
        for(int i=0;i<n;i++)a[i]=Integer.parseInt(ds.readLine());
        System.out.println("Enter the elements:");
        for(int i=0;i<n;i++)b[i]=Integer.parseInt(ds.readLine());
        A x=new A();B y=new B();
        long st=System.nanoTime();
        x.me(a,0,n-1); 
        long et=System.nanoTime(),t=et-st;
        for(int i=0;i<n;i++)System.out.print(a[i]+" ");
        System.out.println("\nTime taken by merge sort algorithm: " + t + " ns");
        st=System.nanoTime(); y.me(b,0,n-1);et=System.nanoTime();t=et-st;
        for(int i=0;i<n;i++)System.out.print(b[i]+" ");
        System.out.println("\nTime taken by modified merge sort algorithm: " + t + " ns");
    }
}

