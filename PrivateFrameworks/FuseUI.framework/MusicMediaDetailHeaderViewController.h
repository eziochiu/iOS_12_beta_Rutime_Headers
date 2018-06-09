/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaDetailHeaderViewController : UIViewController <MusicMediaDetailHeaderViewController> {
    double  _artworkFittingHeight;
    UIImage * _artworkImage;
    UIView * _contentEffectClippingView;
    unsigned long long  _contentEffectRevisionID;
    UISnapshotView * _contentEffectSnapshotView;
    MusicInteractiveContentEffectView * _contentEffectView;
    UIView * _darkeningTintView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _focusRect;
    NSArray * _focusRegions;
    bool  _hasReceivedHeaderInformation;
    double  _headerHeight;
    unsigned long long  _headerStyle;
    double  _headerVerticalOffset;
    unsigned long long  _ignoreContentEffectSnapshotCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastContentEffectViewInputBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastContentEffectViewSnapshotSize;
    NSString * _legibilityBottomGradientType;
    MusicMediaUberHeaderLegibilityOverlayView * _legibilityOverlayView;
    double  _maximumHeaderHeight;
    MusicMediaDetailTintInformation * _mediaDetailTintInformation;
    <MusicMediaDetailHeaderViewControllerDelegate> * _mediaHeaderViewControllerDelegate;
    double  _originalContentViewControllerViewAlpha;
    double  _transitionProgress;
}

@property (nonatomic) double artworkFittingHeight;
@property (nonatomic, retain) UIImage *artworkImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *focusRegions;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long headerStyle;
@property (nonatomic, copy) NSString *legibilityBottomGradientType;
@property (nonatomic, copy) MusicMediaDetailTintInformation *mediaDetailTintInformation;
@property (nonatomic) <MusicMediaDetailHeaderViewControllerDelegate> *mediaHeaderViewControllerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyHeaderLegibilityTintInformation;
- (void)_applyHeaderStyle;
- (void)_applyTintInformation;
- (id)_calculateArtworkContentBackgroundColor;
- (double)_maximumHeaderHeightForBoundsHeight:(double)arg1;
- (void)_reloadContentEffectSnapshotView;
- (void)_updateHeaderProperties;
- (double)artworkFittingHeight;
- (id)artworkImage;
- (id)focusRegions;
- (unsigned long long)headerStyle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)legibilityBottomGradientType;
- (double)maximumMediaDetailHeaderHeightForBoundsHeight:(double)arg1 returningShouldDeferToContentViewController:(bool*)arg2;
- (id)mediaDetailTintInformation;
- (id)mediaHeaderViewControllerDelegate;
- (void)setArtworkFittingHeight:(double)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setFocusRegions:(id)arg1;
- (void)setHeaderStyle:(unsigned long long)arg1;
- (void)setLegibilityBottomGradientType:(id)arg1;
- (void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (void)setMediaDetailTintInformation:(id)arg1;
- (void)setMediaHeaderViewControllerDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
