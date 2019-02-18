ALL:			 parfiles

DAT_DIR 		 = dat
PAR_DIR 		 = par

DAT 			 = $(wildcard $(DAT_DIR)/*/*_in.dat)
PAR 			 = $(wildcard $(PAR_DIR)/*.par)

basedats: 
	@echo "Grabbing basenames"
	@echo $(basename $(DAT))

parfiles: $(DAT)
	cp $(DAT) $(PAR_DIR)

.PHONY : clean
clean: 
	rm -f $(PAR_DIR)/*.par
