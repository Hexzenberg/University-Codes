//wap to search and find element from an array using binary search also find same element using modified 
//binary search whose mid formula is start i + 2 using single level inheritance using interface class. 
interface Search{
    int search(int[] a,int x);
}
class Bs implements Search{
    public int search(int[] a,int x){
        int s=0,e=a.length-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(a[mid]==x)return mid;
            if(a[mid]<x)s=mid+1;
            else e=mid-1;
        }return -1;
    }
}
class Mbs implements Search{
    public int search(int[] a,int x){
        int s=0,e=a.length-1;
        while(s<=e){
            int mid=s+2;
            if(a[mid-2]==x)return mid-2;
            if(a[mid-2]<x)s=mid-1;
            else e=mid-3;
        }return -1;
    }
}
public class Q2{
    public static void main(String[] args){
        int[] a={1,3,5,7,9};
        Bs bs=new Bs();int i=bs.search(a,9);
        System.out.println((i==-1)?"Element not found using Binary Search":"Element found at " + i + " using Binary Search");
        Mbs mbs=new Mbs();i=mbs.search(a,9);
        System.out.println((i==-1)?"Element not found using Modified Binary Search":"Element found at " + i + " using Modified Binary Search");
    }
}
