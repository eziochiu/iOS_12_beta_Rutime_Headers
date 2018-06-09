/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMetadataKeyEntity : HDHealthEntity

+ (id)_entityForKey:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_insertEntityWithKey:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_keyForPersistentID:(id)arg1 database:(id)arg2;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;

@end
