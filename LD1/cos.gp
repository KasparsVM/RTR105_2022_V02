f(x) = cos(x)**2
s0(x) = 1
s1(x) = s0(x) - x**2/2
s2(x) = s1(x) + x**4/24
s3(x) = s2(x) - x**6/720
s4(x) = s3(x) + x**8/40320

set grid
set xrange [-10:10]
set yrange [-1:1]
plot f(x) title 'cos^2(x)' lw 2 lt rgb "red"
replot s0(x) title 's0' lt rgb "blue"
replot s1(x) title 's1' lt rgb "green"
replot s2(x) title 's2' lt rgb "yellow" 
replot s3(x) title 's3' lt rgb "orange"
replot s4(x) title 's4' lt rgb "purple"
