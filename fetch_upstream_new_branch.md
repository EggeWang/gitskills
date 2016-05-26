#fetch new branch from upstream repo(which repo is forked), to store locally
$git checkout -b featureBranch upstream/featureBranch
#push this new branch to our origin remote github repo
$git push origin featureBranch
