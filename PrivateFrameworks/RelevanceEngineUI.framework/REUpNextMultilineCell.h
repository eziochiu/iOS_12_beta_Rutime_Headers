/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

@interface REUpNextMultilineCell : REUpNextBaseCell {
    REUpNextAccessoryView * _accessoryView;
    UILayoutGuide * _bodyImageSizingLayoutGuide;
    UIFont * _boldFont;
    UILayoutGuide * _contentLayoutGuide;
    REUpNextImageView * _descriptionImageView;
    UIVisualEffectView * _descriptionLine1EffectView;
    UILabel * _descriptionLine1Label;
    UIVisualEffectView * _descriptionLine2EffectView;
    UILabel * _descriptionLine2Label;
    UILayoutGuide * _descriptionTextLayoutGuide;
    REUpNextImageView * _headerImage;
    unsigned int  _headerImageEdge;
    UIVisualEffectView * _headerImageEffectView;
    UILabel * _headerLabel;
    UIVisualEffectView * _headerVisualEffectView;
    NSArray * _headerWithLeftImageConstraints;
    NSArray * _headerWithNoImageConstraints;
    NSArray * _headerWithRightImageConstraints;
    UIFont * _italicFont;
    bool  _showingAccessory;
    bool  _showingDescriptionImage;
    bool  _showingHeader;
    bool  _showingHeaderImage;
    bool  _showingThreeLineLayout;
    UIFont * _standardFont;
    bool  _usingStretchableImage;
    NSArray * _withDescription2Constraints;
    NSArray * _withDescriptionAccessoryConstraints;
    NSArray * _withDescriptionImageViewConstraints;
    NSArray * _withHeaderConstraints;
    NSArray * _withStretchableDescriptionImageViewConstraints;
    NSArray * _withoutDescription2Constraints;
    NSArray * _withoutDescriptionAccessoryConstraints;
    NSArray * _withoutDescriptionImageViewConstraints;
    NSArray * _withoutHeaderConstraints;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateHeaderColor;
- (void)configureWithContent:(id)arg1;
- (void)defaultTextColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;
- (void)updateConstraints;

@end
