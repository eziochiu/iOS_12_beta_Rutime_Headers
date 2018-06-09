/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

@interface REUpNextLargeTextCell : REUpNextBaseCell {
    REUpNextImageView * _bodyImage;
    UILabel * _bodyLabel;
    UIVisualEffectView * _bodyVisualEffectView;
    NSArray * _bodyWithLeftImageConstraints;
    NSArray * _bodyWithNoImageConstraints;
    UILayoutGuide * _contentLayoutGuide;
    unsigned int  _currentImageEdge;
    REUpNextImageView * _headerImage;
    UIVisualEffectView * _headerImageVisualEffectView;
    UILabel * _headerLabel;
    UIVisualEffectView * _headerVisualEffectView;
    NSArray * _headerWithLeftImageConstraints;
    NSArray * _headerWithNoImageConstraints;
    NSArray * _headerWithRightImageConstraints;
    UIFont * _monospaceBodyFont;
    bool  _showingBodyImage;
    bool  _showingHeaderImage;
    UIFont * _standardBodyFont;
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
