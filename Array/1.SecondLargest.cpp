// link - https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


int print2largest(int arr[], int n) {
	   // Two traversals
	   
	   // int max2 = -1, max = arr[0], cmax = -1;
	   // //find largest element
	   // for(int i=1; i<n; i++){
	   //     if(arr[i]>max)
	   //         max = arr[i];
	   // }
	   // //find second largest element
	   // for(int i=0; i<n; i++){
	   //     if(arr[i] != max && arr[i]>cmax){
	   //         cmax = arr[i];
	   //     }
	   // }
	   // if(cmax != max)
	   // {
	   //     max2 = cmax;
	   // }
	   // return max2;
	   
	   // One traversal
	   int firstL = arr[0], secL = INT_MIN;
	   if(n < 2)
	      return -1;
	   for(int i=1; i<n ; i++){
	       // current element is greater than firstL then update
	       if(arr[i] > firstL){
	           secL = firstL;
	           firstL = arr[i];
	       }
	       // current element is in between firstL and secL then update
	       if(arr[i] < firstL && arr[i] > secL){
	           secL = arr[i];
	       }
	   }
	   return secL == INT_MIN ? -1 : secL;
	}
