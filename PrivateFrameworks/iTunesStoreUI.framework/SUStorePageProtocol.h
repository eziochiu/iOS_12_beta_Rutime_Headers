/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStorePageProtocol : NSObject <NSCopying> {
    NSArray * _allowedOrientations;
    NSString * _copyright;
    NSArray * _expectedClientIdentifiers;
    NSNumber * _focusedItemIdentifier;
    NSArray * _navigationButtons;
    NSArray * _navigationHistoryItems;
    NSArray * _navigationMenus;
    SSURLRequestProperties * _overlayBackgroundURLRequestProperties;
    NSString * _rootSectionIdentifier;
    bool  _shouldDisplayInOverlay;
    bool  _shouldExcludeFromNavigationHistory;
    bool  _shouldReplaceRootViewController;
}

@property (nonatomic, retain) NSArray *allowedOrientations;
@property (nonatomic, retain) NSString *copyright;
@property (nonatomic, copy) NSArray *expectedClientIdentifiers;
@property (nonatomic, retain) NSNumber *focusedItemIdentifier;
@property (nonatomic, copy) NSArray *navigationButtons;
@property (nonatomic, retain) NSArray *navigationHistoryItems;
@property (nonatomic, copy) NSArray *navigationMenus;
@property (nonatomic, retain) SSURLRequestProperties *overlayBackgroundURLRequestProperties;
@property (nonatomic, retain) NSString *rootSectionIdentifier;
@property (nonatomic) bool shouldDisplayInOverlay;
@property (nonatomic) bool shouldExcludeFromNavigationHistory;
@property (nonatomic) bool shouldReplaceRootViewController;

- (id)_initCommon;
- (id)_newNavigationButtonsFromArray:(id)arg1;
- (id)_newNavigationHistoryItemsFromArray:(id)arg1;
- (id)_newNavigationMenusFromArray:(id)arg1;
- (id)allowedOrientations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyright;
- (void)dealloc;
- (id)expectedClientIdentifiers;
- (id)focusedItemIdentifier;
- (id)init;
- (id)navigationButtonForLocation:(id)arg1;
- (id)navigationButtons;
- (id)navigationHistoryItems;
- (id)navigationMenuForLocation:(long long)arg1;
- (id)navigationMenus;
- (id)overlayBackgroundURLRequest;
- (id)overlayBackgroundURLRequestProperties;
- (id)rootSectionIdentifier;
- (void)setAllowedOrientations:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setExpectedClientIdentifiers:(id)arg1;
- (void)setFocusedItemIdentifier:(id)arg1;
- (void)setNavigationButtons:(id)arg1;
- (void)setNavigationHistoryItems:(id)arg1;
- (void)setNavigationMenus:(id)arg1;
- (void)setOverlayBackgroundURLRequest:(id)arg1;
- (void)setOverlayBackgroundURLRequestProperties:(id)arg1;
- (void)setRootSectionIdentifier:(id)arg1;
- (void)setShouldDisplayInOverlay:(bool)arg1;
- (void)setShouldExcludeFromNavigationHistory:(bool)arg1;
- (void)setShouldReplaceRootViewController:(bool)arg1;
- (void)setValuesFromStorePageDictionary:(id)arg1;
- (bool)shouldDisplayInOverlay;
- (bool)shouldExcludeFromNavigationHistory;
- (bool)shouldReplaceRootViewController;

@end
