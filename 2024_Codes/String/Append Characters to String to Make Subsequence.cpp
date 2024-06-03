int appendCharacters(string s, string t) {
        int i = 0; 
        int j = 0;
        int l1 =  s.length();
        int l2 = t.length();

        while(i < l1 && j < l2){
            if(s[i] == t[j]){
                j++;
            }
            i++;
        }

        return t.length() -  j;
}
