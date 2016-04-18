#include <iostream>
#include <cstring>

using namespace std;

char infix[500],postfix[500],s[500];
int t = -1;
char pop()
{
	char ret;
	if ( t != -1 ) {
		ret = s[t];
		t--;
		return ret;
	} else return '#';
}

char tp()
{
	char ch;
	if ( t != -1 ) ch = s[t];
	else ch = '#';
		return ch;
}

void push( char ch )
{
	if ( t != 499 ) {
		t++;
		s[t] = ch;
	}
}

int precedence( char ch )
{
	switch ( ch ) {
		case '^': return 5;
		case '*': return 4;
		case '/': return 4;
		case '+': return 3;
		case '-': return 3;
		default : return 0;
	}
}

int main()
{
	char ele,elem;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) {
	strcpy(postfix,"");
	cin>>infix;
	int j = 0,pre,prep,poped;
	for ( int i = 0; infix[i] != '\0'; i++ ) {
		if ( infix[i] != '(' && infix[i] != ')' && infix[i] != '^' && infix[i] != '*' && infix[i] != '/' && infix[i] != '+' && infix[i] != '-' )
			postfix[j++] = infix[i];
		else if ( infix[i] == '(' ) {
			elem = infix[i];
			push( elem );
		} else if ( infix[i] == ')' ) {
			while ( (poped = pop()) != '(' )
				postfix[j++] = poped;
		} else {
			elem = infix[i];
			pre = precedence( elem );
			ele = tp();
			prep = precedence( ele );
			if ( pre > prep ) push( elem );
			else {
				while ( prep >= pre ) {
					if ( ele == '#' ) break;
					poped = pop();
					ele = tp();
					postfix[j++] = poped;
					prep = precedence( ele );
				}
				push( elem );
			}
		}
	}
	postfix[j] = '\0';
	cout << postfix<<endl;
	}
	return 0;
}
