class Solution {
public:
    string capitalizeTitle(string title) {
        for(int i = 0; i < title.length(); i++){
            int firstIdx = i;
            while(i < title.length() && title[i] != ' '){
                title[i] = tolower(title[i]);
                i++;
            }
            if(i - firstIdx > 2){
                title[firstIdx] = toupper(title[firstIdx]);
            }
        }
        return title;
    }
};