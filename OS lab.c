#include <iostream>
#include <regex>
#include <map>
#include <vector>
using namespace std;
void printTokens(const string& input, const regex& regex, const string& type) {
sregex_token_iterator iter(input.begin(), input.end(), regex, 0);
sregex_token_iterator end;
map<string, vector<string>> tokenGroups;
for (; iter != end; ++iter) {
string token = *iter;
tokenGroups[type].push_back(token);
}
for (const auto& pair : tokenGroups) {
const string& tokenType = pair.first;
const vector<string>& tokens = pair.second;
cout << tokenType << "(" << tokens.size() << "): ";
for (size_t i = 0; i < tokens.size(); ++i) {
cout << tokens[i];
if (i < tokens.size() - 1) {
cout << ", ";
}
}
cout << endl;
}
}
int main() {
string inputString;
cout << "Enter the code: ";
getline(cin, inputString);
regex
keywordRegex("\\b(int|float|asm|double|new|switch|auto|else|operator|template|break|enum|private|this|case|extern|protected|throw|catch|float|public|try|char|for|register|typedef|class|friend|r
eturn|union|const|goto|short|unsigned|continue|if|signed|virtual|default|inline|sizeof|void|delete|
int|static|volatile|do|long|struct|while)\\b");
regex operatorRegex("[+\\-*/=]");
regex constantRegex("\\b\\d+\\b");
regex punctuationRegex("[;:,]");
regex parenthesisRegex("[(){}\\[\\]]");
regex logicalOperatorRegex(">=|<=|>|<|==|!=");
printTokens(inputString, keywordRegex, "Keyword");
printTokens(inputString, operatorRegex, "Operator");
printTokens(inputString, constantRegex, "Constant");
printTokens(inputString, punctuationRegex, "Punctuation");
printTokens(inputString, parenthesisRegex, "Parenthesis");
printTokens(inputString, logicalOperatorRegex, "Logical Operator");
return 0;
}
