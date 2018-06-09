/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPosterBannerView : UIView {
    PXCapsuleButton * _actionButton;
    id /* block */  _actionButtonAction;
    NSString * _actionButtonTitle;
    NSMutableArray * _avatarImageViews;
    NSMutableDictionary * _avatarImagesMap;
    NSString * _caption;
    UILabel * _captionLabel;
    NSString * _headline;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _headlineBoldRange;
    UILabel * _headlineLabel;
    bool  _loadingPeopleSuggestions;
    NSString * _subheadline;
    UILabel * _subheadlineLabel;
    PXUpdater * _updater;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, copy) NSString *caption;
@property (nonatomic, copy) NSString *headline;
@property (getter=isLoadingPeopleSuggestions, nonatomic) bool loadingPeopleSuggestions;
@property (nonatomic, copy) NSString *subheadline;

+ (id)_captionLabelFont;
+ (id)_headlineLabelBoldFont;
+ (id)_headlineLabelFont;
+ (id)_newAvatarImageViewWithDiameter:(double)arg1;
+ (id)_subheadlineLabelFont;
+ (long long)maxNumberOfAvatars;

- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(bool)arg3;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateActionButton;
- (void)_updateAvatarImageViews;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updateTitles;
- (id)caption;
- (id)headline;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLoadingPeopleSuggestions;
- (void)layoutSubviews;
- (void)setActionButtonWithTitle:(id)arg1 actionBlock:(id /* block */)arg2;
- (void)setAvatarImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCaption:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setHeadline:(id)arg1 boldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setLoadingPeopleSuggestions:(bool)arg1;
- (void)setSubheadline:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subheadline;
- (void)willMoveToWindow:(id)arg1;

@end
