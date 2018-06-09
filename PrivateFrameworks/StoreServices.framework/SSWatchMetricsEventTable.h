/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSWatchMetricsEventTable : SSEventsTableBase

+ (id)databasePath;

- (bool)_migrateToVersion1;
- (bool)_migrateToVersion2;
- (bool)_migrateToVersion3;
- (bool)_migrateToVersion4;
- (bool)_migrateToVersion5;
- (bool)_migrateToVersion6;
- (bool)_migrateToVersion7;
- (bool)_setupDatabase;

@end
