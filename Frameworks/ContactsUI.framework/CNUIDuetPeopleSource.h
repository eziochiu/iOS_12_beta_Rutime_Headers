/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIDuetPeopleSource : NSObject <CNUIPeopleSource> {
    NSArray * _cachedPeople;
    CNContactStore * _contactStore;
    NSUUID * _currentFetchUUID;
    _DECConsumer * _duetConsumer;
    NSArray * _duetResults;
}

@property (nonatomic, retain) NSArray *cachedPeople;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSUUID *currentFetchUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _DECConsumer *duetConsumer;
@property (nonatomic, retain) NSArray *duetResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sourceKind;
+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;

- (void).cxx_destruct;
- (id)cachedPeople;
- (id)contactStore;
- (id)currentFetchUUID;
- (id)duetConsumer;
- (id)duetResults;
- (void)fetchDuetResults;
- (id)groups;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;
- (void)setCachedPeople:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setCurrentFetchUUID:(id)arg1;
- (void)setDuetConsumer:(id)arg1;
- (void)setDuetResults:(id)arg1;

@end
