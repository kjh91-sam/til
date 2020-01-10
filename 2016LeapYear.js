function solution(a, b) {
    let answer = '';
    let days = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let daysSum = 0;
    
    for(let i = 0; i < a-1; i++) {
        daysSum += days[i];
    }
    
    daysSum += b;
    
    let dayWeek = daysSum % 7;
    
    switch(dayWeek) {
        case 0 : 
            answer = 'THU';
            break;
        case 1 :
            answer = 'FRI';
            break;
        case 2 :
            answer = 'SAT';
            break;
        case 3 :
            answer = 'SUN';
            break;
        case 4 :
            answer = 'MON';
            break;
        case 5 :
            answer = 'TUE';
            break;
        case 6 :
            answer = 'WED';
            break;
        dafault :
            break;
    }

    return answer;
}
