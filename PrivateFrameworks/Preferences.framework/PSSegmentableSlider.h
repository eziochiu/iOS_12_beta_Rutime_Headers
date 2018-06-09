/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSegmentableSlider : UISlider {
    UISelectionFeedbackGenerator * _feedbackGenerator;
    bool  _locksToSegment;
    unsigned long long  _segmentCount;
    bool  _segmented;
    bool  _snapsToSegment;
    UIColor * _trackMarkersColor;
}

@property (nonatomic, retain) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic) bool locksToSegment;
@property (nonatomic) unsigned long long segmentCount;
@property (getter=isSegmented, nonatomic) bool segmented;
@property (nonatomic) bool snapsToSegment;

- (void).cxx_destruct;
- (void)controlInteractionBegan:(id)arg1;
- (void)controlInteractionEnded:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)feedbackGenerator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSegmented;
- (bool)locksToSegment;
- (unsigned long long)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1;
- (unsigned long long)segmentCount;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setLocksToSegment:(bool)arg1;
- (void)setSegmentCount:(unsigned long long)arg1;
- (void)setSegmented:(bool)arg1;
- (void)setSnapsToSegment:(bool)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (void)sliderTapped:(id)arg1;
- (bool)snapsToSegment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;

@end
