/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutBuilderDataSourceEntity : HDHealthEntity

+ (id)columnsDefinition;
+ (id)databaseTable;
+ (bool)enumerateDataSourcesForWorkoutBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (long long)protectionClass;
+ (bool)removeDataSourceWithIdentifier:(id)arg1 fromWorkoutBuilder:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)storeDataSourceWithIdentifier:(id)arg1 archivedState:(id)arg2 workoutBuilder:(id)arg3 transaction:(id)arg4 error:(id*)arg5;

@end
