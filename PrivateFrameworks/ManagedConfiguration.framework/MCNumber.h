/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCNumber : NSObject <NSSecureCoding> {
    NSNumber * _number;
}

@property (nonatomic, retain) NSNumber *number;

+ (id)numberWithInt:(int)arg1;
+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptionWithLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)number;
- (void)setNumber:(id)arg1;

@end