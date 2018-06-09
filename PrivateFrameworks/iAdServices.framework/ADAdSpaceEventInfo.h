/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAdSpaceEventInfo : NSObject <NSSecureCoding> {
    long long  _lastErrorCode;
    unsigned long long  _reuseCount;
    unsigned long long  _screenfuls;
    unsigned long long  _slotPosition;
}

@property (nonatomic) long long lastErrorCode;
@property (nonatomic) unsigned long long reuseCount;
@property (nonatomic) unsigned long long screenfuls;
@property (nonatomic) unsigned long long slotPosition;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipientInfo:(id)arg1 reuseCount:(unsigned long long)arg2;
- (long long)lastErrorCode;
- (unsigned long long)reuseCount;
- (unsigned long long)screenfuls;
- (void)setLastErrorCode:(long long)arg1;
- (void)setReuseCount:(unsigned long long)arg1;
- (void)setScreenfuls:(unsigned long long)arg1;
- (void)setSlotPosition:(unsigned long long)arg1;
- (unsigned long long)slotPosition;

@end
