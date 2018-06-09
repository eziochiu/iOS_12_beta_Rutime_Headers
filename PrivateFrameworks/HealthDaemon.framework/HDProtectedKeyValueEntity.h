/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (long long)_deviceLocalCategory;
+ (id)_keyForDataType:(id)arg1 error:(id*)arg2;
+ (id)databaseTable;
+ (id)keyForUserCharacteristicType:(id)arg1;
+ (id)modificationDateForCharacteristicWithType:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)removeUserDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)setUserCharacteristic:(id)arg1 forType:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)setUserDefaultValue:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)userCharacteristicForType:(id)arg1 profile:(id)arg2 entity:(id*)arg3 error:(id*)arg4;
+ (id)userDefaultForKey:(id)arg1 bundleIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;

@end
