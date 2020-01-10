function solution(a, b) {
    let days = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let dayWeek = ['THU', 'FRI', 'SAT', 'SUM', 'MON', 'TUE', 'WED'];
    let daysSum = 0;
    
    for(let i = 0; i < a-1; i++) {
        daysSum += days[i];
    }
    
    daysSum += b;

    return dayWeek[(daysSum % 7)];
}
