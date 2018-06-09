/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISuggestionsView : UIView {
    SiriUIAcousticIDSpinner * _acousticIDSpinner;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    UIView * _contentView;
    <SiriUISuggestionsViewDelegate> * _delegate;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _edgeInsets;
    bool  _firstSuggestionPresentation;
    UIView * _guideView;
    UILabel * _headerLabel;
    SiriUISuggestionsHeaderText * _headerText;
    UILabel * _largeSubheaderLabel;
    SiriUISuggestionsHeaderText * _largeSubheaderText;
    unsigned long long  _numberOfSuggestions;
    UILabel * _oldHeaderLabel;
    NSArray * _oldSuggestionLabels;
    long long  _orientation;
    NSMutableOrderedSet * _pendedSuggestions;
    UILabel * _subheaderLabel;
    SiriUISuggestionsHeaderText * _subheaderText;
    NSArray * _suggestionLabels;
    UIColor * _textColor;
    NSTimer * _updateSuggestionsTimer;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic) <SiriUISuggestionsViewDelegate> *delegate;
@property (getter=isGuideHidden, nonatomic) bool guideHidden;
@property (nonatomic, retain) UIView *guideView;
@property (nonatomic, copy) SiriUISuggestionsHeaderText *headerText;
@property (nonatomic, copy) SiriUISuggestionsHeaderText *largeSubheaderText;
@property (nonatomic) long long orientation;
@property (nonatomic, copy) SiriUISuggestionsHeaderText *subheaderText;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (void)_animateHeaderIn;
- (void)_animateHeaderOut;
- (void)_animateInSuggestionAtIndex:(unsigned long long)arg1;
- (void)_animateOutSuggestionAtIndex:(unsigned long long)arg1;
- (id)_createSpringAnimation:(double)arg1;
- (double)_headerToLargeSubheaderOffset;
- (double)_headerToSubheaderOffset;
- (int)_heightType;
- (bool)_isPadHeightType;
- (bool)_isPortrait;
- (void)_loadLargeSubheaderViewIfNeeded;
- (void)_loadSubheaderViewIfNeeded;
- (void)_loadSuggestionsViewsIfNeeded;
- (unsigned long long)_numberOfSuggestionsToDisplay;
- (void)_reallyShowAcousticIDSpinner;
- (void)_setHeaderText:(id)arg1;
- (void)_setLargeSubheaderText:(id)arg1;
- (void)_setSubheaderText:(id)arg1;
- (void)_setSuggestionTexts:(id)arg1;
- (double)_suggestionFontSize;
- (double)_suggestionSpacing;
- (void)_updateSuggestions;
- (double)_updateSuggestionsDelay;
- (void)acousticIDSpinnerDidHide:(id)arg1;
- (void)animateOutWithCompletion:(id /* block */)arg1;
- (void)clearCurrentSuggestions;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)delegate;
- (id)guideView;
- (id)headerText;
- (void)hideAcousticIDSpinner;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isGuideHidden;
- (bool)isShowingSuggestions;
- (id)largeSubheaderText;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setGuideHidden:(bool)arg1;
- (void)setGuideHidden:(bool)arg1 animated:(bool)arg2;
- (void)setGuideView:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setLargeSubheaderText:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSubheaderText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)showAcousticIDSpinner;
- (void)startSuggesting;
- (void)stopSuggesting;
- (id)subheaderText;
- (id)textColor;

@end
