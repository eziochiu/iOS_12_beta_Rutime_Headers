/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCategory : RMUniquedManagedObject

@property (nonatomic, retain) NSSet *aggregateUsages;
@property (nonatomic, retain) NSSet *apps;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *usages;

+ (id)createOrReturnCategoryWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end
