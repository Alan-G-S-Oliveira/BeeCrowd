dicionario = {

    '1' : 'MONDAY',
    '2' : 'MONDAY',
    '3' : 'TUESDAY',
    '4' : 'TUESDAY',
    '5' : 'WEDNESDAY',
    '6' : 'WEDNESDAY',
    '7' : 'THURSDAY',
    '8' : 'THURSDAY',
    '9' : 'FRIDAY',
    '0' : 'FRIDAY',

}

N = int(input())

for i in range(N):
    S = input()
    
    if len(S) != 8 or not(S[:3].isupper()) or S[3] != '-' or not(S[4:].isnumeric()):
        print('FAILURE')
    else:
        print(dicionario[S[-1]])
