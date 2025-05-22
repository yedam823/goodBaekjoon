class Solution {
    public int solution(int n, int k) {
        int dn = n*12000;
        int dk = (k*2000) - (n/10*2000);
        int sum = dn+dk;
        return sum;
    }
}