/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactAddFavoriteAction : CNPropertyAction <CNUIFavoritesEntryPickerDelegate> {
    CNUIFavoritesEntryPicker * _favoritesEntryPicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNUIFavoritesEntryPicker *favoritesEntryPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_saveFavorite:(id)arg1;
- (bool)canPerformAction;
- (id)favoritesEntryPicker;
- (void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (void)setFavoritesEntryPicker:(id)arg1;

@end
