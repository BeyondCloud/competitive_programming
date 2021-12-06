# Delete all files without extension, except for .git directory
find . -type f  ! -name "*.*"  -not -path "./.git/*" -delete