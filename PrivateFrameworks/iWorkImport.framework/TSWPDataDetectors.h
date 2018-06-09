/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPDataDetectors : NSObject

+ (id)calculateScanRanges:(id)arg1 changedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (void)registerDataDetectorClass:(Class)arg1;
+ (id)scanString:(id)arg1 scanRanges:(id)arg2;

@end