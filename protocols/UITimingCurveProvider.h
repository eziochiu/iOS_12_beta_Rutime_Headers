/* made by EzioChiu.
 */

@protocol UITimingCurveProvider <NSCoding, NSCopying>

@required

- (UICubicTimingParameters *)cubicTimingParameters;
- (UISpringTimingParameters *)springTimingParameters;
- (long long)timingCurveType;

@end
