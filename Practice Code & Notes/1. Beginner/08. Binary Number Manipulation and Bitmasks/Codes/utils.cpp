
string binary(int x){
    string ret;
    for(int i = 31; i>=0; i--){
        int mask = (1<<i);
        if((x&mask) == 0)
            ret.push_back('0');
        else
            ret.push_back('1');
    }
    return ret;
}

/// 31 30 29 ...... 3 2 1 0

/// 000000000000000000001110
/// 000000000000000010000000
/// 000000000000000000000000 == 0

int decimal(string num){
    int ret = 0;
    for(int i = 0, j = (int)num.size()-1; j >= 0; i++, j--){
        if(num[j] == '1')
            ret |= (1<<i);
    }
    return ret;
}


/// 0
/// 110100
/// 543210
