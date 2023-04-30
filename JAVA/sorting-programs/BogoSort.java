public class BogoSort 
{
	public static void main(String[] args)
	{
		int[] arr={4,5,6,0,7,8,9,1,2,3};
 
		BogoSort now=new BogoSort();
		System.out.print("Unsorted is ");
		now.display1D(arr);
 
		now.bogo(arr);
 
		System.out.print("Sorted is ");
		now.display1D(arr);
	}
	void bogo(int[] arr)
	{
		int shuffle=1;
		for(;!isSorted(arr);shuffle++)
			shuffle(arr);
		System.out.println("This took "+shuffle+" shuffles");
	}
	void shuffle(int[] arr)
	{
		int i=arr.length-1;
		while(i>0)
			swap(arr,i--,(int)(Math.random()*i));
	}
	void swap(int[] arr,int i,int j)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	boolean isSorted(int[] arr)
	{
 
		for(int i=1;i<arr.length;i++)
			if(arr[i]<arr[i-1])
				return false;
		return true;
	}
	void display1D(int[] arr)
	{
		for(int i=0;i<arr.length;i++)
			System.out.print(arr[i]+" ");
		System.out.println();
	} 
}