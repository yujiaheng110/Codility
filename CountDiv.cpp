int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int lowMod;
	if(A>K)  lowMod=A%K;
    else lowMod=K-A;

	int hiMod = B % K;
	int firstMultiple = (A + lowMod);
	int lastMultiple =(B-hiMod);
	if(A==0) return B/K + 1;
	if (firstMultiple > lastMultiple) return 0;
	return ((lastMultiple - firstMultiple) / K)+1;
}
