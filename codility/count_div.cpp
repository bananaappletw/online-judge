int solution(int A, int B, int K) {
    int min = (A/K) * K;
    if( min < A)
        min+=K;
    int max = (B/K) * K;
    return (max-min)/K+1;
}
