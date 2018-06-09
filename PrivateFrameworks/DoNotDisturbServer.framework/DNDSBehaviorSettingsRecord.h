/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSBehaviorSettingsRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSNumber * _interruptionBehavior;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *interruptionBehavior;
@property (readonly) Class superclass;

+ (id)migrateDictionaryRepresentations:(id)arg1 withVersionNumber:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_initWithInterruptionBehavior:(id)arg1;
- (id)_initWithRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)interruptionBehavior;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
