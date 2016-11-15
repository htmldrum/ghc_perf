# GHC perf comparisons for dynamic allocations
### 8B * 10^7 ~=  76.3KB
`make testC`
```
time ./fpc 1e7
        0.04 real         0.03 user         0.00 sys
```
`make testH`
```
time ./fp 1e7
        0.04 real         0.04 user         0.00 sys
```
### 8B * 10^8 ~= 0.75 GB
`make testC`
```
time ./fpc 1e8
        0.38 real         0.37 user         0.00 sys
```
`make testH`
```
time ./fp 1e8
        0.39 real         0.37 user         0.00 sys
```
### 8B * 10^9 ~= 7.45 GB
`make testC`
```
time ./fpc 1e9
        3.86 real         3.76 user         0.04 sys
```
`make testH`
```
time ./fp 1e9
        3.78 real         3.70 user         0.03 sys
```
