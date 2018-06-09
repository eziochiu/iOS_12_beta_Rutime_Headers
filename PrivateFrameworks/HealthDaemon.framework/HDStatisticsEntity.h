/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStatisticsEntity : HDHealthEntity

+ (id)columnsDefinition;
+ (id)databaseTable;
+ (bool)deleteStatisticsForOwner:(id)arg1 type:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)enumerateStatisticsForOwner:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (long long)protectionClass;
+ (bool)setStatistics:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 calculator:(id)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (id)statisticsForOwner:(id)arg1 type:(id)arg2 anchor:(id*)arg3 calculator:(id*)arg4 transaction:(id)arg5 error:(id*)arg6;
+ (id)uniquedColumns;

@end
