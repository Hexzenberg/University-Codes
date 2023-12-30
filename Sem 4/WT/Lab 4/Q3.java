//3. write a java program to compare the execution time for two differnet type of sorting algorithm.
import java.util.Random;
class Q3{
    public static void main(String[] args){
        int size=10;
        int[] a=new int[size],b=new int[size];
        Random r=new Random();
        for(int i=0;i<size;i++){a[i]=r.nextInt();b[i]=a[i];}
        long s=System.nanoTime();bs(a);
        long e=System.nanoTime(),bst=e-s;
        s=System.nanoTime();is(b);e=System.nanoTime();
        long ist=e-s;
        System.out.println("Bubble sort:" + bst + " ns");
        System.out.println("Insertion sort:" + ist + " ns");
        System.out.println((bst<ist)?"Bubble sort was faster.":"Insertion sort was faster.");
    }
    static void bs(int[] a){
        for(int i=0;i<a.length;i++)for(int j=0;j<a.length-i-1;j++)if(a[j]>a[j+1]){int c=a[j];a[j]=a[j+1];a[j+1]=c;}
    }
    static void is(int[] a){
        for(int i=1;i<a.length;i++){
            int k=a[i],j=i-1;
            while(j>=0&&a[j]>k)a[j+1]=a[j--];
            a[j+1]=k;
        }
    }
}
