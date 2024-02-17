while True:
    x = int(input())
    
    if x == 0:
        break
    
    times = list(map(int, input().split()))
    active_time = 0
    
    for i in range(x - 1):
        if x == 1:
            active_time += 10
        
        else:    
            dif = times[i + 1] - times[i]
            
            if dif < 10:
                active_time += dif
            
            else:
                active_time += 10
    
    active_time += 10  
    
    print(active_time)
