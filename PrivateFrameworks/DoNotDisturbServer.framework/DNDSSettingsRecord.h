/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSSettingsRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    DNDSBehaviorSettingsRecord * _behaviorSettings;
    DNDSBypassSettingsRecord * _bypassSettings;
    DNDSScheduleSettingsRecord * _scheduleSettings;
}

@property (nonatomic, readonly, copy) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (nonatomic, readonly, copy) DNDSBypassSettingsRecord *bypassSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) DNDSScheduleSettingsRecord *scheduleSettings;
@property (readonly) Class superclass;

+ (id)backingStoreWithFileURL:(id)arg1;
+ (id)migrateDictionaryRepresentations:(id)arg1 withVersionNumber:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_initWithBehaviorSettings:(id)arg1 bypassSettings:(id)arg2 scheduleSettings:(id)arg3;
- (id)_initWithRecord:(id)arg1;
- (id)behaviorSettings;
- (id)bypassSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)scheduleSettings;

@end
