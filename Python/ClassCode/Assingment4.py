import sqlite3
conn = sqlite3.connect("Students.db")
cur = conn.cursor()

cur.execute('''CREATE TABLE StudentMarks(
          RegNo INT PRIMARY KEY,
          Name VARCHAR(50),
          Gender VARCHAR(10),
          CGPA REAL,
          State VARCHAR(10),
          Country VARCHAR(10)
          )
          ''')

cur.execute('''INSERT INTO StudentMarks (RegNo, Name, Gender, CGPA, State, Country)
VALUES
    (101, 'John Doe', 'Male', 8.5, 'California', 'USA'),
    (102, 'Jane Smith', 'Female', 9.2, 'Texas', 'USA'),
    (103, 'Rahul Gupta', 'Male', 7.8, 'Delhi', 'India'),
    (104, 'Maria Rodriguez', 'Female', 2.35, 'Madrid', 'Spain'),
    (105, 'Heather Stapleton', 'Female', '5.0', 'Texas', 'USA'),
    (106, 'John McWoter', 'Male', 7.47, 'Rajasthan', 'India'),
    (107, 'Aarav Sharma', 'Male', 6.8, 'MP', 'India'),
    (108, 'Christan Allister', 'Male', 9.96, 'Califonia', 'USA'),
    (109, 'Arjun Rao', 'Male', 7.8, 'Delhi', 'India'),
    (110, 'Maria Rodriguez', 'Female', 8.0, 'London', 'Uk'),
    (111, 'Daniel Willingham', 'Male', 9.2, 'Califonia', 'USA'),
    (112, 'Advait Joshi', 'Male', 5.6, 'MP', 'India'),
    (113, 'Aanya Patel', 'Female', 3.8, 'UP', 'India'),
    (114, 'Vihaan Malhotra', 'Male', 7.8, 'Sikkim', 'India'),
    (115, 'Kabir Singh', 'Male', 6.8, 'Delhi', 'India'),
    (116, 'Ishita Desai', 'Female', 7.4, 'Delhi', 'India'),
    (117, 'Shaurya Reddy', 'Male', 7.8, 'Kerela', 'India'),
    (118, 'Ananya Gupta', 'Female', 7.8, 'Raipur', 'India'),
    (119, 'Dhruv Sharma', 'Male', 3.1, 'Delhi', 'India'),
    (120, 'Aadhya Iyer', 'Male', 4.5, 'Tamil Nadu', 'India'),
    (121, 'Saanvi Verma', 'Female', 7.8, 'MP', 'India'),
    (122, 'Myra Kapoor', 'Female', 6.5, 'Bhopal', 'India'),
    (123, 'Ambar Gupta', 'Male', 8.7, 'Delhi', 'India'),
    (124, 'Rudra Choudhary', 'Male', 7.4, 'UP', 'India'),
    (125, 'Jules Amros', 'Female', 8.0, 'Madrid', 'Spain'),
    (126, 'Carol Dweck', 'Male', 5.5, 'New York', 'USA'),
    (127, 'Nolan Brooks', 'Male', 8.5, 'Ohio', 'USA'),
    (128, 'Luna Harper', 'Female', 8.7, 'London', 'Uk'),
    (129, 'Iris Kane', 'Female', 8.0, 'London', 'Uk'),
    (130, 'Avni Bhatia', 'Female', 7.8, 'Delhi', 'India'),
    (131, 'Abdul Rhaman', 'Male', 7.8, 'Bhopal', 'India'),
    (132, 'Rahul Agarwal', 'Male', 8.5, 'UP', 'India'),
    (133, 'Jannat Zubair', 'Female', 7.8, 'Mumbai', 'India'),
    (134, 'Sahana Mitra', 'Female', 6.5, 'Delhi', 'India'),
    (135, 'Kartik Sharma', 'Male', 8.8, 'Mumbai', 'India'),
    (136, 'Advit Rathore', 'Male', 5.8, 'UP', 'India'),
    (137, 'Lana Myer', 'Female', 7.0, 'Madrid', 'Spain'),
    (138, 'Chistan Harper', 'Male', 8.5, 'New York', 'USA'),
    (139, 'Aaron Warner', 'Male', 6.5, 'Ohio', 'USA'),
    (140, 'Luna Cane', 'Female', 4.0, 'London', 'Uk'),
    (141, 'Dante Russo', 'Male', 7.0, 'Lazio', 'Italy'),
    (142, 'Ahana Sen', 'Female', 7.8, 'Delhi', 'India'),
    (143, 'Nico Russo', 'Male', 7.8, 'Aosta Valley', 'Italy'),
    (144, 'Kanan Sharma', 'Male', 7.5, 'UP', 'India'),
    (145, 'Anjali SevKani', 'Female', 9.7, 'UP', 'India'),
    (146, 'Priti Khanna', 'Female', 6.5, 'Delhi', 'India'),
    (147, 'Vijay Kapoor', 'Male', 8.8, 'Delhi', 'India'),
    (148, 'Atharv Gandi', 'Male', 5.7, 'UP', 'India'),
    (149, 'Catalina Mario', 'Female', 8.0, 'Madrid', 'Spain'),
    (150, 'Tristan Cane', 'Male', 8.5, 'New York', 'USA')
          ''')

# cur.execute('''SELECT * FROM StudentMarks
#             WHERE CGPA = (SELECT MIN(CGPA) FROM StudentMarks);
# ''')
# print("Lowest CGPA:")
# print(cur.fetchone())


# cur.execute('''SELECT * FROM StudentMarks
#             WHERE CGPA = (SELECT MIN(CGPA) FROM StudentMarks);
# ''')
# print("Lowest CGPA:")
# print(cur.fetchone())

# data = cur.execute('''SELECT * FROM StudentMarks
#             ORDER BY CGPA ASC;
# ''')
# print(data)
conn.commit()
conn.close()

