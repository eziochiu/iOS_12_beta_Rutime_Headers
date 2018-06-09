/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteStatement : NSObject {
    NSMutableArray * _bindIntarrays;
    NSMutableArray * _bindVariables;
    struct sqlite3_stmt { } * _cachedSQLiteStatement;
    NSCachedFetchRequestInfo * _cachedStatementInfo;
    NSSQLEntity * _entity;
    NSSQLEntity * _fakeEntityForFetch;
    bool  _isImpossibleCondition;
    void * _owner;
    NSString * _sqlString;
    bool  _trackChangedRowCount;
}

@property (nonatomic, retain) NSCachedFetchRequestInfo *cachedStatementInfo;
@property (nonatomic) bool trackChangedRowCount;

- (unsigned int)addBindIntarray:(id)arg1;
- (unsigned int)addBindVariable:(id)arg1;
- (id)bindIntarrays;
- (id)bindVariables;
- (void)cacheFakeEntityForFetch:(id)arg1;
- (struct sqlite3_stmt { }*)cachedSQLiteStatement;
- (id)cachedStatementInfo;
- (void)clearCaches:(bool)arg1;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)fakeEntityForFetch;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 sqlString:(id)arg2;
- (bool)isImpossibleCondition;
- (bool)isReadOnly;
- (void)removeAllBindIntarrays;
- (void)removeAllBindVariables;
- (void)setBindIntarrays:(id)arg1;
- (void)setBindVariables:(id)arg1;
- (void)setCachedSQLiteStatement:(struct sqlite3_stmt { }*)arg1 forConnection:(id)arg2;
- (void)setCachedStatementInfo:(id)arg1;
- (void)setImpossibleCondition:(bool)arg1;
- (void)setSQLString:(id)arg1;
- (void)setTrackChangedRowCount:(bool)arg1;
- (id)sqlString;
- (bool)trackChangedRowCount;

@end
