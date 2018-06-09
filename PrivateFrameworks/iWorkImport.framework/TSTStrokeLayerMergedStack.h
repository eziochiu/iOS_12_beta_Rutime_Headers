/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayerMergedStack : TSTStrokeLayerAbstractStack {
    TSTMutableStrokeLayer * _clearedMajorStrokeLayer;
    TSTMutableStrokeLayer * _clearedMinorStrokeLayer;
    TSTStrokeOrderedLayer * _customOrderedStrokeLayer;
    TSTStrokeLayer * _customUnorderedStrokeLayer;
    TSTStrokeLayer * _defaultMajorStrokeLayer;
    TSTStrokeLayer * _defaultMinorStrokeLayer;
    TSTStrokeOrderedLayer * _dynamicOrderedStrokeLayer;
    TSTMutableStrokeLayer * _dynamicUnorderedStrokeLayer;
    TSTMutableStrokeLayer * _spillMajorStrokeLayer;
    TSTMutableStrokeLayer * _spillMinorStrokeLayer;
}

@property (nonatomic, retain) TSTMutableStrokeLayer *clearedMajorStrokeLayer;
@property (nonatomic, retain) TSTMutableStrokeLayer *clearedMinorStrokeLayer;
@property (nonatomic, retain) TSTStrokeOrderedLayer *customOrderedStrokeLayer;
@property (nonatomic, retain) TSTStrokeLayer *customUnorderedStrokeLayer;
@property (nonatomic, retain) TSTStrokeLayer *defaultMajorStrokeLayer;
@property (nonatomic, retain) TSTStrokeLayer *defaultMinorStrokeLayer;
@property (nonatomic, retain) TSTStrokeOrderedLayer *dynamicOrderedStrokeLayer;
@property (nonatomic, retain) TSTMutableStrokeLayer *dynamicUnorderedStrokeLayer;
@property (nonatomic, retain) TSTMutableStrokeLayer *spillMajorStrokeLayer;
@property (nonatomic, retain) TSTMutableStrokeLayer *spillMinorStrokeLayer;

+ (double)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 atRowIndex:(long long)arg3;
+ (double)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg3 cachedMax:(double)arg4;
+ (double)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 atColumnIndex:(long long)arg3;
+ (double)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg3 cachedMax:(double)arg4;
+ (id)mergeLeftStrokes:(id)arg1 withRightStrokes:(id)arg2;
+ (id)mergeTopStrokes:(id)arg1 withBottomStrokes:(id)arg2;
+ (double)p_maxWidthForMajorStrokes:(id)arg1 mergedWithMinorStrokes:(id)arg2 atIndex:(long long)arg3;
+ (double)p_maxWidthForMajorStrokes:(id)arg1 mergedWithMinorStrokes:(id)arg2 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg3 cachedMax:(double)arg4;

- (void).cxx_destruct;
- (id)clearedMajorStrokeLayer;
- (id)clearedMinorStrokeLayer;
- (unsigned long long)count;
- (id)customOrderedStrokeLayer;
- (id)customUnorderedStrokeLayer;
- (id)defaultMajorStrokeLayer;
- (id)defaultMinorStrokeLayer;
- (id)dynamicOrderedStrokeLayer;
- (id)dynamicUnorderedStrokeLayer;
- (id)initWithCopyOfMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;
- (id)initWithReferenceOfMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;
- (void)invalidateSpillStrokes;
- (void)lockForRead;
- (void)lockForWrite;
- (double)p_maxWidthOfStrokesInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1 cachedMax:(double)arg2;
- (id)p_strokeLayerEnumeration;
- (double)p_widthOfStrokesAtIndex:(long long)arg1;
- (id)portalledStrokeLayer;
- (void)setClearedMajorStrokeLayer:(id)arg1;
- (void)setClearedMinorStrokeLayer:(id)arg1;
- (void)setCustomOrderedStrokeLayer:(id)arg1;
- (void)setCustomUnorderedStrokeLayer:(id)arg1;
- (void)setDefaultMajorStrokeLayer:(id)arg1;
- (void)setDefaultMinorStrokeLayer:(id)arg1;
- (void)setDynamicOrderedStrokeLayer:(id)arg1;
- (void)setDynamicUnorderedStrokeLayer:(id)arg1;
- (void)setSpillMajorStrokeLayer:(id)arg1;
- (void)setSpillMinorStrokeLayer:(id)arg1;
- (id)spillMajorStrokeLayer;
- (id)spillMinorStrokeLayer;
- (void)unlock;

@end
