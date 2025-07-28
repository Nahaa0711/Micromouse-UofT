###### CHECKING YOUR BRANCHES
==git branch== 
This command allows you to check what branch you are currently on, as well as all the other local branches in your git repo

###### SWITCHING BRANCHES
git checkout allows you to switch from one branch to another
there is a new command called git switch, but i don't know it, and i think that git checkout is a lot better lol

if you would like to switch to a local branch that already exists locally, you should use
==git checkout branch-i'd-like-to-switch-to==

if you would like to create a newbranch with a custom name by copying the branch you are currently, you should use
==git checkout -b new-branch-i'd-like-to-create==

for example if you would like to make a copy of the main branch to work on, you should: 
- first check which branch you are on by running git branch.
- secondly, if you are currently not on main, switch to main by running 
	- git checkout main
- thirdly you can now copy main, into a new branch called mainv2, for example, by running
	- git checkout -b mainv2

You can also copy specific files from & to other branches with checkout & more documentation/sources provided below for your reference!
Stack overflow is your best friend, though I hope whatever we do doesn't get complicated enough to warrant all this lmao.

using git checkout
https://www.git-tower.com/learn/git/commands/git-checkout
https://stackoverflow.com/questions/47630950/how-can-i-switch-to-another-branch-in-git

getting specific files from other branches using checkout
https://stackoverflow.com/questions/2364147/how-to-get-just-one-file-from-another-branch