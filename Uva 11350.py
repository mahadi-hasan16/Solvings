class Fraction:
    def __init__(self, numerator, denominator):
        self.numerator=numerator
        self.denominator=denominator

t=int(input())
while t:
    low=Fraction(0,1)
    high=Fraction(1,0)
    s=input()
    l=len(s)
    for i in range(l):
        meiden=Fraction(low.numerator+high.numerator,low.denominator+high.denominator)
        if s[i]=='L':
            high=meiden
        else:
            low=meiden
    f=Fraction(low.numerator+high.numerator,low.denominator+high.denominator)
    print(f.numerator,'/',f.denominator,sep='')
    t=t-1
