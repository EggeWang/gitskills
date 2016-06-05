From the announcement Git 1.7.0(April 2012):
>
- git clone learned --single-branch option to limit cloning to a single branch; 
 tags that do not point into the history of the branch are not fetched.

 Git actually allows you to clone only one branch, for example:
 ```
 $git clone https://www.github.com/repo.git --branch mybranch --single-branch
 ```
