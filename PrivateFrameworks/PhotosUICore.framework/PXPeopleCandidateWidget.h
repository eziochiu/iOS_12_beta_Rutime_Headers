/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleCandidateWidget : NSObject <PXChangeObserver, PXWidget> {
    NSLayoutConstraint * _avatarToLeadingConstraint;
    UIView * _contentView;
    PXPhotosDetailsContext * _context;
    PXUIPeopleSuggestionDataSource * _dataSource;
    bool  _dismissed;
    UILabel * _label;
    UIButton * _notNowButton;
    NSLayoutConstraint * _notNowToTrailingConstraint;
    PHPerson * _person;
    PXWidgetSpec * _spec;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, retain) NSLayoutConstraint *avatarToLeadingConstraint;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, retain) PXUIPeopleSuggestionDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissed;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (nonatomic, readonly) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) UIButton *notNowButton;
@property (nonatomic, retain) NSLayoutConstraint *notNowToTrailingConstraint;
@property (nonatomic, retain) PHPerson *person;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate;

- (void).cxx_destruct;
- (void)_dismissWithAnimation:(bool)arg1;
- (void)_suggestionsDidFinish:(id)arg1;
- (void)_updateAndSetDescriptionFont;
- (id)avatarToLeadingConstraint;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)contentView;
- (id)context;
- (id)dataSource;
- (bool)dismissed;
- (bool)hasContentForCurrentInput;
- (id)label;
- (void)loadContentData;
- (id)notNowButton;
- (void)notNowTapped:(id)arg1;
- (id)notNowToTrailingConstraint;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)person;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)reviewTapped:(id)arg1;
- (void)setAvatarToLeadingConstraint:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDismissed:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setNotNowButton:(id)arg1;
- (void)setNotNowToTrailingConstraint:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)spec;
- (void)unloadContentData;
- (void)updateNotNowButton;
- (id)widgetDelegate;

@end
