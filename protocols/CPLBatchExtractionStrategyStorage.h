/* made by EzioChiu.
 */

@protocol CPLBatchExtractionStrategyStorage <NSObject>

@required

- (<NSFastEnumeration> *)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(CPLScopedIdentifier *)arg2;
- (<NSFastEnumeration> *)allChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2 changeType:(unsigned long long)arg3;
- (<NSFastEnumeration> *)allChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2 trashed:(bool)arg3;
- (<NSFastEnumeration> *)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(CPLScopedIdentifier *)arg2;
- (<NSFastEnumeration> *)allChangesWithScopeIdentifier:(NSString *)arg1;
- (<NSFastEnumeration> *)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2;
- (CPLRecordChange *)changeWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (bool)hasChangesInScopeWithIdentifier:(NSString *)arg1;
- (bool)removeChange:(CPLRecordChange *)arg1 error:(id*)arg2;

@end
