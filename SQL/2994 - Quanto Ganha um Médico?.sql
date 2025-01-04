SELECT doctors.name AS "name", ROUND(SUM(150 * attendances.hours + (150 * attendances.hours * work_shifts.bonus / 100)), 1) AS "salary"
FROM doctors INNER JOIN attendances
ON doctors.id = attendances.id_doctor INNER JOIN work_shifts
ON attendances.id_work_shift = work_shifts.id
GROUP BY doctors.id
ORDER BY salary DESC;