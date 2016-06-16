The simplest way would be to pull the XXX stuff into a branch in YYY and then merge it into master

In YYY:

```
git remote add importFrom /path/to/XXX
git fetch importFrom
git checkout -b ZZZ importFrom/master
mkdir ZZZ
git mv stuff ZZZ/stuff 	# as necessary
git commit -m "Moved stuff to ZZZ"
git checkout master
git merge ZZZ			# should add ZZZ/ to master
git commit
git remote rm importFrom
git branch -d ZZZ		# to get rid of the extra branch before pushing
git push				# if you have a remote, that is
```
