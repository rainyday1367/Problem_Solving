class Solution {
    public String solution(String str1, String str2) {
        String answer = "";
        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();
        for (int i = 0; i < str1.length(); i++) {
            answer += String.valueOf(arr1[i]) + String.valueOf(arr2[i]);
        }
        return answer;
    }
}