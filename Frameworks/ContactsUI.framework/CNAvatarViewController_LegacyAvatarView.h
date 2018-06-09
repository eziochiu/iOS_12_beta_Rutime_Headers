/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController <CNAvatarViewDelegate> {
    CNAvatarView * _avatarView;
    CNContactStore * _contactStore;
    NSArray * _contacts;
    <CNUILikenessRendering> * _imageRenderer;
    PRPersonaStore * _personaStore;
    <CNSchedulerProvider> * _schedulerProvider;
    unsigned long long  _style;
    bool  _threeDTouchEnabled;
}

@property (nonatomic) CNAvatarView *avatarView;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUILikenessRendering> *imageRenderer;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (getter=isThreeDTouchEnabled, nonatomic) bool threeDTouchEnabled;

- (void).cxx_destruct;
- (id)avatarView;
- (id)contactStore;
- (id)contacts;
- (id)descriptorForRequiredKeys;
- (id)imageRenderer;
- (id)initWithSettings:(id)arg1;
- (bool)isThreeDTouchEnabled;
- (void)loadView;
- (id)personaStore;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)schedulerProvider;
- (void)setAvatarView:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (unsigned long long)style;

@end
