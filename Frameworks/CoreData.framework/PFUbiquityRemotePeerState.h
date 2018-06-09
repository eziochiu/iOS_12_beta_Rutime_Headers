/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityRemotePeerState : NSManagedObject

@property (nonatomic, retain) PFUbiquityPeer *peer;
@property (nonatomic, retain) NSString *peerID;
@property (nonatomic, retain) NSString *storeName;
@property (nonatomic, retain) NSNumber *transactionNumber;

+ (id)remotePeerStatesMatchingStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)remotePeerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)initWithStoreName:(id)arg1 andRemotePeerID:(id)arg2 insertIntoManagedObjectContext:(id)arg3;

@end
