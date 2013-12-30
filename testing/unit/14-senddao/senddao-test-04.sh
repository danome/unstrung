#!/bin/sh

SENDDAO=${SENDDAO-../../../programs/senddao/senddao}
PCAP04=../OUTPUTS/senddao-test-04out.pcap

${SENDDAO} --fake --outpcap ${PCAP04} -i wlan0 -v --dagid thisismydicedag2 --sequence 11 --instance 43 --prefix fdfd:abcd:ef01::/48 2>&1 |
  tee ../OUTPUTS/senddao-test-04.raw | diff -B -w - senddao-test-04.out

# disabled #2901
#tcpdump -t -n -r ${PCAP04} -v -v | tee ../OUTPUTS/senddao-test-04-pcap.txt | diff - senddao-test-04-pcap.txt
