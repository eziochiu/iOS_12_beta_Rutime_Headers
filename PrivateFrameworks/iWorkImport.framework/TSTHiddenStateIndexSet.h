/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTHiddenStateIndexSet : NSObject {
    NSMutableIndexSet * _visibleIndexSet;
}

@property (nonatomic, retain) NSMutableIndexSet *visibleIndexSet;

- (bool)anyHiddenIndicesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (void)deleteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)findNthNextVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (id)init;
- (void)insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isIndexHidden:(unsigned long long)arg1;
- (void)moveRangeFrom:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)numberHiddenIndicesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)numberVisibleIndicesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setHidden:(bool)arg1 atIndex:(unsigned long long)arg2;
- (void)setHidden:(bool)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVisibleIndexSet:(id)arg1;
- (void)swapIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (unsigned long long)visibleIndexAfterAndIncludingIndex:(unsigned long long)arg1;
- (unsigned long long)visibleIndexAfterIndex:(unsigned long long)arg1;
- (unsigned long long)visibleIndexBeforeAndIncludingIndex:(unsigned long long)arg1;
- (unsigned long long)visibleIndexBeforeIndex:(unsigned long long)arg1;
- (id)visibleIndexSet;
- (id)visibleIndices;

@end