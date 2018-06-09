/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface _BSSqliteDeferredPreparedSimpleStatement : _BSSqlitePreparedSimpleStatement {
    NSString * _deferredSql;
}

- (void).cxx_destruct;
- (bool)executeWithBindings:(id)arg1 resultRowHandler:(id /* block */)arg2 error:(out id*)arg3;
- (id)initWithDatabaseConnection:(id)arg1 deferredSql:(id)arg2;

@end