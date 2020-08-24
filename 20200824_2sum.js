function twoNumberSum(array, targetSum) {
	let ret = [];
	
	for (let i = 0; i < array.length - 1; i++) {
		for (let j = i + 1; j < array.length; j++) {
			if (array[i] + array[j] === targetSum) {
				ret = [array[i], array[j]];
				break;
			}
		}
		if (ret.length == 2)
			break;
	}
	return ret;
}

// reduce, map, find등의 내장 함수를 사용하려다가 문제풀이가 오랜만이라 이리저리 꼬이길래 그냥 로직을 펼쳐놓기로 했다.
