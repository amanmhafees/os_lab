i=1
echo Enter the limit[N]
read N
while [ $i -le $N ]
do
i=$(expr $i + 1)
sum=$(($sum+ $i))
done
echo Sum=$sum       
#echo similar to printf in c
#read similar to scanf in c

#Enter the limit
#10
#Sum=65