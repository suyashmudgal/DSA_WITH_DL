void removeConsecutiveDuplicates(char *input) {

    if(input[0] == '\0') return;

    int i = 0;

    while(input[i] != '\0') {
        
        int j = i + 1;

        while(input[j] == input[i]) {
            j++;
        }

        input[i + 1] = input[j];

        if(input[j] == '\0') break;

        i++;
    }
}