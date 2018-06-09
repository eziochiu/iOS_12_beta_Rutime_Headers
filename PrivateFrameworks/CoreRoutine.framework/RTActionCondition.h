/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTActionCondition : NSObject <NSSecureCoding> {
    RTAction * _action;
    NSArray * _dateIntervals;
}

@property (nonatomic, readonly) RTAction *action;
@property (nonatomic, readonly) NSArray *dateIntervals;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)dateIntervals;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAction:(id)arg1 dateIntervals:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionCondition:(id)arg1;

@end
