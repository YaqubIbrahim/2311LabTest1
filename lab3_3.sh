#/bin/bash
input=y
while [[ "$input" == "Y" ]] || [[ "$input" == "y" ]];
do
echo "Continue?"
read input
if [[ "$input" == "Y" ]] || [[ "$input" == "y" ]];then
echo "Enter account number"
read acco
present= `cat account.txt|grep -w $acco|wc -l`
if [[ present -gt 0 ]];then
name= `cat account.txt | grep -w $acco | awk -F$'\t' '{print $2}'` 
details= `cat names.txt | grep -w "$name"`
address= `cat address.txt | grep -w $acco | awk -F$'\t' '{print $2}'`
echo "$details $address"
else
	echo "No such client"
fi
fi
done

