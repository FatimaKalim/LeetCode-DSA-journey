# Write your MySQL query statement below
SELECT p.PRODUCT_NAME,s.YEAR,s.PRICE
 FROM Sales s JOIN Product p
 ON s.product_id=p.product_id