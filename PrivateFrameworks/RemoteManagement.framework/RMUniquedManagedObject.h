/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMUniquedManagedObject : NSManagedObject

@property (nonatomic, readonly) NSUUID *sortKey;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void)awakeFromInsert;
- (id)computeUniqueIdentifier;
- (void)updateUniqueIdentifier;

@end
