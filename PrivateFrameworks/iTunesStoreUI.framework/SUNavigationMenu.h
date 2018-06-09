/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUNavigationMenu : NSObject <NSCopying> {
    NSString * _cancelTitle;
    NSString * _closedTitle;
    long long  _initialSelectedIndex;
    long long  _location;
    NSArray * _menuItems;
    NSArray * _navigationButtons;
    NSString * _openTitle;
}

@property (nonatomic, readonly) NSString *cancelTitle;
@property (nonatomic, readonly) NSString *closedTitle;
@property (nonatomic, readonly) long long initialSelectedIndex;
@property (nonatomic) long long location;
@property (nonatomic, readonly) NSArray *menuItems;
@property (nonatomic, readonly) NSArray *navigationButtons;
@property (nonatomic, readonly) NSString *openTitle;

- (void)_loadFromDictionary:(id)arg1;
- (long long)_locationForString:(id)arg1;
- (id)_newMenuItemsFromArray:(id)arg1;
- (id)_newNavigationButtonsFromArray:(id)arg1;
- (id)cancelTitle;
- (id)closedTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)initialSelectedIndex;
- (long long)location;
- (id)menuItems;
- (id)navigationButtonForLocation:(id)arg1;
- (id)navigationButtons;
- (id)openTitle;
- (void)setLocation:(long long)arg1;

@end
