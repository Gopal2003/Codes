if __name__ == '__main__':
    

    scores = []
    
    for _ in range(int(input())):
        name = input()
        score = float(input())
        scores.append([name,score])
        
    #create a set to store unique scores    
    score_set = sorted(set([i[1] for i in scores]))
    
    second_score = score_set[1]

    #get the names with second lowest score
    names = sorted([i[0] for i in scores if i[1] == second_score])

    for name in names:
        print(name)