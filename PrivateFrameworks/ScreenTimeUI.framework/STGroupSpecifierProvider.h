/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STGroupSpecifierProvider : NSObject <UITableViewDelegate> {
    <STGroupSpecifierProviderDelegate> * _delegate;
    PSSpecifier * _groupSpecifier;
    bool  _invalid;
    bool  _isHidden;
    NSMutableArray * _privateSpecifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <STGroupSpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property bool invalid;
@property (nonatomic) bool isHidden;
@property (retain) NSMutableArray *privateSpecifiers;
@property (nonatomic, readonly, copy) NSArray *specifiers;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversOfIsHidden;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)groupSpecifier;
- (id)init;
- (void)insertSpecifiers:(id)arg1 atIndexes:(id)arg2;
- (bool)invalid;
- (void)invalidate;
- (bool)isHidden;
- (id)mutableSpecifiers;
- (id)privateSpecifiers;
- (void)reloadSpecifier:(id)arg1 animated:(bool)arg2;
- (void)removeSpecifiersAtIndexes:(id)arg1;
- (void)replaceObjectInSpecifiersAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceSpecifiersAtIndexes:(id)arg1 withSpecifiers:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setPrivateSpecifiers:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)showController:(id)arg1 animated:(bool)arg2;
- (id)specifiers;
- (id)specifiersAtIndexes:(id)arg1;

@end
