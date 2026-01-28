# Binary-Representation






So we are trying to represent only integers for right now just we have a starting point. After I can do that I'll try make it so it can take any character and then find the binary value of that.



Example 0 = 0000 1 = 0001 2 = 00010
    
    we can first get the binary by shifting

    for i starting from 0 to 4 bits for example.
    
    x  >> i
    12 >> 0 = 1100 = 12
    12 >> 1 = 0110 = 6
    12 >> 2 = 0011 = 3
    12 >> 3 = 0001 = 1

    these are the numbers that you get when you shift the bits over whatever 'i' is.

        so when we print the result will come out as 13612
    

    - So if we using bitwise and to compare the two integers like this
           ((x >> i) & 1)

           we will get 0 or 1 (true or false)
    - If we do the same test but we are doing bitwise and instead we get this. I'm also going to use one nibble or (4 bits) to represent this instead of 2 nibbles.

        ((x >> i) & 1)

        
        (12 >> 0) = 1100 & 0001 = 0000 = 0
        (12 >> 1) = 0110 & 0001 = 0000 = 0
        (12 >> 2) = 0011 & 0001 = 0001 = 1
        (12 >> 3) = 0001 & 0001 = 0001 = 1

        which will print 1100 as a result.
    
