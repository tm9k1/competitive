                                                            # UVa 10226 Hardwood Species
n = int(input())                                            # n is the number of test cases you want to enter
temp= raw_input()                                           # for first blank line
for t in range(n):                                          # for every test case
    temp= raw_input()                                       # input first tree name
    d ={}                                                   # initialized empty dictionary
    total=0                                                 # total count of trees, excluding first one (explained later)
    while(temp not in [str(""), str("\r\n"),str("\n")]):    # check for end of test case         
        if temp not in d:                                   # updating the DICTIONARY 
            d[temp]=1;
        else:
            d[temp]+=1;
        total+=1;                                           # this will also count the extra line that will come at end of input.
        temp= raw_input()                                   # this will keep taking next tree name for input (and also ending empty line)
    for key in sorted(d.iterkeys()):                        # sorted output ALPHABETICALLY
        print "%s %.4f" % (key, 100*d[key]/float(total))    # formatted output for upto 4 decimals
    print ""                                                # at the end of each testcase output, new line is asked in Q