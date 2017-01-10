while read -r line; do
    DIRECTORY=`echo "$line" | cut -d'.' -f2- | cut -d'/' -f2-`
    NAME=`echo "$line" | cut -d'/' -f3`
    cp $DIRECTORY 0x17-dynamic_libraries/$NAME
done <<< "$list"
