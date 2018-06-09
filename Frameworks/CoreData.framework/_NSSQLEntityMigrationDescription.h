/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSSQLEntityMigrationDescription : NSObject {
    NSMutableArray * _addedManyToManys;
    NSSQLEntity * _dstEntity;
    NSEntityMapping * _entityMapping;
    int  _migrationType;
    NSMutableArray * _pendingTransforms;
    NSMutableArray * _processedTransforms;
    NSMutableArray * _removedManyToManys;
    NSMutableDictionary * _sourceEntitiesByToOneWithNewEntityKey;
    NSMutableDictionary * _sqlValuesByColumnName;
    NSSQLEntity * _srcEntity;
    NSMutableArray * _transformedManyToManys;
}

@property (nonatomic, readonly) NSSQLEntity *destinationEntity;
@property (nonatomic, readonly) NSEntityMapping *entityMapping;
@property (nonatomic, readonly) int migrationType;
@property (nonatomic, readonly) NSSQLEntity *sourceEntity;

- (void)_generateSQLValueMappingsWithMigrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg1;
- (void)_populateSQLValuesByPropertyFromTransforms:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (void)_populateSQLValuesForDestinationToOne:(id)arg1 fromSourceToOne:(id)arg2;
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg1;
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (id)addedManyToManys;
- (void)dealloc;
- (id)description;
- (id)destinationEntity;
- (id)entityMapping;
- (id)initWithEntityMapping:(id)arg1 sourceEntity:(id)arg2 destinationEntity:(id)arg3;
- (int)migrationType;
- (id)nextPropertyTransform;
- (id)removedManyToManys;
- (id)sourceEntitiesByToOneWithNewEntityKey;
- (id)sourceEntity;
- (id)sqlValueForColumnName:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (id)transformedManyToManys;

@end
