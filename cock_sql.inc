#if defined _inc_cock_sql
	#endinput
#endif
#define _inc_cock_sql

#tryinclude <a_mysql>

#if defined mysql_included
	#define CSQL: MySQL:
	#define Cockhe: Cache:
	#define CockSQLOpt: MySQLOpt:
	#define COCKSQL_INVALID_CACHE MYSQL_INVALID_CACHE
	#define COCKSQL_INVALID_HANDLE MYSQL_INVALID_HANDLE
	#define COCKSQL_IVALID_ORM MYSQL_INVALID_ORM

	native cock_tquery(CSQL:handle, const query[], const callback[] = "", const format[] = "", {Float, _}...) = mysql_tquery;
	native cock_pquery(CSQL:handle, const query[], const callback[] = "", const format[] = "", {Float, _}...) = mysql_pquery;
	native cock_close(CSQL:handle) = mysql_close;
	native Cockhe:cock_query(CSQL:handle, const query[], bool:use_cache = true) = mysql_query;
	native CSQL:cock_connect(const host[], const user[], const password[], const database[], CockSQLOpt:option_id = CockSQLOpt:0) = mysql_connect;
	native CSQL:cock_connect_file(const file_name[] = "cocksql.ini") = mysql_connect_file;
#endif

#define CDB: DB:
#define CDBResult: DBResult:

native CDB:cocklite_open(const name[]) = db_open;
native cocklite_close(CDB:db) = db_close;
native cocklite_query(CDB:db, const query[]) = db_query;
native cocklite_free_result(CBResult:dbresult) = db_free_result;
native cocklite_next_row(CDBResult:dbresult) = db_next_row;
native cocklite_num_rows(CDBResult:dbresult) = db_num_rows;
native cocklite_num_fields(CDBResult:dbresult) = db_num_rows;

native cocklite_get_field(CDBResult:result, field, result[], maxlength = sizeof result) = db_get_field;
native cocklite_get_field_int(CDBResult:result, field = 0) = db_get_field_int;
native cocklite_get_field_float(CDBResult:result, field = 0) = db_get_field_float;
native bool:cocklite_get_field_bool(CDBResult:result, field = 0) = bool:db_get_field_int;
native cocklite_get_field_assoc(CDBResult:result, const field[], result[], maxlength = sizeof result) = db_get_field_assoc;
native cocklite_get_field_assoc_int(CDBResult:result, const field[]) = db_get_field_assoc_int;
native cocklite_get_field_assoc_float(CDBResult:result, const field[]) = db_get_field_assoc_float;
native bool:cocklite_get_field_assoc_bool(CDBResult:result, const field[]) = bool:db_get_field_assoc_float;
