/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _hash;
    NSDictionary * _kv;
    NSDictionary * _storeKVDict;
}

@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;

+ (id)createKnowledgeVectorDictionaryFromString:(id)arg1;
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_updateHash;
- (id)allPeerIDs;
- (bool)canMergeWithKnowledgeVector:(id)arg1;
- (long long)compare:(id)arg1;
- (bool)conflictsWithKnowledgeVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAncestorVectorForConflictingVector:(id)arg1;
- (id)createKnowledgeVectorString;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg1;
- (id)createStoreKnowledgeVectorDictionary;
- (void)dealloc;
- (void)decrementToMinimumWithKnowledgeVector:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPeerIDInCommonWith:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2;
- (id)initWithKnowledgeVectorString:(id)arg1;
- (id)initWithStoreKnowledgeVectorDictionary:(id)arg1;
- (bool)isAncestorOfKnowledgeVector:(id)arg1;
- (bool)isDescendantOfKnowledgeVector:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isZeroVector;
- (unsigned long long)length;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1;
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1;
- (id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1;
- (id)newKnowledgeVectorBySubtractingVector:(id)arg1;
- (id)transactionNumberForPeerID:(id)arg1;
- (void)updateWithKnowledgeVector:(id)arg1;

@end
