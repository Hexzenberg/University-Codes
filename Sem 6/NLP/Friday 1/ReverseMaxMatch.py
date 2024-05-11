def reverse_max_match(input_string, wordlist):
    result = []
    end_pointer = len(input_string) - 1

    while end_pointer >= 0:
        start_pointer = end_pointer
        found_match = False

        while start_pointer >= 0:
            current_word = input_string[start_pointer:end_pointer + 1]

            if current_word in wordlist:
                result.insert(0, current_word)
                end_pointer = start_pointer - 1
                found_match = True
                break
            
            start_pointer -= 1

        if not found_match:
            result.insert(0, input_string[end_pointer])
            end_pointer -= 1

    return result

wordlist = ['the', 'one']
test_string = 'theone'
result = reverse_max_match(test_string, wordlist)
print(result)
