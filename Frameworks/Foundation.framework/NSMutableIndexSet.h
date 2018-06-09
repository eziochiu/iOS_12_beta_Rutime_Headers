/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableIndexSet : NSIndexSet {
    void * _reserved;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)_addRangeToArray:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_ensureRangeCapacity:(unsigned long long)arg1;
- (void)_incrementBy:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2;
- (void)_insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inArrayAtIndex:(unsigned long long)arg2;
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned long long)arg1;
- (void)_removeAndDecrementBy:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2;
- (void)_removeRangeInArrayAtIndex:(unsigned long long)arg1;
- (void)_replaceRangeInArrayAtIndex:(unsigned long long)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addIndex:(unsigned long long)arg1;
- (void)addIndexes:(id)arg1;
- (void)addIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)addIndexesFromIndexSet:(id)arg1;
- (void)addIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (Class)classForCoder;
- (void)removeAllIndexes;
- (void)removeIndex:(unsigned long long)arg1;
- (void)removeIndexes:(id)arg1;
- (void)removeIndexesFromIndexSet:(id)arg1;
- (void)removeIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (void)removeIndexesPassingTest:(id /* block */)arg1;
- (void)removeIndexesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

- (void)cat_moveIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)cat_shiftAndAddIndex:(unsigned long long)arg1;
- (void)cat_shiftAndAddIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)cat_shiftAndRemoveIndex:(unsigned long long)arg1;
- (void)cat_shiftAndRemoveIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void)__ck_intersectIndexes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)indexSetWithIndexesInRCRange:(struct { long long x1; long long x2; })arg1;

- (void)addIndexesInRCRange:(struct { long long x1; long long x2; })arg1;
- (void)closeGapsSmallerThan:(long long)arg1;
- (void)removeBlocksSmallerThan:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (void)mf_intersectIndexes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)tsu_intersectionWithIndexSet:(id)arg1;
- (void)tsu_moveIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toOffset:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (void)pl_adjustIndexesForDeletions:(id)arg1;
- (void)pl_adjustIndexesForInsertions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)px_adjustIndexesForDeletedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)px_adjustIndexesForDeletions:(id)arg1;
- (void)px_adjustIndexesForInsertedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)px_adjustIndexesForInsertions:(id)arg1;
- (void)px_adjustIndexesForMoveFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (void)tsu_intersectionWithIndexSet:(id)arg1;
- (void)tsu_moveIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toOffset:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (void)tsu_intersectionWithIndexSet:(id)arg1;
- (void)tsu_moveIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toOffset:(unsigned long long)arg2;

@end
