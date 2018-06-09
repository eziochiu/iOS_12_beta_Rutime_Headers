/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent {
    unsigned int  _reason;
    NSString * _targetBundleIdentifier;
    int  _targetPID;
}

@property (nonatomic) unsigned int reason;
@property (nonatomic, copy) NSString *targetBundleIdentifier;
@property (nonatomic) int targetPID;

- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)reason;
- (void)setReason:(unsigned int)arg1;
- (void)setTargetBundleIdentifier:(id)arg1;
- (void)setTargetPID:(int)arg1;
- (id)targetBundleIdentifier;
- (int)targetPID;

@end
