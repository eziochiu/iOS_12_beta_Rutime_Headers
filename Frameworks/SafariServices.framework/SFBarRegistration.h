/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBarRegistration : UIResponder <_SFBarRegistrationToken> {
    UIBarButtonItem * _backItem;
    UIView * _bar;
    _SFBarManager * _barManager;
    UIBarButtonItem * _bookmarksItem;
    UIBarButtonItem * _forwardItem;
    UIBarButtonItem * _newTabItem;
    UIBarButtonItem * _openInSafariItem;
    UIBarButtonItem * _shareItem;
    UIBarButtonItem * _tabExposeItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UIBarButtonItemForItem:(long long)arg1;
- (id)_UIBarButtonItemForBarItem:(long long)arg1;
- (long long)_barItemForUIBarButtonItem:(id)arg1;
- (void)_itemReceivedLongPress:(id)arg1;
- (void)_itemReceivedTap:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithBar:(id)arg1 barManager:(id)arg2 layout:(long long)arg3 persona:(unsigned long long)arg4;
- (id)popoverSourceInfoForItem:(long long)arg1;
- (void)setBarItem:(long long)arg1 enabled:(bool)arg2;
- (void)setBookmarksItemSelected:(bool)arg1;

@end
