# Programmers
문제 풀면서 얻은 풀이법
=======================
1.순서대로 더하기. O(n) -> O(1)로
--------------------------------
### 1.1. 1부터 n까지 더하기.
    1 부터 n까지 순서대로 더한 것은 n(n+1)/2 이다. Ex) 1~10 더한 것 -> (10+11)/2 = 55
### 1.2. n부터 m까지 더하기. (단, n<m , n>1 인 정수)
    1.1번을 활용하여 서로 빼 주면 된다. m(m+1)/2 - n(n+1)/2
2.나머지 연산
------------
### 2.1. 나머지 연산 식
    (𝐴+𝐵) 𝑚𝑜𝑑 𝑀 = ((𝐴 𝑚𝑜𝑑 𝑀 ) + (𝐵 𝑚𝑜𝑑 𝑀)) 𝑚𝑜𝑑 𝑀
    (𝐴∗𝐵) 𝑚𝑜𝑑 𝑀 = ((𝐴 𝑚𝑜𝑑𝑀)∗(𝐵𝑚𝑜𝑑𝑀))𝑚𝑜𝑑𝑀
    (𝐴−𝐵)𝑚𝑜𝑑 𝑀 = ( ( 𝐴 𝑚𝑜𝑑 𝑀) – (𝐵 𝑚𝑜𝑑 𝑀) + 𝑀) 𝑚𝑜𝑑 𝑀(음수 보정)
3.최대공약수 GCD
---------------
### 3.1. 유클리드 호제법
    a를 b로 나눈 나머지를 r이라고 할 때 gcd(a,b) = gcd(b,r)이다.
    r이 0이 되면 그떄 b가 최대 공약수 이다.
    for문 시간복잡도 O(N) -> 유클리드 호제법 O(logN)
4.최소공배수 LCM
----------------
### 4.1. 유클리드 호제법 활용
    gcd(m,n)lcm(m,n) = m*n
