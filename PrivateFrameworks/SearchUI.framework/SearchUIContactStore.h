/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIContactStore : NSObject {
    NSCache * _contactCache;
    CNContactStore * _contactStore;
}

@property (retain) NSCache *contactCache;
@property (retain) CNContactStore *contactStore;

+ (id)contactForPhoneNumber:(id)arg1 email:(id)arg2;
+ (id)placeholderContact;
+ (id)sharedStore;

- (void).cxx_destruct;
- (id)cachedContactForIdentifier:(id)arg1;
- (id)contactCache;
- (id)contactForIdentifier:(id)arg1;
- (id)contactStore;
- (void)fetchContactForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchContactsForIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)setContactCache:(id)arg1;
- (void)setContactStore:(id)arg1;

@end
