/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionMonogramEntryViewController : PSListController <UITextFieldDelegate> {
    UITextField * _monogramEntry;
    bool  _showsDoneButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextField *monogramEntry;
@property (nonatomic) bool showsDoneButton;
@property (readonly) Class superclass;

+ (id)localizedDescription;
+ (id)localizedTitle;

- (void).cxx_destruct;
- (void)_doneTapped;
- (void)_resetEntryField;
- (id)customMonogram:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)monogramEntry;
- (void)returnPressedAtEnd;
- (void)setCustomMonogram:(id)arg1 specifier:(id)arg2;
- (void)setMonogramEntry:(id)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (bool)showsDoneButton;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
