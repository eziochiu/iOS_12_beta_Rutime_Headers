/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {
    bool  hasConstantDepth;
    TSCH3DChartLayout * mChartLayout;
    NSValue * mInfoGeometryOffset;
    bool  mIsMutatedForSceneSettings;
}

@property (nonatomic) bool hasConstantDepth;

- (id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (bool)hasConstantDepth;
- (void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })oldLayoutSettings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })oldResizingFrame;
- (id)sceneResetWithLayoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })arg1;
- (void)setHasConstantDepth:(bool)arg1;
- (void)updateInfoGeometryIfNecessary;
- (void)upgradeForSpice:(bool)arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;

@end
