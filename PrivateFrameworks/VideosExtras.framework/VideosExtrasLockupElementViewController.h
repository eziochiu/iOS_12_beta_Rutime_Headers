/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasLockupElementViewController : VideosExtrasViewElementViewController {
    NSLayoutConstraint * _artworkContainerHeightConstraint;
    NSLayoutConstraint * _artworkContainerTopConstraint;
    VideosExtrasConstrainedArtworkContainerView * _artworkContainerView;
    NSLayoutConstraint * _artworkContainerWidthConstraint;
    NSLayoutConstraint * _artworkContainerXConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkSize;
    MPUContentSizeLayoutConstraint * _descriptionBaselineConstraint;
    UILabel * _descriptionLabel;
    MPUContentSizeLayoutConstraint * _subtitleBaselineConstraint;
    UILabel * _subtitleLabel;
    NSLayoutConstraint * _textBottomConstraint;
    NSLayoutConstraint * _textCenterYConstraint;
    UIView * _textContainmentView;
    NSLayoutConstraint * _textHeightConstraint;
    NSLayoutConstraint * _textLeadingConstraint;
    NSLayoutConstraint * _textTopConstraint;
    NSLayoutConstraint * _textTrailingConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleVerticalConstraint;
}

@property (readonly) NSString *descriptionTextStyle;
@property (readonly) IKLockupElement *viewElement;

- (void).cxx_destruct;
- (void)_configureArtworkViewForImageElement:(id)arg1 overlays:(id)arg2;
- (void)_configureDescriptionLabelForTextElement:(id)arg1;
- (void)_configureSubtitleLabelForTextElement:(id)arg1;
- (void)_configureTitleLabelForTextElement:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_prepareLayout;
- (id)descriptionTextStyle;
- (id)initWithViewElement:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
