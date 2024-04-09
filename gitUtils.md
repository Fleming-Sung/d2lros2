1. initial a project:
git init

2. add files to temp sync space:
git add .

3. commit(commit to local repo)
git commit -m 'my commit description'

4. create a repo or copy existed repo's link

5. add remote repo to the local project
git remote add origin git@github.com:Fleming-Sung/<reponame>

6. choose a branch to follow("main" as example)
git branch -u origin main

7. push origin(local) to the remote
git push -u origin main

8. pull remote(main) content
git pull origin main
