ifconfig -a link | grep "ether " | cut -d " " -f2 | tr -d ' '
