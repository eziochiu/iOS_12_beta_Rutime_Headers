/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewSIMLockKeypad : SBUIPasscodeLockViewLongNumericKeypad {
    bool  _isShowingStatus;
    UIView * _statusSpringView;
    UIView * _statusSpringViewParent;
    UILabel * _statusSubtitleView;
}

@property (nonatomic, copy) NSString *statusSubtitle;
@property (nonatomic, copy) NSString *statusTitle;

- (void).cxx_destruct;
- (double)_distanceFromLastLineBaselineToTextFieldBoundsHeight:(id)arg1;
- (double)_distanceToFirstLineBaseline:(id)arg1;
- (double)_expectedDistanceBetweenTitleAndSubtitleBaselines;
- (double)_expectedYOffsetBetweenTitleAndSubtitleViews;
- (void)_layoutEntryField;
- (void)_layoutStatusView;
- (void)_setHasInput:(bool)arg1;
- (void)_setText:(id)arg1 onLabel:(id)arg2;
- (void)_shakeStatus;
- (bool)_showsPromptLabelOnEntryField;
- (void)_sizeLabel:(id)arg1;
- (id)_statusSubtitleFont;
- (double)_subtitleBaselineYOffsetFromTopOfEntryField;
- (double)_subtitleBaselineYOffsetFromTopOfNumberPad;
- (void)forceShowStatus:(bool)arg1;
- (id)initWithLightStyle:(bool)arg1;
- (void)layoutSubviews;
- (void)setStatusSubtitle:(id)arg1;
- (void)setStatusTitle:(id)arg1;
- (id)statusSubtitle;
- (id)statusTitle;

@end
