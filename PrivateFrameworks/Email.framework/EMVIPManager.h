/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMVIPManager : NSObject {
    EAEmailAddressSet * _cachedEmailAddresses;
    CNContactStore * _contactStore;
    NSUbiquitousKeyValueStore * _keyValueStore;
    NSObject<OS_dispatch_queue> * _operationQueue;
    NSMutableDictionary * _vipsByIdentifier;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) NSUbiquitousKeyValueStore *keyValueStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *operationQueue;

+ (id)_contactDescriptors;
+ (id)_log;
+ (void)initialize;
+ (id)plistURL;

- (void).cxx_destruct;
- (id)_allVIPEmailAddresses;
- (id)_cloudKeyForIdentifier:(id)arg1;
- (id)_contactForName:(id)arg1 emailAddresses:(id)arg2;
- (id)_contactFromContacts:(id)arg1 matchingMostAddresses:(id)arg2;
- (bool)_isVIPForContact:(id)arg1 orAddresses:(id)arg2;
- (void)_keyValueStoreChanged:(id)arg1;
- (void)_loadVIPs;
- (void)_mergeVIPs;
- (void)_removeVIPsWithIdentifiers:(id)arg1;
- (void)_saveVIPs;
- (void)_saveVIPsLocally;
- (void)_updateCloudWithLocal;
- (void)_updateLocalWithCloud:(id)arg1 refresh:(bool)arg2;
- (id)_validatedCloudVIPFromStore:(id)arg1 withCloudKey:(id)arg2;
- (void)_vipManagerCommonInitWithKeyValueStore:(id)arg1 contactStore:(id)arg2;
- (id)_vipsDictionary;
- (id)allVIPEmailAddresses;
- (id)allVIPs;
- (id)contactStore;
- (void)dealloc;
- (id)init;
- (id)initWithSyncEnabled:(bool)arg1;
- (id)keyValueStore;
- (id)operationQueue;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (void)saveVIPs:(id)arg1;
- (id)vipWithIdentifier:(id)arg1;

@end
