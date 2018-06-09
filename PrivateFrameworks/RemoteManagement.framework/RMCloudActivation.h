/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCloudActivation : RMUniquedManagedObject <RMReconcilableObject>

@property (nonatomic, retain) NSData *activationPlist;
@property (nonatomic) long long activationType;
@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, retain) NSSet *configurations;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) RMCloudOrganization *organization;
@property (nonatomic, copy) NSUUID *sortKey;

+ (id)fetchRequest;
+ (bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id*)arg3;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end
