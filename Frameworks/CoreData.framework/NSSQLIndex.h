/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLIndex : NSObject {
    NSMutableArray * _createStrings;
    NSMutableArray * _dropStrings;
    NSFetchIndexDescription * _indexDescription;
    NSSQLEntity * _sqlEntity;
    NSMutableArray * _updateStrings;
}

@property (nonatomic, retain) NSMutableArray *createTableStatements;
@property (nonatomic, retain) NSMutableArray *dropTableStatements;
@property (nonatomic, readonly, retain) NSFetchIndexDescription *indexDescription;
@property (nonatomic, readonly, retain) NSSQLEntity *sqlEntity;
@property (nonatomic, retain) NSMutableArray *updateTableStatements;

- (id)bulkUpdateStatementsForStore:(id)arg1;
- (id)createStatementsForStore:(id)arg1;
- (id)createTableStatements;
- (void)dealloc;
- (id)dropStatementsForStore:(id)arg1;
- (id)dropTableStatements;
- (id)indexDescription;
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setCreateTableStatements:(id)arg1;
- (void)setDropTableStatements:(id)arg1;
- (void)setUpdateTableStatements:(id)arg1;
- (id)sqlEntity;
- (id)updateTableStatements;

@end
