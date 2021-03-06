/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutBuilderAssociatedObjectEntity : HDHealthEntity

+ (long long)associateObject:(id)arg1 withBuilder:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (bool)enumerateAssociatedUUIDsForBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (long long)protectionClass;
+ (bool)removeAssociationFromBuilder:(id)arg1 toUUID:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)uniquedColumns;

@end
