/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityStoreMetadata : NSManagedObject

@property (nonatomic, retain) NSString *modelVersionHashString;
@property (nonatomic, retain) NSSet *peerStates;
@property (nonatomic, retain) NSSet *primaryKeyRanges;
@property (nonatomic, retain) NSString *storeIdentifier;
@property (nonatomic, retain) NSDictionary *storeOptions;
@property (nonatomic, retain) NSData *storeOptionsBinaryPlistData;
@property (nonatomic, retain) NSString *storeType;
@property (nonatomic, retain) NSString *storeURLString;
@property (nonatomic, retain) NSSet *transactionEntries;
@property (nonatomic, retain) NSString *ubiquityName;
@property (nonatomic, retain) NSString *ubiquityRelativePath;
@property (readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) NSURL *ubiquityRootURL;
@property (nonatomic, retain) NSString *ubiquityRootURLString;

+ (id)allStoreMetadataInManagedObjectContext:(id)arg1;
+ (id)baselineGCModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineMetaFileURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineRootDirectoryForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineStoreURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (bool)isBaselineRootURL:(id)arg1;
+ (id)metadataForStoreWithName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)storeMetadatasWithName:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)initWithUbiquityName:(id)arg1 andUbiquityRootLocation:(id)arg2 insertIntoManagedObjectContext:(id)arg3;
- (void)loadFromBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2;
- (id)peerStateForPeerID:(id)arg1;
- (void)setStoreOptions:(id)arg1;
- (id)storeOptions;
- (id)ubiquityRootLocation;
- (id)ubiquityRootURL;
- (void)updatePeerStatesToMatchKnowledgeVector:(id)arg1;
- (void)updateWithStore:(id)arg1 andRootLocation:(id)arg2;

@end