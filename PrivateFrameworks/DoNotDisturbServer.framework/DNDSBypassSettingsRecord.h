/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSBypassSettingsRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSString * _immediateBypassCNGroupIdentifier;
    NSNumber * _immediateBypassEventSourceType;
    NSNumber * _repeatEventSourceBehaviorEnabledSetting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *immediateBypassCNGroupIdentifier;
@property (nonatomic, readonly, copy) NSNumber *immediateBypassEventSourceType;
@property (nonatomic, readonly, copy) NSNumber *repeatEventSourceBehaviorEnabledSetting;
@property (readonly) Class superclass;

+ (id)migrateDictionaryRepresentations:(id)arg1 withVersionNumber:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_initWithImmediateBypassEventSourceType:(id)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(id)arg3;
- (id)_initWithRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)immediateBypassCNGroupIdentifier;
- (id)immediateBypassEventSourceType;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)repeatEventSourceBehaviorEnabledSetting;

@end
