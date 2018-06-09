/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppIconButton : UIButton {
    SearchUIImageView * _appIconImageView;
    <SearchUIFeedbackDelegate> * _delegate;
    SearchUIDragSource * _dragSource;
    SearchUIForceTouchGestureRecognizer * _forceTouchRecognizer;
    SFSearchResult * _result;
}

@property (retain) SearchUIImageView *appIconImageView;
@property <SearchUIFeedbackDelegate> *delegate;
@property (retain) SearchUIDragSource *dragSource;
@property (retain) SearchUIForceTouchGestureRecognizer *forceTouchRecognizer;
@property (retain) SFSearchResult *result;

- (void).cxx_destruct;
- (void)addForceTouchGestureRecognizerIfNecessaryForTraitCollection:(id)arg1;
- (id)appIconImageView;
- (id)delegate;
- (id)dragObject;
- (id)dragSource;
- (id)forceTouchRecognizer;
- (void)iconButtonPressed;
- (id)init;
- (void)layoutSubviews;
- (id)result;
- (id)searchUIForceTouchGestureRecognizer;
- (void)setAppIconImageView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragSource:(id)arg1;
- (void)setForceTouchRecognizer:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setResult:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithResult:(id)arg1;

@end
