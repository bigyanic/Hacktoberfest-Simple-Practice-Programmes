#include <bits/stdc++.h> 
using namespace std; 


int precedence(char op){ 
	if(op == '+'||op == '-') 
	return 1; 
	if(op == '*'||op == '/') 
	return 2; 
	return 0; 
} 

int applyOp(int a, int b, char op){ 
	switch(op){ 
		case '+': return a + b; 
		case '-': return a - b; 
		case '*': return a * b; 
		case '/': return a / b; 
	} 
    return 0;
} 


long long evaluate(string tokens){ 
	int i; 
	
	stack <int> values;  
	stack <char> ops; 
	
	for(i = 0; i < tokens.length(); i++){ 
		
		if(tokens[i] == ' ') 
			continue; 
		

		else if(tokens[i] == '('){ 
			ops.push(tokens[i]); 
		} 
		
		else if(isdigit(tokens[i])){ 
			int val = 0; 
			
			while(i < tokens.length() && 
						isdigit(tokens[i])) 
			{ 
				val = (val*10) + (tokens[i]-'0'); 
				i++; 
			} 
			
			values.push(val); 
		} 
		

        else if (tokens[i] == 'A'){
          values.push(10080);
        }

        else if (tokens[i] == 'B'){
          values.push(1100);
        }

        else if (tokens[i] == 'C'){
          values.push(11180);
        }

        else if (tokens[i] == 'D'){
          values.push(12280);
        }

		else if(tokens[i] == ')') 
		{ 
			while(!ops.empty() && ops.top() != '(') 
			{ 
				int val2 = values.top(); 
				values.pop(); 
				
				int val1 = values.top(); 
				values.pop(); 
				
				char op = ops.top(); 
				ops.pop(); 
				
				values.push(applyOp(val1, val2, op)); 
			} 	
		 
			if(!ops.empty()) 
			ops.pop(); 
		} 
		
		else
		{ 
			
			while(!ops.empty() && precedence(ops.top()) 
								>= precedence(tokens[i])){ 
				int val2 = values.top(); 
				values.pop(); 
				
				int val1 = values.top(); 
				values.pop(); 
				
				char op = ops.top(); 
				ops.pop(); 
				
				values.push(applyOp(val1, val2, op)); 
			} 
			
			ops.push(tokens[i]); 
		} 
	} 
	

	while(!ops.empty()){ 
		int val2 = values.top(); 
		values.pop(); 
				
		int val1 = values.top(); 
		values.pop(); 
				
		char op = ops.top(); 
		ops.pop(); 
				
		values.push(applyOp(val1, val2, op)); 
	} 
	

	return values.top(); 
} 

long long number(string number)
{

    long long check = 0;

    for (size_t i = 0; i < number.length(); i++)
         check = (check*10 + (long long)number[i] - '0') %3331;

    return check;
}


int main() { 
	
    int T;

    scanf("%d",&T);

    for (int i = 0; i < T; i++)
    {
        string total;
        string nilai;
        long long cek;
        int N;
        scanf("%d",&N);

        getchar();
        getline(cin, total);
        cek = evaluate(total);

        for(int j=0; j<N; j++) 
        {
            nilai.append(to_string(cek));
        }
        cout << number(nilai) << endl;
    }
    
	return 0; 
} 
