/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPMutableRangeArray : TSWPRangeArray

- (void)addRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)clear;
- (void)concatenateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atIndex:(unsigned long long)arg2;
- (void)removeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeRangesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceRangeAtIndex:(unsigned long long)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })replacedTextAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 delta:(long long)arg2;
- (void)subtract:(id)arg1;
- (void)unionWith:(id)arg1;

@end
