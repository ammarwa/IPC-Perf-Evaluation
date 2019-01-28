make clean
make
wget https://sparse.tamu.edu/MM/Sybrandt/MOLIERE_2016.tar.gz
tar -xzf MOLIERE_2016.tar.gz
sudo perf stat ./testRD

