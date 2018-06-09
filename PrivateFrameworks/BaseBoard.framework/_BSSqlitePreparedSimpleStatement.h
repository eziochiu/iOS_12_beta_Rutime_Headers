/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface _BSSqlitePreparedSimpleStatement : BSSqlitePreparedStatement <BSSqliteDatabaseConnectionObserver> {
    struct sqlite3_stmt { } * _statement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (int)_bindKey:(id)arg1 value:(id)arg2;
- (int)_bindParameterIndex:(int)arg1 dataValue:(id)arg2;
- (int)_bindParameterIndex:(int)arg1 nullValue:(id)arg2;
- (int)_bindParameterIndex:(int)arg1 numberValue:(id)arg2;
- (int)_bindParameterIndex:(int)arg1 stringValue:(id)arg2;
- (id)_sqliteError:(int)arg1;
- (void)dealloc;
- (bool)executeWithBindings:(id)arg1 resultRowHandler:(id /* block */)arg2 error:(out id*)arg3;
- (id)initWithDatabaseConnection:(id)arg1 statement:(struct sqlite3_stmt { }*)arg2;
- (void)sqliteDatabaseConnectionWillClose:(id)arg1;

@end
