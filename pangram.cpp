class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        string alphabets = "abcdefghijklmnopqrstuvwxyz";
        int length = sentence.length();
        if(length >= 26)
        {
            
            for(int i=0; sentence[i] != '\0'; i++)
            {
                int a =alphabets.find(sentence[i]);
                if(a != -1)
                alphabets.erase(a,1);
                alphabets = alphabets;
            }
            
        if(alphabets.length() > 0)
            return 0;
        else
            return 1;
        
        }
        else
            return 0;
    }
};