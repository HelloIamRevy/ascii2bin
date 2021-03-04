//Overall Program Goal. reads a string of 1's and 0's AS ASCII digits (normal deci numbers)
// Step 1 Read String of 1s and 0s
//Step convert binary to decimal
//print decimal

offset = ? ;
number = 0;
int ascii_value;
int digit;

retval = read(0, &ascii_value, 1);
while (retval == 1)
    digit = ascii_value - offset;
number = (number << 1) + digit;
retval = read(0, &ascii_value, 1);

printf("%u\n", number);
return 0;