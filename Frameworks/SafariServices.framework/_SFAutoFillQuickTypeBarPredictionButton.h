/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutoFillQuickTypeBarPredictionButton : _SFAutoFillQuickTypeBarButton {
    NSArray * _labelDynamicConstraints;
    UILabel * _predictionLabel;
    _SFTextSuggestion * _suggestion;
}

@property (nonatomic, retain) _SFTextSuggestion *suggestion;

- (void).cxx_destruct;
- (void)_updatePredictionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;

@end
