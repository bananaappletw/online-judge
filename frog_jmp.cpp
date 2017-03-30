int solution(int X, int Y, int D) {
    return (Y-X)%D ?(Y-X)/D+1:(Y-X)/D;
}

