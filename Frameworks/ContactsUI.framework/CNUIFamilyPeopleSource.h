/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIFamilyPeopleSource : NSObject <CNUIPeopleSource> {
    CNUIAccountsFacade * _accountsFacade;
    CNContactStore * _contactStore;
    NSArray * _familyContacts;
    NSArray * _familyMembers;
    AAFamilyDetailsRequest * _familyRequest;
    bool  _fetching;
}

@property (nonatomic, retain) CNUIAccountsFacade *accountsFacade;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *familyContacts;
@property (nonatomic, retain) NSArray *familyMembers;
@property (nonatomic, retain) AAFamilyDetailsRequest *familyRequest;
@property (nonatomic) bool fetching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sourceKind;
+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;

- (void).cxx_destruct;
- (id)accountsFacade;
- (id)contactStore;
- (id /* block */)familyContactFromFamilyMemberTransformWithKeysToFetch:(id)arg1;
- (id)familyContacts;
- (id)familyMembers;
- (id)familyRequest;
- (void)fetchFamilyMembers;
- (bool)fetching;
- (id)groups;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;
- (void)setAccountsFacade:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setFamilyContacts:(id)arg1;
- (void)setFamilyMembers:(id)arg1;
- (void)setFamilyRequest:(id)arg1;
- (void)setFetching:(bool)arg1;

@end
