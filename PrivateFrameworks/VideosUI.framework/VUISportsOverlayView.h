/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISportsOverlayView : UIView <VUIOverlayViewProtocol, VUIScorecardViewDelegate> {
    UIImage * _backgroundImageForMaterialRendering;
    NSOperationQueue * _backgroundImageOperationQueue;
    _TVImageView * _logo;
    TVImageElement * _logoElement;
    VUISportsOverlayLayout * _overlayLayout;
    NSArray * _scorecardData;
    TVViewElement * _scorecardElement;
    VUIScorecardView * _scorecardView;
    UIImage * _scorecardViewBackgroundImage;
    VUITextBadgeView * _textBadge;
    bool  _textBadgeHasMaterial;
    TVViewElement * _viewElement;
}

@property (nonatomic, retain) UIImage *backgroundImageForMaterialRendering;
@property (nonatomic, retain) NSOperationQueue *backgroundImageOperationQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _TVImageView *logo;
@property (nonatomic, retain) TVImageElement *logoElement;
@property (nonatomic, retain) VUISportsOverlayLayout *overlayLayout;
@property (nonatomic, copy) NSArray *scorecardData;
@property (nonatomic, retain) TVViewElement *scorecardElement;
@property (nonatomic, retain) VUIScorecardView *scorecardView;
@property (nonatomic, retain) UIImage *scorecardViewBackgroundImage;
@property (readonly) Class superclass;
@property (nonatomic, retain) VUITextBadgeView *textBadge;
@property (nonatomic) bool textBadgeHasMaterial;
@property (nonatomic, retain) TVViewElement *viewElement;

+ (bool)_viewBackgroundImageNeedsUpdatingWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 currentBackgroundImage:(id)arg2;
+ (id)sportsOverlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;

- (void).cxx_destruct;
- (void)_layoutWithElement:(id)arg1;
- (void)_redrawScorecardViewWithDuration:(double)arg1;
- (void)_redrawTextBadgeWithDuration:(double)arg1;
- (void)_redrawView:(id)arg1 withDuration:(double)arg2;
- (bool)_scorecardViewBackgroundImageNeedsUpdating;
- (bool)_scorecardViewRequiresBackgroundImage;
- (bool)_textBadgeBackgroundImageNeedsUpdating;
- (bool)_textBadgeRequiresBackgroundImage;
- (void)_updateBackgroundImagesWithCompletedOperation:(id)arg1;
- (void)_updateBackgroundMaterialImagesWithBackgroundImageSize:(struct CGSize { double x1; double x2; })arg1 performSynchronously:(bool)arg2;
- (void)_updateBadgePosition;
- (void)_updateLogo:(id)arg1;
- (void)_updateLogoPosition;
- (bool)_updateScoreView:(id)arg1;
- (bool)_updateTextBadge:(id)arg1;
- (int)backgroundBlendModeForElementInRow:(long long)arg1 atIndex:(long long)arg2;
- (id)backgroundImageForMaterialRendering;
- (id)backgroundImageForScorecardViewMaterial:(id)arg1;
- (id)backgroundImageOperationQueue;
- (void)backgroundImageSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)logo;
- (id)logoElement;
- (double)maximumWidthForScorecardView:(id)arg1;
- (long long)numberOfElementsForScorecardView:(id)arg1 inRow:(long long)arg2;
- (long long)numberOfRowsInScorecardView:(id)arg1;
- (id)overlayLayout;
- (void)reset;
- (id)scorecardData;
- (id)scorecardElement;
- (id)scorecardView;
- (id)scorecardViewBackgroundImage;
- (void)setBackgroundImageForMaterialRendering:(id)arg1;
- (void)setBackgroundImageOperationQueue:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setLogoElement:(id)arg1;
- (void)setOverlayLayout:(id)arg1;
- (void)setScorecardData:(id)arg1;
- (void)setScorecardElement:(id)arg1;
- (void)setScorecardView:(id)arg1;
- (void)setScorecardViewBackgroundImage:(id)arg1;
- (void)setTextBadge:(id)arg1;
- (void)setTextBadgeHasMaterial:(bool)arg1;
- (void)setViewElement:(id)arg1;
- (long long)styleForScorecardView:(id)arg1;
- (id)textBadge;
- (bool)textBadgeHasMaterial;
- (id)viewElement;
- (id)viewElementForScorecard:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;

@end
