SELECT MAX(SALARY) AS SecondHighestSalary FROM Employee WHERE Salary < (SELECT MAX(salary) FROM Employee);
