# cock_sql
cock_sql - MySQL and SQLite in Pawn

## Natives
CDB stands for SQLite, CSQL for MySQL.
```pawn
native cock_tquery(CSQL:handle, const query[], const callback[] = "", const format[] = "", {Float, _}...);
native cock_pquery(CSQL:handle, const query[], const callback[] = "", const format[] = "", {Float, _}...);
native cocksql_close(CSQL:handle) = mysql_close;
native Cockhe:cock_query(CSQL:handle, const query[], bool:use_cache = true);
native CSQL:cock_connect(const host[], const user[], const password[], const database[], CockSQLOpt:option_id = CockSQLOpt:0);
native CSQL:cock_connect_file(const file_name[] = "cocksql.ini");

native CDB:cock_open(const name[]);
native cock_close(CDB:db);
native cock_query(CDB:db, const query[]);
native cock_free_result(CBResult:dbresult);
native cock_next_row(CDBResult:dbresult);
native cock_num_rows(CDBResult:dbresult);
native cock_num_fields(CDBResult:dbresult);
native cock_get_field(CDBResult:result, field, result[], maxlength = sizeof result);
native cock_get_field_int(CDBResult:result, field = 0);
native cock_get_field_float(CDBResult:result, field = 0);
native bool:cock_get_field_bool(CDBResult:result, field = 0);
native cock_get_field_assoc(CDBResult:result, const field[], result[], maxlength = sizeof result);
native cock_get_field_assoc_int(CDBResult:result, const field[]);
native cock_get_field_assoc_float(CDBResult:result, const field[]);
native bool:cock_get_field_assoc_bool(CDBResult:result, const field[]);
