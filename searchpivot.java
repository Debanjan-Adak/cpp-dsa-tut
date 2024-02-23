
class Solution {
    public static int search(int arr[], int n, int k) {
        int start=0,end=n-1,mid;
        while(start<end)
        {
            mid=(start+end)/2;
            if(arr[start]<arr[mid])
            start=mid+1;
            else
            end=mid;
        }
        System.out.println("pivot is :"+start);
        if(k>arr[0]&& k<arr[start])
        {
            end=start;
            start=0;
            
            while(start<=end)
        {
            mid=(start+end)/2;
            if(arr[mid]>k)
            end=mid-1;
            else if(arr[mid]<k)
            start=mid+1;
            else
            return mid;
        }
        }
        else
        {
            end=n;
           
            
            while(start<=end)
        {
            mid=(start+end)/2;
            if(arr[mid]>k)
            end=mid-1;
            else if(arr[mid]<k)
            start=mid+1;
            else
            return mid;
        }
        }
        return -1;

        // Write your code here.
    }
    public static void main(String args[])
    {
        int arr[]={6,7,8,1,2,3,4,5};
        System.out.println(search(arr,arr.length,5));
    }
}