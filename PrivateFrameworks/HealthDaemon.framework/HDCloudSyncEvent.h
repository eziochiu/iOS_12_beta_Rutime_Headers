/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncEvent : NSObject {
    NSString * _cloudKitIdentifer;
    bool  _cloudKitManateeEnabled;
    NSString * _containerIdentifier;
    NSDate * _eventTime;
    bool  _internalSettingManateeEnabled;
    long long  _operation;
    NSUUID * _operationID;
    unsigned long long  _options;
    HDProfile * _profile;
    long long  _reason;
    NSString * _syncCirclePrefix;
    NSUUID * _syncID;
}

@property (nonatomic, readonly, copy) NSString *cloudKitIdentifer;
@property (nonatomic, readonly) bool cloudKitManateeEnabled;
@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, readonly, copy) NSDate *eventTime;
@property (nonatomic, readonly) bool internalSettingManateeEnabled;
@property (nonatomic, readonly) long long operation;
@property (nonatomic, readonly, copy) NSUUID *operationID;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly, copy) NSString *syncCirclePrefix;
@property (nonatomic, readonly, copy) NSUUID *syncID;

- (void).cxx_destruct;
- (id)cloudKitIdentifer;
- (bool)cloudKitManateeEnabled;
- (id)codableEventForAWDSubmission;
- (id)containerIdentifier;
- (id)description;
- (id)eventTime;
- (id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 cloudKitManateeEnabled:(bool)arg10 internalSettingManateeEnabled:(bool)arg11;
- (bool)internalSettingManateeEnabled;
- (long long)operation;
- (id)operationID;
- (unsigned long long)options;
- (id)profile;
- (long long)reason;
- (id)syncCirclePrefix;
- (id)syncID;

@end
