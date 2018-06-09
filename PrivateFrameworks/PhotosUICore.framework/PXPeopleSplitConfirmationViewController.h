/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleSplitConfirmationViewController : PXPeopleConfirmationViewController {
    NSLayoutConstraint * _buttonSizeConstraint;
    NSArray * _commonConstraints;
    UIButton * _confirmButton;
    NSLayoutConstraint * _controlGuideHeightConstraint;
    UILayoutGuide * _controlLayoutGuide;
    UIButton * _denyButton;
    NSLayoutConstraint * _firstButtonSpacingConstraint;
    UIView * _interimLoadingView;
    NSArray * _landscapeConstraints;
    NSArray * _portraitConstraints;
    NSLayoutConstraint * _secondButtonSpacingConstraint;
    UIBarButtonItem * _undoButton;
}

@property (nonatomic, retain) NSLayoutConstraint *buttonSizeConstraint;
@property (nonatomic, retain) NSArray *commonConstraints;
@property (nonatomic, retain) UIButton *confirmButton;
@property (nonatomic, retain) NSLayoutConstraint *controlGuideHeightConstraint;
@property (nonatomic, retain) UILayoutGuide *controlLayoutGuide;
@property (nonatomic, retain) UIButton *denyButton;
@property (nonatomic, retain) NSLayoutConstraint *firstButtonSpacingConstraint;
@property (nonatomic, retain) UIView *interimLoadingView;
@property (nonatomic, retain) NSArray *landscapeConstraints;
@property (nonatomic, retain) NSArray *portraitConstraints;
@property (nonatomic, retain) NSLayoutConstraint *secondButtonSpacingConstraint;
@property (nonatomic, retain) UIBarButtonItem *undoButton;

- (void).cxx_destruct;
- (id)_buttonBackgroundImageFromColor:(id)arg1;
- (id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 andColor:(id)arg3;
- (void)_disableActionButtonsWithSelectedButton:(id)arg1;
- (void)_enableActionButtons;
- (void)_updateUndoButton;
- (id)buttonSizeConstraint;
- (id)commonConstraints;
- (id)confirmButton;
- (void)confirmTapped:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)controlGuideHeightConstraint;
- (id)controlLayoutGuide;
- (void)dealloc;
- (id)denyButton;
- (void)denyTapped:(id)arg1;
- (id)firstButtonSpacingConstraint;
- (id)initWithPerson:(id)arg1;
- (id)interimLoadingView;
- (id)landscapeConstraints;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (id)portraitConstraints;
- (id)secondButtonSpacingConstraint;
- (void)setButtonSizeConstraint:(id)arg1;
- (void)setCommonConstraints:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setControlGuideHeightConstraint:(id)arg1;
- (void)setControlLayoutGuide:(id)arg1;
- (void)setDenyButton:(id)arg1;
- (void)setFirstButtonSpacingConstraint:(id)arg1;
- (void)setInterimLoadingView:(id)arg1;
- (void)setLandscapeConstraints:(id)arg1;
- (void)setPortraitConstraints:(id)arg1;
- (void)setSecondButtonSpacingConstraint:(id)arg1;
- (void)setUndoButton:(id)arg1;
- (void)suggestionDidDisplay;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoButton;
- (void)undoButtonTapped:(id)arg1;
- (void)updateViewConstraints;
- (void)updateViewWithViewState:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
