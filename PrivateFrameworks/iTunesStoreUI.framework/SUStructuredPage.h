/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStructuredPage : NSObject <NSCopying> {
    bool  _artworkShouldFitWidth;
    double  _artworkWidth;
    bool  _didShowDialog;
    long long  _displayStyle;
    SUItem * _item;
    SUItemList * _itemList;
    SUStorePageProtocol * _protocol;
    SUPageSectionGroup * _sectionsGroup;
    bool  _shouldHideSignInButton;
    NSString * _title;
    long long  _type;
    bool  _wantsIndexBar;
}

@property (nonatomic, readonly) bool artworkShouldFitWidth;
@property (nonatomic, readonly) double artworkWidth;
@property (nonatomic, readonly) bool didShowDialog;
@property (nonatomic, readonly) long long displayStyle;
@property (nonatomic, readonly) bool hasDisplayableContent;
@property (nonatomic, retain) SUItem *item;
@property (nonatomic, retain) SUItemList *itemList;
@property (nonatomic, retain) SUStorePageProtocol *protocol;
@property (nonatomic, retain) SUPageSectionGroup *sectionsGroup;
@property (nonatomic, readonly) bool shouldHideSignInButton;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long type;
@property (nonatomic, readonly) bool wantsIndexBar;

+ (long long)pageTypeForStorePageDictionary:(id)arg1;
+ (long long)pageTypeForStorePageString:(id)arg1;

- (id)_copyItemFromDictionary:(id)arg1;
- (long long)_displayStyleForString:(id)arg1;
- (void)_parseItemsFromDictionary:(id)arg1;
- (void)_parseProtocolFromDictionary:(id)arg1;
- (void)_parseTemplateParametersFromDictionary:(id)arg1;
- (bool)artworkShouldFitWidth;
- (double)artworkWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)didShowDialog;
- (long long)displayStyle;
- (bool)hasDisplayableContent;
- (id)item;
- (id)itemList;
- (bool)loadFromDictionary:(id)arg1;
- (id)protocol;
- (id)sectionsGroup;
- (void)setItem:(id)arg1;
- (void)setItemList:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setSectionsGroup:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (bool)shouldHideSignInButton;
- (id)title;
- (long long)type;
- (bool)wantsIndexBar;

@end
