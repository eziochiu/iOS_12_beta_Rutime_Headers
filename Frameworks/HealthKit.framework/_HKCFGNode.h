/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCFGNode : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOfString;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfString;

- (id)evaluate;
- (id)initWithRangeOfString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfString;
- (void)setRangeOfString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
