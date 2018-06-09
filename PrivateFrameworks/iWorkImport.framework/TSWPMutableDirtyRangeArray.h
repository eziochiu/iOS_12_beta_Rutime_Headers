/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPMutableDirtyRangeArray : TSWPDirtyRangeArray

- (void)addChangedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 delta:(long long)arg2;
- (void)addChangedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 delta:(long long)arg2 allowEmpty:(bool)arg3;
- (void)addRange:(struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; })arg1;
- (void)addRange:(struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; long long x2; })arg1 allowEmpty:(bool)arg2;
- (void)clear;
- (void)removeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)subtract:(id)arg1;

@end
