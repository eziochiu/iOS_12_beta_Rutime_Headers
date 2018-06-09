/* made by EzioChiu.
 */

@protocol TSWPDataDetectorProtocol <NSObject>

@required

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })calculateScanRangeForString:(NSString *)arg1 changedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (NSString *)detectorIdentifier;
+ (NSArray *)scanString:(NSString *)arg1 scanRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
