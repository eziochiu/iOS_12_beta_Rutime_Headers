/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIProximityEnrollTrainingView : UIView {
    UIView * _containerView;
    UIButton * _endpointButton;
    UIView * _flamesContainerView;
    SUICFlamesView * _flamesView;
    VTUIPagedLabel * _instructionPagedLabel;
    UILabel * _pageLabel;
    UIButton * _skipButton;
    UILabel * _statusLabel;
    VTUITickMarkView * _tickMark;
    VTPreferences * _vtPrefs;
    VTUIStyle * _vtStyle;
}

@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UIButton *endpointButton;
@property (nonatomic, retain) UIView *flamesContainerView;
@property (nonatomic, retain) SUICFlamesView *flamesView;
@property (nonatomic, retain) VTUIPagedLabel *instructionPagedLabel;
@property (nonatomic, retain) UILabel *pageLabel;
@property (nonatomic, retain) UIButton *skipButton;
@property (nonatomic, retain) UILabel *statusLabel;
@property (nonatomic, retain) VTUITickMarkView *tickMark;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupViews;
- (id)containerView;
- (id)endpointButton;
- (id)flamesContainerView;
- (id)flamesView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)instructionPagedLabel;
- (id)pageLabel;
- (void)setContainerView:(id)arg1;
- (void)setEndpointButton:(id)arg1;
- (void)setFlamesContainerView:(id)arg1;
- (void)setFlamesView:(id)arg1;
- (void)setInstructionPagedLabel:(id)arg1;
- (void)setPageLabel:(id)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setTickMark:(id)arg1;
- (id)skipButton;
- (id)statusLabel;
- (id)tickMark;

@end
