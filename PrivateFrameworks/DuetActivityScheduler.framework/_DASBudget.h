/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASBudget : NSObject <NSCopying, NSSecureCoding> {
    unsigned char  _allocationType;
    double  _balance;
    id /* block */  _callback;
    double  _capacity;
    double  _maxBudgetValue;
    double  _minBudgetValue;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned char allocationType;
@property (nonatomic, readonly) double balance;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, readonly) double capacity;
@property (nonatomic) double maxBudgetValue;
@property (nonatomic) double minBudgetValue;
@property (nonatomic, readonly) NSString *name;

+ (id)budgetWithName:(id)arg1 capacity:(double)arg2 allocationType:(unsigned char)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)allocationType;
- (double)balance;
- (id /* block */)callback;
- (double)capacity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)decrementBy:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)incrementBy:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 capacity:(double)arg2 allocationType:(unsigned char)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isPositive;
- (double)maxBudgetValue;
- (double)minBudgetValue;
- (id)name;
- (void)registerSignificantBudgetChangeCallback:(id /* block */)arg1;
- (void)setBalance:(double)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setMaxBudgetValue:(double)arg1;
- (void)setMinBudgetValue:(double)arg1;

@end
