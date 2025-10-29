int solution(int a, int b) {
    int answer1 = 0;
    int answer2 = 0;
    int count = 1;
    while(count <= b){
        count *= 10;
        answer1 = (a * count)+ b;
    }
    count = 1;
    while(count <= a){
        count *= 10;
        answer2 = (b*count)+a;
    }
    if(answer1 > answer2){
        return answer1;
    }
    return answer2;
}