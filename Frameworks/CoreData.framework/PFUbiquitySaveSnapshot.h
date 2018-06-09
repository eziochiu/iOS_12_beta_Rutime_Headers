/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySaveSnapshot : NSObject {
    NSString * _exportingPeerID;
    NSString * _localPeerID;
    NSString * _modelVersionHash;
    NSMutableDictionary * _storeNameToStoreSaveSnapshots;
    NSDate * _transactionDate;
}

@property (nonatomic, readonly) NSString *exportingPeerID;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSString *modelVersionHash;
@property (nonatomic, readonly) NSArray *storeNames;
@property (nonatomic, retain) NSDate *transactionDate;

- (void)dealloc;
- (id)description;
- (id)exportingPeerID;
- (id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2;
- (id)initWithTransactionLog:(id)arg1;
- (id)localPeerID;
- (id)modelVersionHash;
- (void)setTransactionDate:(id)arg1;
- (id)storeNames;
- (id)storeSaveSnapshotForStore:(id)arg1;
- (id)storeSaveSnapshotForStoreName:(id)arg1;
- (id)transactionDate;

@end
