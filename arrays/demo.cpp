string findun(const string& str, const string& pattern) {
    vector<int> uni;
    int n = str.length();
    int pl = pattern.length();

    for (int i = 0; i <= n - pl; i++) {
        bool isMatch = true;
        for (int j = 0; j < pl; j++) {
            if (pattern[j] != '#' && str[i + j] != pattern[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            uni.push_back(i + 1);
        }
    }

    if (uni.empty()) {
        return "0";
    }

    string un = "";
    for (int idx : uni) {
        un += to_string(idx);
    }

    return un;
}