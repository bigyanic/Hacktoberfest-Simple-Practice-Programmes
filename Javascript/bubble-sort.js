let numArr = [10,1,9,8,2,7,3,6,4,5]

function bubbleSort(arr) {
	let swap;
	let n = arr.length-1;
	let x = arr;

	while(!swap) {
		swap = false;
		for (var i=0; i < n; i++) {
			if (x[i] < x[i+1]) {
				let temp = x[i];
				x[i] = x[i+1];
				x[i+1] = temp;
				swap = true;
			};
		}
		n--;
	};

	return x;
}

console.log(bubbleSort(numArr));
//[10, 9, 8, 2, 7, 3, 6, 4, 5, 1]