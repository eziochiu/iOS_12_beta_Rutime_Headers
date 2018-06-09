/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLManyToMany : NSSQLRelationship {
    NSString * _columnName;
    NSString * _correlationTableName;
    NSString * _orderColumnName;
}

- (void)_setColumnName:(id)arg1;
- (void)_setCorrelationTableName:(id)arg1;
- (void)_setInverseManyToMany:(id)arg1;
- (void)_setOrderColumnName:(id)arg1;
- (id)columnName;
- (unsigned char)columnSQLType;
- (id)correlationTableName;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)inverseColumnName;
- (id)inverseManyToMany;
- (id)inverseOrderColumnName;
- (bool)isMaster;
- (bool)isReflexive;
- (bool)isTableSchemaEqual:(id)arg1;
- (id)orderColumnName;
- (unsigned char)orderColumnSQLType;

@end
