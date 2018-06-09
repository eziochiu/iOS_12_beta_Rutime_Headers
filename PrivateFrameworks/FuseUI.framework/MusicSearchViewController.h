/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSearchViewController : SKUIScrollingSegmentedController <MusicClientContextConsuming, MusicJSNativeViewControllerFactory, MusicJSSearchNativeViewControllerDelegate, MusicLibrarySearchResultsViewControllerDelegate, MusicSearchBarDelegate, MusicSearchHintsViewControllerDelegate, MusicSearchRecentsViewControllerDelegate, SKUIScrollingSegmentedControllerDelegate, UIViewControllerTransitioningDelegate> {
    bool  _allowsAllContentInStoreSearch;
    bool  _allowsRadioContentInStoreSearch;
    MusicClientContext * _clientContext;
    bool  _didInsertStoreSearchResultsDocument;
    bool  _didMakeSearchBarFirstResponder;
    MusicLibrarySearchResultsViewController * _librarySearchResultsViewController;
    bool  _mediaPickerAllowsLocalSearchOnly;
    bool  _mediaPickerAllowsMultipleSelection;
    <MusicSearchViewControllerMediaPickerDelegate> * _mediaPickerDelegate;
    bool  _mediaPickerIncludePlaylists;
    bool  _mediaPickerOmitsGeniusPlaylists;
    bool  _mediaPickerPicksSingleCollection;
    _UINavigationControllerPalette * _palette;
    NSString * _partialSearchString;
    MusicSearchBar * _searchBar;
    MusicSearchHintsViewController * _searchHintsViewController;
    unsigned long long  _searchOptions;
    bool  _shouldUseMediaPickerViewConfiguration;
    UIViewController * _storeSearchResultsViewController;
    bool  _storeSearchViewIsVisible;
    bool  _storeSearchViewNeedsChangeUponAppearance;
    bool  _storeSearchViewNeedsSubmitUponAppearance;
    NSArray * _titleViewPaletteConstraints;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MusicSearchViewControllerMediaPickerDelegate> *mediaPickerDelegate;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, readonly) double searchNavigationBarPaletteHeight;
@property (nonatomic) unsigned long long searchOptions;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic) bool storeSearchViewIsVisible;
@property (readonly) Class superclass;

+ (id)_defaultSearchNavigationControllerWithSearchViewController:(id)arg1;
+ (id)_defaultSearchViewControllerForPresentingViewController:(id)arg1;
+ (id)defaultSearchBarWithTraitCollection:(id)arg1;
+ (id)mediaPickerSearchViewControllerWithSearchBar:(id)arg1 allowLocalSearchOnly:(bool)arg2 allowMultipleSelection:(bool)arg3 picksSingleCollection:(bool)arg4 includePlaylists:(bool)arg5 omitGeniusPlaylists:(bool)arg6 presentingViewController:(id)arg7;
+ (id)searchViewControllerForPresentingViewController:(id)arg1 withSearchBar:(id)arg2;

- (void).cxx_destruct;
- (bool)_allowsLocalSearchOnly;
- (void)_applyConstraints;
- (void)_attachPaletteIfNecessary;
- (void)_configureNavigationBar;
- (void)_detachPalette;
- (void)_dispatchSearchTextChangeWithTerm:(id)arg1 usingSubmitEventType:(bool)arg2;
- (id)_extraInfoForStoreSearchEvent;
- (void)_handleCanShowRadioDidChangeNotification:(id)arg1;
- (void)_handleCanShowSubscriptionContentDidChangeNotification:(id)arg1;
- (void)_handleCancelButtonPressed;
- (void)_recordSearchRecent:(id)arg1;
- (void)_removeConstraints;
- (id)_storeSearchSegmentTitle;
- (void)_updateForStoreContentAvailabilityChange;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)clientContext;
- (void)dealloc;
- (id)initForMediaPickerUseAllowLocalSearchOnly:(bool)arg1 allowMultipleSelection:(bool)arg2 pickSingleCollection:(bool)arg3 includePlaylists:(bool)arg4 omitGeniusPlaylists:(bool)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)jsSearchNativeViewController:(id)arg1 selectMediaPickerItem:(id)arg2;
- (void)jsSearchNativeViewController:(id)arg1 setSearchTerm:(id)arg2;
- (void)jsSearchNativeViewController:(id)arg1 setStoreSearchResultsDocument:(id)arg2 options:(id)arg3;
- (void)librarySearchResultsViewController:(id)arg1 didSelectResultWithTitle:(id)arg2;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (id)mediaPickerDelegate;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)scrollingSegmentedController:(id)arg1 didEndDisplayingViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarDidLayoutSubviews:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchHintsViewController:(id)arg1 didSelectSearchHintWithText:(id)arg2 URL:(id)arg3 index:(long long)arg4;
- (double)searchNavigationBarPaletteHeight;
- (unsigned long long)searchOptions;
- (void)searchRecentsViewController:(id)arg1 didSelectSearchTerm:(id)arg2;
- (id)searchTerm;
- (void)setClientContext:(id)arg1;
- (void)setMediaPickerDelegate:(id)arg1;
- (void)setSearchOptions:(unsigned long long)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setStoreSearchViewIsVisible:(bool)arg1;
- (bool)storeSearchViewIsVisible;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
