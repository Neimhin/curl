desc "quick ech test"
task :quick_test do
  puts "Running quick tests..."
  system("LD_LIBRARY_PATH=\"$HOME/code/openssl\" bash -x ./src/curl -vvv --doh-url https://one.one.one.one/dns-query --ech hard https://draft-13.esni.defo.ie:9413 | grep SSL_ECH_STATUS --color")
end

desc "quick ech test"
task :google do
  puts "Running quick tests..."
  system("LD_LIBRARY_PATH=\"$HOME/code/openssl\" ./src/curl -vvv https://www.google.com | tee google.com.html")
end

desc "--sech option --sech-version 1"
task :sech_option do
  system("LD_LIBRARY_PATH=\"$HOME/code/openssl\" ./src/curl --sech --sech-version 1 -vvv --doh-url https://one.one.one.one/dns-query --ech hard https://draft-13.esni.defo.ie:9413 | grep SSL_ECH_STATUS --color")
end

desc "test local openssl ech enabled server"
task :local_openssl_test do
  puts "Making ECH request to local openssl server..."
  system("LD_LIBRARY_PATH=\"$HOME/code/openssl\" ./src/curl -vvv --doh-url https://one.one.one.one/dns-query --ech ecl:AD7+DQA61AAgACAlQNFdgm0LISQ/wMEoaIH8JPij64FTD3WoJlHl7wEpGgAEAAEAAQALZXhhbXBsZS5jb20AAA== --connect-to loclahost:8443 https://example.com")
end

