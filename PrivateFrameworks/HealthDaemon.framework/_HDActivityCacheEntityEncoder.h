/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDActivityCacheEntityEncoder : HDEntityEncoder

- (void)_applyActivityCacheStatisticsToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3;
- (void)_applyPrivateActivityCachePropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3;
- (id)_decodeActivityQuantityStatisticsInfosWithRow:(struct HDSQLiteRow { }*)arg1 column:(int)arg2;
- (bool)_shouldIncludeActivityCachePrivateProperties;
- (bool)_shouldIncludeActivityCacheStatistics;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)orderedProperties;

@end
