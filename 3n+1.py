my_table = dict()
my_stack = []
my_table[1] = 1
max_val = -1

import fileinput

#inputs = 5

#array = []

#a = 1
#b = 10
for line in fileinput.input(): 
    if len(line) == 0:
        break   
    array = line.split(" ")
    array = [x.strip() for x in array]
    # print(array)
    max_val = 0
    for start_num in range(min(int(array[0]),int(array[1])) , max(int(array[0]),int(array[1]))):
        d = start_num
        if d != 0: 
            
            while d not in my_table:
            
                my_stack.append(d)
                if d % 2 == 0:
                    d /= 2
                else: 
                    d = d * 3 + 1
                    
            # will at least equal 1 because of my_table[1] = 1
            cycle_length = my_table[d] 
            
            while len(my_stack) > 0:
                cycle_length += 1
                my_table[my_stack.pop()] = cycle_length
            max_val = max(max_val, cycle_length)
        
    print(f"{array[0]} {array[1]} {max_val}")
    #array.append(max_val)
    
#print(array)
