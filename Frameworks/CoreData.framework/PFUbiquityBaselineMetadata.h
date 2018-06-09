/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding, NSSecureCoding> {
    NSString * _authorPeerID;
    PFUbiquityKnowledgeVector * _kv;
    NSString * _modelVersionHash;
    PFUbiquityKnowledgeVector * _pKV;
    NSMutableDictionary * _peerRanges;
    PFUbiquityLocation * _rootLocation;
    NSString * _storeName;
}

@property (readonly) NSString *authorPeerID;
@property (readonly) PFUbiquityKnowledgeVector *knowledgeVector;
@property (readonly) NSString *modelVersionHash;
@property (readonly) NSDictionary *peerRanges;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *previousKnowledgeVector;
@property (readonly) PFUbiquityLocation *rootLocation;
@property (readonly) NSString *storeName;

+ (bool)supportsSecureCoding;

- (void)_migrateToModelVersionHash:(id)arg1;
- (void)addDictionaryForPeerRange:(id)arg1;
- (id)authorPeerID;
- (id)createNewLocalRangeWithRangeStart:(unsigned long long)arg1 andRangeEnd:(unsigned long long)arg2 forEntityNamed:(id)arg3;
- (id)createPeerRangeDictionary:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)gatherMetadataWithStore:(id)arg1 andError:(id*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)knowledgeVector;
- (id)modelVersionHash;
- (id)peerRanges;
- (id)previousKnowledgeVector;
- (id)rootLocation;
- (void)setKnowledgeVector:(id)arg1;
- (void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)arg1;
- (id)storeName;

@end