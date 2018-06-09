/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUVMRegionIdentifier : NSObject {
    bool  _hasFractionalPageSizes;
    NSMapTable * _mallocZoneStatisticsMap;
    int  _pid;
    NSMutableArray * _regions;
    unsigned int  _task;
}

+ (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 inSortedRegions:(id)arg2 options:(unsigned long long)arg3;

- (void).cxx_destruct;
- (int)_recordRegionsAroundAddress:(unsigned long long)arg1 regionDescriptionOptions:(unsigned long long)arg2;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned int)arg2;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned int)arg2;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2 maximumLength:(unsigned long long)arg3 memorySizeDivisor:(unsigned int)arg4;
- (bool)hasFractionalPageSizes;
- (id)init;
- (id)initWithGraph:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1 pid:(int)arg2 options:(unsigned long long)arg3;
- (id)regions;

@end
