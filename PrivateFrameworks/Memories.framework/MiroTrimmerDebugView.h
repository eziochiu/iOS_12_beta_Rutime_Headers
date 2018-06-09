/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroTrimmerDebugView : MiroPassthroughView {
    PHAsset * _asset;
    int  _duration;
    UILabel * _label;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic) int duration;
@property (nonatomic, retain) UILabel *label;

+ (id)createViewAndAddToParentView:(id)arg1;

- (void).cxx_destruct;
- (void)_addAnalysisIndicators;
- (void)_addAutoEditScore:(id)arg1 lastLaneOfTypeOffset:(double*)arg2;
- (void)_addRangeLayerWithColor:(id)arg1 x:(double)arg2 y:(double)arg3 width:(double)arg4 height:(double)arg5;
- (void)_addRangeLayerWithColor:(id)arg1 x:(double)arg2 y:(double)arg3 width:(double)arg4 markEnds:(bool)arg5;
- (id)_attributedStringWithColoredLabelsForKeys:(id)arg1 withRangeModelsByType:(id)arg2;
- (id)_rangeModelsByType:(id)arg1;
- (void)_resetRangeModelLayers;
- (id)asset;
- (id)baseColorForMetadataRangeTypeKey:(id)arg1;
- (id)colorForMetadataRange:(id)arg1;
- (id)colorPatternForCameraMotionRange:(id)arg1;
- (id)colorPatternForFineActionRange:(id)arg1;
- (id)colorPatternForInterestingnessRange:(id)arg1;
- (id)colorPatternForQualityRange:(id)arg1;
- (id)colorPatternForRating:(unsigned long long)arg1 baseColor:(id)arg2;
- (id)colorWithPatternColors:(id)arg1 baseColor:(id)arg2;
- (int)duration;
- (bool)isOverlapWithPreviousRangeForIndex:(unsigned long long)arg1 inRangeModels:(id)arg2;
- (id)label;
- (void)reloadRanges;
- (void)setAsset:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDuration:(int)arg1;
- (void)setLabel:(id)arg1;

@end
