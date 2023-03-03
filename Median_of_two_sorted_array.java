import java.util.Arrays;

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {

         int newList[]=merge(nums1, nums2);

         int n = newList.length;
        return n%2==0?(double)(newList[n/2]+newList[n/2-1])/2:(double)(newList[n/2]);
        
        
    }

    private int[]merge(int[]nums1,int[]nums2){

        int n1=nums1.length;
        int n2=nums2.length;
        int pt1=0;
        int pt2=0;
        int i=0;
        int newList[]=new int[n1+n2];

        while(pt1<n1 && pt2<n2){

            if(nums1[pt1]<nums2[pt2]){
                newList[i++]=nums1[pt1];
                pt1++;
            }
            else{
                newList[i++]=nums2[pt2];
                pt2++; 
            }
        }

        while(pt1<n1){
            newList[i++]=nums1[pt1];
            pt1++;
        }
        while(pt2<n2){
            newList[i++]=nums2[pt2];
            pt2++;
        }

        // Arrays.stream(newList).forEach(System.out::println);

        return newList;
    }
}

public class Median_of_two_sorted_array{
    public static void main(String[] args) {
             int[]nums1={1,2};
             int[]nums2={3,4};
             Solution s=new Solution();
            System.out.println( s.findMedianSortedArrays(nums1, nums2));

         
        
    }
}