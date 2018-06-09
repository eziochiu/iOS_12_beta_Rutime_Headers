/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {
    NSSQLUpdateColumnsIntermediate * _updateColumns;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithEntity:(id)arg1 inScope:(id)arg2;
- (bool)isUpdateScoped;
- (void)setUpdateColumnsIntermediate:(id)arg1;
- (id)updateColumnsIntermediate;

@end