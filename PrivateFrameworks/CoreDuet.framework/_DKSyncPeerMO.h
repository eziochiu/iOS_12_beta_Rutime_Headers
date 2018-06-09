/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncPeerMO : NSManagedObject

@property (nonatomic, copy) NSString *cloudID;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic, copy) NSString *rapportID;
@property (nonatomic, copy) NSUUID *uuid;

+ (id)fetchRequest;

@end
