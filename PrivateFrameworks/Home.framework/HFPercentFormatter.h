/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFPercentFormatter : NSNumberFormatter <NSCopying> {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
}

@property (nonatomic, copy) NSNumber *maximumValue;
@property (nonatomic, copy) NSNumber *minimumValue;

+ (id)_percentageFromValue:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3;
+ (id)_valueFromPercentage:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)init;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2;
- (id)maximumValue;
- (id)minimumValue;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForRelativePercentValue:(id)arg1;

@end
