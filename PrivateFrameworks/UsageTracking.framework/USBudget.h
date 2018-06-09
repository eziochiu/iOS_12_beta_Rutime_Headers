/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USBudget : NSObject <NSSecureCoding> {
    NSString * _calendarIdentifier;
    NSString * _identifier;
    NSSet * _items;
    NSDictionary * _schedule;
    long long  _type;
}

@property (readonly, copy) NSString *calendarIdentifier;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSSet *items;
@property (readonly, copy) NSDictionary *schedule;
@property (readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)calendarIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 items:(id)arg2 schedule:(id)arg3 calendarIdentifier:(id)arg4 identifier:(id)arg5;
- (id)items;
- (id)schedule;
- (long long)type;

@end
