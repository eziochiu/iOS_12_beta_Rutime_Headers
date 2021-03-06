/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncRecord : NSObject {
    CKRecord * _record;
}

@property (nonatomic, retain) CKRecord *record;

+ (id)_valueInRecord:(id)arg1 forKey:(id)arg2 type:(Class)arg3 encrypted:(bool)arg4 error:(id*)arg5;
+ (bool)hasFutureSchema:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)record;
- (void)setRecord:(id)arg1;

@end
