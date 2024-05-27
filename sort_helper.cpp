void swap(Character& a, Character& b) {

    Character temp = a;
    a = b;
    b = temp;
    return ;
}

void sortVector(vector<Character>& vec) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3 - i; ++j) {
            if (vec[j].getPosition() > vec[j + 1].getPosition()) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
    return ;
}
