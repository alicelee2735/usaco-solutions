## [USACO 2016 December Contest, Bronze Problem 3. The Cow-Signal](https://usaco.org/index.php?page=viewproblem2&cpid=665&lang=en)

Bessie and her cow friends are playing as their favorite cow superheroes. Of course, everyone knows that any self-respecting superhero needs a signal to call them to action. Bessie has drawn a special signal on a sheet of M×N paper (1≤M≤10,1≤N≤10), but this is too small, much too small! Bessie wants to amplify the signal so it is exactly K times bigger (1≤K≤10) in each direction.
The signal will consist only of the '.' and 'X' characters.

**INPUT FORMAT (file cowsignal.in):** \
The first line of input contains M, N, and K, separated by spaces. \
The next M lines each contain a length-N string, collectively describing the picture of the signal. \

**OUTPUT FORMAT (file cowsignal.out):** \
You should output KM lines, each with KN characters, giving a picture of the enlarged signal. \
SAMPLE INPUT:
5 4 2 \
XXX. \
X..X \
XXX. \
X..X \
XXX. \
SAMPLE OUTPUT:\
XXXXXX.. \
XXXXXX.. \
XX....XX \
XX....XX \
XXXXXX.. \
XXXXXX.. \
XX....XX \
XX....XX \
XXXXXX.. \
XXXXXX.. \

### Solution
The original signal M * N signal is amplified K times. This means, for each character, let's say x(1~N) in a row, is printed K times, each row in the y(1~M) columns is repeated for K times as well. Therefore, we need four nested loops, from the inner N * K output(each printed row) to repeating N * K for M * K times. Thus, the time complexity for the solution is O(N * M * K^2).

### Solution Code(C++)
```cpp
// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);
    int M,N,K;
    cin>>M>>N>>K;
    char signal[M][N];
    for(int i=0;i<M;++i){
        for(int j=0;j<N;++j) cin>>signal[i][j];
    } 
    for(int i=0;i<M;++i){
        for(int j=0;j<K;++j){
            for(int l=0;l<N;++l){
                for(int m=0;m<K;++m){
                    cout<<signal[i][l];
                } 
                
            } 
            cout<<"\n";
        }
    }
    return 0;
}
```
