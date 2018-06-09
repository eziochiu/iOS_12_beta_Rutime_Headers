/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBarManager : NSObject {
    NSMapTable * _barToRegistrationMap;
    bool  _bookmarksItemSelected;
    <_SFBarManagerDelegate> * _delegate;
    bool  _itemEnabledMap;
}

@property (getter=isBookmarksItemSelected, nonatomic) bool bookmarksItemSelected;
@property (nonatomic) <_SFBarManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_updateAllRegistrations;
- (void)_updateRegistration:(id)arg1;
- (bool)barRegistration:(id)arg1 canHandleLongPressForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveLongPressForBarItem:(long long)arg2;
- (void)barRegistration:(id)arg1 didReceiveTapForBarItem:(long long)arg2;
- (id)delegate;
- (id)init;
- (bool)isBarItemEnabled:(long long)arg1;
- (bool)isBookmarksItemSelected;
- (void)registerToolbar:(id)arg1 withLayout:(long long)arg2 persona:(unsigned long long)arg3;
- (void)setBarItem:(long long)arg1 enabled:(bool)arg2;
- (void)setBookmarksItemSelected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)test_numberOfRegistrations;
- (id)test_registrationForBar:(id)arg1;

@end
