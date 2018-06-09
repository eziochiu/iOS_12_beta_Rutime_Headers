/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface _BSSqlitePreparedCompoundStatement : BSSqlitePreparedStatement {
    NSArray * _statements;
}

- (void).cxx_destruct;
- (bool)executeWithBindings:(id)arg1 resultRowHandler:(id /* block */)arg2 error:(out id*)arg3;
- (id)initWithDatabaseConnection:(id)arg1 statements:(id)arg2;

@end
