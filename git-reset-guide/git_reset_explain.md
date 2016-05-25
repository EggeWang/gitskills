Imagine you have a file called `foo.txt` and your Git history looked like this: 

```
A -> B -> C (HEAD)
```

Let's see each commit we made:

```
A == foo
B == FOO
C == Foo
```

The following examples explain the different reset flags:

```
git reset --soft B  == move HEAD to B but keep C's changes staged (i.e. added to the index)

git reset --mixed B == move HEAD to B but keep C's changes unstaged

git reset --hard B  == move HEAD to B but completely delete C (you've lost those changes forever)
```