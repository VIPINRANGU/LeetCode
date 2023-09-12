class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0;i<command.length();i++){
            if(command[i]=='(' && command[i+1]==')'){
                ans=ans+"o";i=i+1;
            }
            else if(command[i]=='('){
                ans=ans+"al";i=i+3;
            }
            else if(command[i]==')'){
                i=i+1;
            }
            else{
                ans=ans+command[i];
            }
        }
        return ans;
    }
};