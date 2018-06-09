/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity

+ (id)badgeForDomain:(long long)arg1 profile:(id)arg2 error:(out id*)arg3;
+ (id)databaseTable;
+ (id)keyForNotificationDomain:(long long)arg1 error:(out id*)arg2;
+ (long long)protectionClass;
+ (bool)setBadge:(id)arg1 forDomain:(long long)arg2 profile:(id)arg3 error:(out id*)arg4;

@end
