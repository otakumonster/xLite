--  A2

DROP VIEW IF EXISTS a2;
CREATE VIEW a2 AS
SELECT DISTINCT
        cell.mcc,
        cell.mnc,
        cell.lac,
        cell.cid,
        (sum(CASE WHEN cell.lac != neig.lac THEN 1 ELSE 0 END) + 0.0)/count(*) as count
FROM cell_info AS cell, arfcn_list AS al, cell_info AS neig, config
ON cell.id = al.id AND al.arfcn = neig.bcch_arfcn
GROUP BY cell.id;