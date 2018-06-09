/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIScorecardView : UIView {
    NSArray * _columnWidths;
    UIImage * _darkMaterialImage;
    <VUIScorecardViewDelegate> * _delegate;
    bool  _delegateRespondsToBackgroundBlendModeForElementInRowAtIndex;
    bool  _delegateRespondsToBackgroundImageForScorecardViewMaterial;
    bool  _didCalculatedSize;
    double  _interitemSpacing;
    NSArray * _rowElementSizes;
    double  _rowSpacing;
    VUIScoreboardLayout * _scoreboardLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _scorecardSize;
}

@property (nonatomic, retain) NSArray *columnWidths;
@property (nonatomic, retain) UIImage *darkMaterialImage;
@property (nonatomic) <VUIScorecardViewDelegate> *delegate;
@property (nonatomic) bool delegateRespondsToBackgroundBlendModeForElementInRowAtIndex;
@property (nonatomic) bool delegateRespondsToBackgroundImageForScorecardViewMaterial;
@property (nonatomic) bool didCalculatedSize;
@property (nonatomic) double interitemSpacing;
@property (nonatomic, retain) NSArray *rowElementSizes;
@property (nonatomic) double rowSpacing;
@property (nonatomic, retain) VUIScoreboardLayout *scoreboardLayout;
@property (nonatomic) struct CGSize { double x1; double x2; } scorecardSize;

- (void).cxx_destruct;
- (void)_calculateColumnSpacing;
- (struct CGSize { double x1; double x2; })_calculateMetricsOfScorecard;
- (id)_darkMaterialColor;
- (id)_darkMaterialImage;
- (id)columnWidths;
- (id)darkMaterialImage;
- (id)delegate;
- (bool)delegateRespondsToBackgroundBlendModeForElementInRowAtIndex;
- (bool)delegateRespondsToBackgroundImageForScorecardViewMaterial;
- (bool)didCalculatedSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interitemSpacing;
- (void)invalidateData;
- (id)rowElementSizes;
- (double)rowSpacing;
- (id)scoreboardLayout;
- (struct CGSize { double x1; double x2; })scorecardSize;
- (void)setColumnWidths:(id)arg1;
- (void)setDarkMaterialImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateRespondsToBackgroundBlendModeForElementInRowAtIndex:(bool)arg1;
- (void)setDelegateRespondsToBackgroundImageForScorecardViewMaterial:(bool)arg1;
- (void)setDidCalculatedSize:(bool)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setRowElementSizes:(id)arg1;
- (void)setRowSpacing:(double)arg1;
- (void)setScoreboardLayout:(id)arg1;
- (void)setScorecardSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
