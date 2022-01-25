"""
*First try
- made dup array where to simulate the queue changes
- compared the two arrays q and dup and calculate the movements

- used .remove() and .insert() to modify dup array
- used .index() to locate the person in dup

- Result : Time exceed


*Second try
- replace remove+insert algorithm to swap so that the other people would not move when swap happens

- Result : Time Exceeds


*Third try
- replace .index() method to dynamic programming method (using dictionary note to remember the position)

- Result : Success
"""

def minimumBribes(q):
    total = 0
    messed_up = False
    dup = [i for i in range(1, len(q)+1)]
    note = {i+1:i for i in range(len(q))}
    for i in range(len(q)):
        # supposed_to_be = dup.index(q[i])
        supposed_to_be = note[q[i]]
        moved = supposed_to_be - i
        if moved > 2: 
            print("Too chaotic")
            messed_up = True
            break
        else:
            # dup.remove(q[i])
            # dup.insert(i, q[i])
            total += moved
            if moved > 0:
                dup[supposed_to_be], dup[supposed_to_be-1] = dup[supposed_to_be-1], dup[supposed_to_be]
                note[dup[supposed_to_be]] += 1
            if moved > 1:
                dup[supposed_to_be-1], dup[supposed_to_be-2] = dup[supposed_to_be-2], dup[supposed_to_be-1]
                note[dup[supposed_to_be-1]] += 1
    if not messed_up: print(total)