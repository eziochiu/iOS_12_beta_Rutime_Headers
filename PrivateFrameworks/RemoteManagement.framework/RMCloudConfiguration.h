/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCloudConfiguration : RMUniquedManagedObject <RMReconcilableObject>

@property (nonatomic, retain) RMCloudActivation *activation;
@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, retain) NSData *configurationPlist;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSUUID *sortKey;

+ (id)fetchRequest;
+ (bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id*)arg3;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end
