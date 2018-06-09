/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetSelectionKnobsPositionsPipelineMergeLabelBounds : NSObject {
    int  mKnobsMode;
    int  mLabelType;
    NSMutableArray * mLabelsBounds;
}

@property (nonatomic, readonly) int knobsMode;
@property (nonatomic, readonly) int labelType;

+ (id)boundsWithLabelType:(int)arg1 knobsMode:(int)arg2;

- (void)addBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addNewBoundsArray;
- (void)dealloc;
- (id)initWithLabelType:(int)arg1 knobsMode:(int)arg2;
- (int)knobsMode;
- (int)labelType;
- (void)mergeBoundsIntoProjectedPoints:(id)arg1;
- (bool)p_hasExtentPointsForBounds:(id)arg1 returningMinPoint:(struct CGPoint { double x1; double x2; }*)arg2 maxPoint:(struct CGPoint { double x1; double x2; }*)arg3;
- (bool)p_isHorizontal;
- (struct CGPoint { double x1; double x2; })p_maxPoint:(struct CGPoint { double x1; double x2; })arg1 otherPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })p_minPoint:(struct CGPoint { double x1; double x2; })arg1 otherPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
