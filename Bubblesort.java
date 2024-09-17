import java.util.*;
class Bubblesort{
	public static void main(String[] args) {

		Bubblesort obj = new Bubblesort();
		ArrayList<Integer> arrlist = new ArrayList<>();
		arrlist.addAll(Arrays.asList(9,5,4,3,8,2,99,82,56));
		System.out.println(arrlist);

		for (int j=0; j<arrlist.size()-1; j++) {
			loopCount+=1;
			for (int i=0; i<(arrlist.size()-1)-j; i++) {
				loopCount+=1;
				int min = arrlist.get(i);
				if (arrlist.get(i+1)<min) {
					count+=1;
					Collections.swap(arrlist,i,i+1);

					// arr[i]=arr[i+1];
					// arr[i+1]=min;

					// System.out.println(i+" "+j);
					// System.out.println(" ");
					// System.out.println(count);
				}
			}
		}
		System.out.println(arrlist);
		System.out.println("Array Size: "+ arrlist.size());

		System.out.println("Loop count: "+ loopCount);

	}	
	public void printarr(int[] arr){
		for (int i=0; i<7; i++) {
			System.out.print(arr[i]);
		}
	}
	static int count = 0;
	static int loopCount = 0;
}