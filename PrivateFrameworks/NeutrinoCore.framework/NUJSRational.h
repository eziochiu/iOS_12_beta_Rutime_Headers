/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSRational : NSObject <NUJSRationalExport> {
    long long  _denominator;
    long long  _numerator;
}

@property long long denominator;
@property long long numerator;

- (long long)denominator;
- (id)init;
- (id)initWithNumerator:(long long)arg1 denominator:(long long)arg2;
- (long long)numerator;
- (void)setDenominator:(long long)arg1;
- (void)setNumerator:(long long)arg1;
- (double)toDouble;

@end
