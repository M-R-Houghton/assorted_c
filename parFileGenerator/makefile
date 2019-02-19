ALL:			 parfiles

DAT_DIR 		 = dat
PAR_DIR 		 = par

DAT 			 = $(wildcard $(DAT_DIR)/*/*_in.dat)
PAR              = $(patsubst %_in.dat, %.par, $(DAT))

basedats: 
	@echo "Grabbing basenames"
	@echo $(basename $(DAT))

%.par: %_in.dat 
	@echo "Generating $@ from $<" 
	cd $(PAR_DIR); python3 generate_par_file.py $<

parfiles: $(PAR)
	@echo "Generating par files $(PAR)"

.PHONY : clean
clean: 
	rm -f $(PAR_DIR)/*.par
