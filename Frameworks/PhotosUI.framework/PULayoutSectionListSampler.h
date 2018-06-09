/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULayoutSectionListSampler : PULayoutSectionSampler {
    long long  _lastSeenSampledIndex;
    long long  _lastSeenTopUnsampledIndex;
    long long  _lastSeenUnsampledIndex;
    long long  _numberOfRealItems;
    long long  _numberOfVisibleItems;
    long long * _visibleItemIndexes;
}

- (void)dealloc;
- (void)dumpInternalMemory;
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(bool*)arg2;
- (id)initWithNumberOfVisibleItems:(long long)arg1 numberOfRealItems:(long long)arg2;
- (long long)unsampledIndexForIndex:(long long)arg1;
- (long long*)visibleItemIndexes;

@end
