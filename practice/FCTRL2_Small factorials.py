t=int(raw_input())
while t>0:
	n=int(raw_input())
	i=1
	while n>0:
		i*=n
		n-=1
	print i
	t-=1
