//"1","10101","0101010"都是交错01串
//现有一个01串s，小易想找出一个最长的连续子串，并且这个子串是一个交错01串。
//请算出最长的这样的子串的长度是多少？

//输入s(1 <= length <= 50)，字符串中只包含'0'和'1'

//输出满足要求的最长子串长度


while(line=readline()){
    if (line.length == 1) {
        print(1);
        break;
    } else {
    	var result = 1;
    	var current = 0;
    	var next = 1;
    	while(next < line.length) {
        	var max = 1;
    		while(line[next] && line[current] !== line[next]) {
        		current = next;
        		next++;
            	max++;
            	if (max > result) {
            	    result = max;
        	    }
    		}
	        current = next;
    	    next++;
	    }
		print(result)
        break;
    }
         
   
    
}
