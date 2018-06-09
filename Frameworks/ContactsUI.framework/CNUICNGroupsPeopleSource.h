/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUICNGroupsPeopleSource : NSObject <CNUIPeopleSource> {
    CNContactStore * _contactStore;
    NSArray * _groups;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sourceKind;
+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;

- (void).cxx_destruct;
- (id)contactStore;
- (id /* block */)groupToPeopleGroupTransform;
- (id)groups;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;
- (void)setContactStore:(id)arg1;
- (void)setGroups:(id)arg1;

@end
