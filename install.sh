#!/usr/bin/env sh

[ "$(id -u)" != 0 ] && {
    printf "This script needs to be executed as root.\n"
    exit 1
}

find '.' -mindepth 1 -maxdepth 1 -type d -not -path '*/\.*' | while IFS= read -r i; do
    cd "$i"
    make "$@"
    cd ..
done
