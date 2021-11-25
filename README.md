# SW_Systems_Task2
---
In this project we used 10X10 [matrices](https://en.wikipedia.org/wiki/Matrix_(mathematics)) of natural numbers in order to represent [undirected graphs](https://en.wikipedia.org/wiki/Graph_(discrete_mathematics)).
- matrix[i][j] represents the weight of the edge **from** ___i___ **to** ___j___
* ___Note___: If matrix[i][j]=0 -> There is no edge between vertex i and vertex j

## Project abilities:
---
- Build 10X10 matrix based on 100 numbers input. For example: __1 0 4 6 235 74.....__
- Given 2 numbers __i, j__, the program will return if there is a route between vertex __i__ and vertex __j__ 
- Given 2 numbers __i, j__, the program will return the length of the shortest path between vertex __i__ and vertex __j__ based on [Floyd–Warshall Algorithm](https://www.youtube.com/watch?v=oNI0rf2P9gE&ab_channel=AbdulBari). If there is no such route, the program will return default value of __(-1)__.

## Example:
___
- **Input=** 0 6 5 29 4 0 12 15 46 10 6 0 32 41 35 18 15 48 41 4 5 32 0 30 2 14 48 24 30 27 29 41 30 0 48 10 29 13 31 42 4 35 2 48 0 30 24 40 22 23 0 18 14 10 30 0 1 11 8 12 12 15 48 29 24 1 0 17 45 8 15 48 24 13 40 11 17 0 21 33 46 41 30 31 22 8 45 21 0 8 10 4 27 42 23 12 8 33 8 0 
- **The matrix:**
    |0|6|5|29|4|0|12|15|46|10|
    |---|---|---|---|---|---|---|---|---|---|
    |__6__|__0__|__32__|__41__|__35__|__18__|__15__|__48__|__41__|__4__|
    |__5__|__32__|__0__|__30__|__2__|__14__|__48__|__24__|__30__|__27__|
    |__29__|__41__|__30__|__0__|__48__|__10__|__29__|__13__|__31__|__42__|
    |__4__|__35__|__2__|__48__|__0__|__30__|__24__|__40__|__22__|__23__|
    |__0__|__18__|__14__|__10__|__30__|__0__|__1__|__11__|__8__|__12__|
    |__12__|__15__|__48__|__29__|__24__|__1__|__0__|__17__|__45__|__8__|
    |__15__|__48__|__24__|__13__|__40__|__11__|__17__|__0__|__21__|__33__|
    |__46__|__41__|__30__|__31__|__22__|__8__|__45__|__21__|__0__|__8__|
    |__10__|__4__|__27__|__42__|__23__|__12__|__8__|__33__|__8__|__0__|
- **i=2, j=5** ___-->___ ___True___, ___14___
- **i=7, j=7** ___-->___ ___False___, ___(-1)___
## Collaborators:
___
- Yonatan Tal
- Ofek Rotem 
