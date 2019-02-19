#!python3
# generate_par_file.py

# Imports
import sys

class ParGenerator:

    def __init__(self, filename_in_dat):

        self.filename_in_dat = filename_in_dat

    def get_basename(self):

        pass

    def write_par_file(self, filename_par):

        with open(filename_par, 'w') as f_object:
            f_object.write('test_in.dat\n')
            f_object.write('test_out.dat\n')

        return


if __name__ == '__main__':

    # Check generate_par_file.py has a valid number of arguments
    if len(sys.argv) != 2:
        sys.exit('Usage: generate_par_file.py <filename_in_dat>')

    filename_in_dat = sys.argv[1]

