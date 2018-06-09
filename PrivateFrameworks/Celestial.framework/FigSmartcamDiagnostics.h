/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigSmartcamDiagnostics : NSObject {
    NSMutableDictionary * _metadata;
}

- (void).cxx_destruct;
- (bool)addClassifierVersionMajor:(unsigned short)arg1 minor:(unsigned short)arg2 patch:(unsigned short)arg3;
- (bool)addFrameScores:(id)arg1 referenceFrame:(int)arg2;
- (bool)addMotionStats:(struct { float x1[2]; int x2[2]; bool x3; float x4[2]; float x5[2]; int x6; int x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; bool x9; bool x10; })arg1;
- (void)addPAMDecisionPreliminary:(id)arg1;
- (void)addSceneConfidences:(id)arg1;
- (id)init;
- (id)metadata;

@end
