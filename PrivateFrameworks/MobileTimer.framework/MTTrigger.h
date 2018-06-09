/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTrigger : NSObject <NAEquatable, NSCopying, NSSecureCoding> {
    NSDate * _triggerDate;
    unsigned long long  _triggerType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isForAlert;
@property (nonatomic, readonly) bool isForGoToBed;
@property (nonatomic, readonly) bool isForSnooze;
@property (nonatomic, readonly) bool isScheduled;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *triggerDate;
@property (nonatomic) unsigned long long triggerType;

+ (id)_stringForType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)triggerWithDate:(id)arg1 triggerType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTrigger:(id)arg1;
- (bool)isForAlert;
- (bool)isForGoToBed;
- (bool)isForSnooze;
- (bool)isScheduled;
- (void)setTriggerDate:(id)arg1;
- (void)setTriggerType:(unsigned long long)arg1;
- (id)triggerDate;
- (unsigned long long)triggerType;

@end
