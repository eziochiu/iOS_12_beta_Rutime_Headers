/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetricsDatabaseSchema : NSObject

+ (bool)_addSkipBackupAttribute:(bool)arg1 forURL:(id)arg2;
+ (void)_applyProtectionClassForDirectoryAtURL:(id)arg1;
+ (id)_containerURL;
+ (bool)createOrUpdateSchemaUsingConnection:(id)arg1;
+ (id)databasePathForContainerId:(id)arg1;
+ (void)migrateVersion0to1WithMigration:(id)arg1;

@end
