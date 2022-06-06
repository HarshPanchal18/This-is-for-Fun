from PyQt5 import QtWidgets  # For Method 1
from tkinter import filedialog  # For Method 2
import tkinter as tk  # For Method 2

# Method 1


def select_files(directory_location=None):
    qtapp = QApplication([directory_location])
    qtwgt = QtWidgets.QWidget()
    filenames, _ = QFileDialog.getOpenFileNames(qtwgt)
    return filenames


def main():
    filenames = select_files()
    print("You selected:\n", "\n".join(filename for filename in filenames))


if __name__ == "__main__":
    main()


# Method 2

root = tk.Tk()
root.withdraw()

file_path = filedialog.askopenfilename()
print(file_path)
