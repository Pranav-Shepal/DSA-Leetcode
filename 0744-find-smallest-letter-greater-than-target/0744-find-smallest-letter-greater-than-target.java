class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        
        int n=letters.length;

        if(letters[n-1]<=target) return letters[0];

        if(letters[0]>target) return letters[0];

        for(int i=0;i<n;i++){
            if(letters[i]>target){
                return letters[i];
            }
        }

        return letters[0];
    }
}