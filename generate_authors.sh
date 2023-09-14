#!/usr/bn/env bash
set -e 
cd  "$(dirname "$(readlink -f "$BASH_SOURCE")")/."

{
    cat <<'EOH'
    #this file lists all individuals that made contributions to the creation and success of this project
    ## check the file 'generate_authors.sh' to see how it was generated.

EOH
  echo 
  git log --format='%aN <%aE>' |LC_ALL=C.UTF-8 sort -uf} > AUTHORS
