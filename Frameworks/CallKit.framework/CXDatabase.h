/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXDatabase : NSObject {
    struct sqlite3 { } * _database;
    NSMutableDictionary * _sqlQueryToStatements;
    NSURL * _url;
}

@property (nonatomic, readonly) int countOfRecordsModifiedByLastQuery;
@property (nonatomic) struct sqlite3 { }*database;
@property (nonatomic, readonly) long long lastInsertedRowID;
@property (nonatomic, retain) NSMutableDictionary *sqlQueryToStatements;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)_statementForSQL:(id)arg1 transient:(bool)arg2 error:(id*)arg3;
- (bool)beginTransactionWithError:(id*)arg1;
- (bool)closeWithError:(id*)arg1;
- (bool)commitTransactionWithError:(id*)arg1;
- (int)countOfRecordsModifiedByLastQuery;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (id)description;
- (bool)enableForeignKeysWithError:(id*)arg1;
- (bool)executeSQL:(id)arg1 error:(id*)arg2;
- (bool)executeSQL:(id)arg1 withBindings:(id)arg2 error:(id*)arg3;
- (bool)executeSQL:(id)arg1 withBindings:(id)arg2 transient:(bool)arg3 error:(id*)arg4;
- (bool)executeSQL:(id)arg1 withStatementPreparationBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)executeSQL:(id)arg1 withStatementPreparationBlock:(id /* block */)arg2 transient:(bool)arg3 error:(id*)arg4;
- (id)init;
- (id)initWithURL:(id)arg1 readOnly:(bool)arg2 error:(id*)arg3;
- (long long)lastInsertedRowID;
- (id)namesOfColumnsInTableWithName:(id)arg1 error:(id*)arg2;
- (bool)performTransactionWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)rollbackTransactionWithError:(id*)arg1;
- (bool)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 resultRowHandler:(id /* block */)arg4 error:(id*)arg5;
- (bool)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 transient:(bool)arg4 resultRowHandler:(id /* block */)arg5 error:(id*)arg6;
- (bool)setBusyTimeout:(double)arg1 error:(id*)arg2;
- (void)setDatabase:(struct sqlite3 { }*)arg1;
- (void)setSqlQueryToStatements:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)sqlQueryToStatements;
- (id)url;
- (bool)vacuumWithError:(id*)arg1;

@end
