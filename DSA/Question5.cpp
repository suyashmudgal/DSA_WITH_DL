void removeConsecutiveDuplicates(char *input) {

    // Base case
    if(input[0] == '\0')
        return;

    // If first two chars are same
    if(input[0] == input[1]) {

        int i = 0;

        // Skip all same characters
        while(input[i] == input[0]) {
            i++;
        }

        // Shift string left
        int j = 0;
        while(input[i] != '\0') {
            input[j++] = input[i++];
        }
        input[j] = '\0';

        // Recursive call again from start
        removeConsecutiveDuplicates(input);
    }
    else {
        // Process rest of string
        removeConsecutiveDuplicates(input + 1);
    }
}