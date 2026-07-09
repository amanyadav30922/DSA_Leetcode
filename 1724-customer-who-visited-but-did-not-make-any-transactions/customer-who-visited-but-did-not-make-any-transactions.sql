# Write your MySQL query statement below
Select customer_id,count(*) as  count_no_trans
from Visits as v
LefT join
Transactions as t
ON
v.visit_id=t.visit_id
where t.transaction_id IS NULL
group by customer_id;