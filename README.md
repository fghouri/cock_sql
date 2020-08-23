# cock_sql
cock_sql - MySQL and SQLite in Pawn

## Natives
CDB stands for SQLite, CSQL for MySQL.
```pawn
native cock_tquery(CSQL:handle, const query[], const callback[] = "", const format[] = "", {Float, _}...);
native cock_pquery(CSQL:handle, const query[], const callback[] = "", const format[] = "", {Float, _}...);
native cock_close(CSQL:handle) = mysql_close;
native Cockhe:cock_query(CSQL:handle, const query[], bool:use_cache = true);
native CSQL:cock_connect(const host[], const user[], const password[], const database[], CockSQLOpt:option_id = CockSQLOpt:0);
native CSQL:cock_connect_file(const file_name[] = "cocksql.ini");

native CDB:cocklite_open(const name[]);
native cocklite_close(CDB:db);
native cocklite_query(CDB:db, const query[]);
native cocklite_free_result(CBResult:dbresult);
native cocklite_next_row(CDBResult:dbresult);
native cocklite_num_rows(CDBResult:dbresult);
native cocklite_num_fields(CDBResult:dbresult);
native cocklite_get_field(CDBResult:result, field, result[], maxlength = sizeof result);
native cocklite_get_field_int(CDBResult:result, field = 0);
native cocklite_get_field_float(CDBResult:result, field = 0);
native bool:cocklite_get_field_bool(CDBResult:result, field = 0);
native cocklite_get_field_assoc(CDBResult:result, const field[], result[], maxlength = sizeof result);
native cocklite_get_field_assoc_int(CDBResult:result, const field[]);
native cocklite_get_field_assoc_float(CDBResult:result, const field[]);
native bool:cocklite_get_field_assoc_bool(CDBResult:result, const field[]);
```
