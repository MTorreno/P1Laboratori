int max_of3_amb2if(int a, int b, int c) {
	
	int max = a;
	if (max < b) {
		max = b;
	}

	if (max < c) {
		max = c;
	}

	return max;
}
