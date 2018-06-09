/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGIntervalTreeNode : NSObject {
    unsigned long long  _index;
    NSMutableSet * _keys;
    SGIntervalTreeNode * _left;
    unsigned long long  _leftIndex;
    SGIntervalTreeNode * _right;
    unsigned long long  _rightIndex;
}

- (void).cxx_destruct;
- (void)assignKey:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)getMax;
- (unsigned long long)getMin;
- (id)init;
- (void)insertIndex:(unsigned long long)arg1;
- (bool)isSpannedBy:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isSpannedByLeft:(unsigned long long)arg1;
- (bool)isSpannedByRight:(unsigned long long)arg1;
- (id)queryRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)queryRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toResults:(id)arg2;
- (void)storePosition:(unsigned long long)arg1;

@end
