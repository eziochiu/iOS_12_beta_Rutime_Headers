/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSSQLGenerator : NSObject {
    NSSQLiteAdapter * _adapter;
    NSMutableString * _selectList;
    NSMutableString * _sqlString;
    NSSQLiteStatement * _statement;
    NSMutableString * _whereClause;
}

+ (void)initialize;

- (void)_startSQL:(id)arg1;
- (void)appendSQL:(id)arg1;
- (void)appendWhereClause:(id)arg1;
- (void)appendWhereClauseToSQL;
- (void)buildWhereClauseForRow:(id)arg1 optLock:(long long)arg2;
- (void)dealloc;
- (id)initWithStatement:(id)arg1 forAdapter:(id)arg2;
- (void)prepareConstrainedValuesUpdateStatementWithRow:(id)arg1;
- (void)prepareDeleteStatementForRelationship:(id)arg1;
- (void)prepareDeleteStatementWithRow:(id)arg1;
- (void)prepareInsertStatementForRelationship:(id)arg1;
- (void)prepareInsertStatementWithRow:(id)arg1;
- (void)prepareInsertStatementWithRow:(id)arg1 includeConstraints:(bool)arg2;
- (void)prepareMasterReorderStatementForRelationship:(id)arg1;
- (void)prepareMasterReorderStatementPart2ForRelationship:(id)arg1;
- (void)prepareReorderStatementForRelationship:(id)arg1;
- (void)prepareUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2 withMask:(struct __CFBitVector { }*)arg3;
- (id)sqlString;

@end
