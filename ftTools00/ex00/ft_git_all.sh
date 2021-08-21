#!/bin/bash
'
        for d in */ ; do
            cd "$d"
            git pull
            cd ..
        done
  
 '
        
        for d in */ ; do
            cd "$d"
            git add .
            git commit -m "Pushing all repositories!!"
            git push
            cd ..
            clear
        done         

'
# inicio
# layout
echo "--------------------------"
echo "| Bem Vindo Ao GitAll 1.0 |"
echo "| By acapela-             |"
echo "------------------------------------"
echo "0 - config git for my Github"
echo "1 - git pull all your repositories!"
echo "2 - git push all your repositories!"
echo "3 - git clone all your repositories!"
echo "------------------------------------"

# entrada
    set entrada
    export entrada
    read entrada
    

  
# processamento
   if [$entrada == 0]
    then
    # option #0
        echo "Nome de Usuário: "
        set username
        export username
        read -r username
        git config --global user.name $username
        echo "E-mail: "
        set email
        export email
        read -r email
        git config --global user.email $email
   
   
    elif [$entrada == 1]
    then
    # option #1
        for d in */ ; do
            cd "$d"
            git pull
            cd ..
        done

    elif [$entrada == 2]
    then
    # option #2
        for d in */ ; do
            cd "$d"
            git add .
            git commit -Am "Pushing all repositories!!"
            git push
            cd ..
        done
    elif [$entrada == 3]
    then
    # option #3
        echo "Here it's been developed!"
    else
        echo "Incorrect Value"
    fi
# fim
'