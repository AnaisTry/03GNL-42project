#marche sur mac
cat /etc/passwd | sed '/^#/d' | cut -d ':' -f1 | awk '(NR+1)%2' | rev | sort -r | sed -n "$FT_LINE1","$FT_LINE2"p | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g' | tr -d '\n'