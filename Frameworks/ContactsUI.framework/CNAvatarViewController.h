/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarViewController : UIViewController <CNAvatarViewController, CNAvatarViewController_Private> {
    <CNUIObjectViewControllerDelegate> * objectViewControllerDelegate;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic) <CNUIObjectViewControllerDelegate> *objectViewControllerDelegate;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (readonly) Class superclass;
@property (getter=isThreeDTouchEnabled, nonatomic) bool threeDTouchEnabled;
@property (nonatomic, readonly) UIView *view;

+ (Class)defaultImplementation;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(bool)arg1;

- (void).cxx_destruct;
- (id)descriptorForRequiredKeys;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSettings:(id)arg1;
- (id)objectViewControllerDelegate;
- (void)setObjectViewControllerDelegate:(id)arg1;

@end
