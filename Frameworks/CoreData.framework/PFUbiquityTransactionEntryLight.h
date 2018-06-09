/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionEntryLight : NSObject {
    NSString * _actingPeerID;
    PFUbiquityGlobalObjectID * _globalID;
    PFUbiquityKnowledgeVector * _kv;
    NSString * _storeName;
    NSDate * _transactionDate;
    PFUbiquityLocation * _transactionLogLocation;
    NSNumber * _transactionNumber;
    int  _transactionType;
}

@property (nonatomic, retain) NSString *actingPeerID;
@property (nonatomic, retain) PFUbiquityGlobalObjectID *globalID;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *knowledgeVector;
@property (nonatomic, retain) NSString *storeName;
@property (nonatomic, retain) NSDate *transactionDate;
@property (nonatomic, retain) PFUbiquityLocation *transactionLogLocation;
@property (nonatomic, retain) NSNumber *transactionNumber;
@property (nonatomic) int transactionType;

- (id)actingPeerID;
- (void)dealloc;
- (id)description;
- (id)globalID;
- (id)init;
- (id)initWithTransactionEntry:(id)arg1 ubiquityRootLocation:(id)arg2 andGlobalIDCache:(id)arg3;
- (id)knowledgeVector;
- (void)setActingPeerID:(id)arg1;
- (void)setGlobalID:(id)arg1;
- (void)setKnowledgeVector:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionLogLocation:(id)arg1;
- (void)setTransactionNumber:(id)arg1;
- (void)setTransactionType:(int)arg1;
- (id)storeName;
- (id)transactionDate;
- (id)transactionLogLocation;
- (id)transactionNumber;
- (int)transactionType;

@end
