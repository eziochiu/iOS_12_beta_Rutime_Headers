/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICoverSheetButton : UIControl <UIClickInteractionDelegate, _UIInteractiveHighlighting> {
    UIVisualEffectView * _backgroundEffectView;
    NSArray * _backgroundEffects;
    UIView * _backgroundHighlightView;
    UIClickInteraction * _clickInteraction;
    UIView * _containerView;
    UIImageView * _contentView;
    bool  _didActivateDuringInteraction;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    UIImage * _image;
    bool  _interactive;
    double  _interactiveHighlightMagnitude;
    NSString * _localizedAccessoryTitle;
    double  _maxForceDuringInteraction;
    bool  _pronounced;
    NSArray * _selectedBackgroundEffects;
    UIImage * _selectedImage;
    UIColor * _selectedTintColor;
    NSString * _statisticsIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (getter=isLatching, nonatomic) bool latching;
@property (nonatomic, copy) NSString *localizedAccessoryTitle;
@property (getter=isPronounced, nonatomic) bool pronounced;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic, retain) UIColor *selectedTintColor;
@property (nonatomic, copy) NSString *statisticsIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundEffectsWithBrightness:(double)arg1;
- (id)_firstActivationDurationStat;
- (void)_highlightForInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(bool)arg3;
- (id)_interactionCountStatWithActivation:(bool)arg1;
- (id)_interactionDurationStat;
- (id)_maxForceStatWithActivation:(bool)arg1;
- (void)clickInteraction:(id)arg1 didObserveForce:(double)arg2;
- (void)clickInteractionDidBegin:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (bool)clickInteractionShouldInvokeAction:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLatching;
- (bool)isPronounced;
- (void)layoutIfNeededAnimated;
- (void)layoutSubviews;
- (id)localizedAccessoryTitle;
- (id)selectedImage;
- (id)selectedTintColor;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImage:(id)arg1;
- (void)setLatching:(bool)arg1;
- (void)setLocalizedAccessoryTitle:(id)arg1;
- (void)setPronounced:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setSelectedTintColor:(id)arg1;
- (void)setStatisticsIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statisticsIdentifier;
- (void)traitCollectionDidChange:(id)arg1;

@end
