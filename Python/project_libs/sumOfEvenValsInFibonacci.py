# Author: Bale, Karansingh S

import os


def problem_2():
    print('Finding sum of even valued terms in Fibonacci sequence upto 4 million')
    # get fibonacci series upto 4 million
    fibo_list = fibonnaci_numbers(limit=4000000)
    # filter out all even values from this list
    even_valued_fibo_list = list(filter(lambda x: not x % 2, fibo_list))
    print(even_valued_fibo_list)
    print(sum(even_valued_fibo_list))

    return


def fibonnaci_numbers(limit=4000000):
    # Fibonacci sequence is generated by adding previous two terms
    fibonnaci_sequence = [1, 2]
    for number in range(0, limit):
        cur_index = len(fibonnaci_sequence)-1
        total = fibonnaci_sequence[cur_index]
        if total < limit:
            total = fibonnaci_sequence[cur_index-1] + fibonnaci_sequence[cur_index]
            fibonnaci_sequence.append(total)
        else:
            print('Fibonnaci sequence upto limit : {}'.format(limit))
            print(fibonnaci_sequence)
            break

    return fibonnaci_sequence


def main():
    problem_2()


if __name__ == "__main__":
    main()

