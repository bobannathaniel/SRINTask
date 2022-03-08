#include <stdio.h>

//https://www.hackerrank.com/challenges/making-candies/problem

long minimumPasses(long m, long w, long p, long n) {
    long total=0;
    long count=0;
    
    while(total < n)
    {
        total = total + (m * w);
        count++;
        if (total >= n)
        {
            break;    
        }
        while(total >= p)
        {
        	if((total + (m*w)) >= n)
            {
                break;
            }
            if(m >= w)
            {
                total-=p;
                w+=1;
            }
            else if(w > m)
            {
                total-=p;
                m+=1;
            }
        }
        printf("%lld %lld %lld\n",m, w, total);
    }
    return count;
}

int main()
{
	long m = 3;
	long w = 1;
	long p = 2;
	long n = 12;
	long count = minimumPasses(m,w,p,n);
	printf("%d",count);
}
