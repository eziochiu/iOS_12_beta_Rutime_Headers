/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMApp : RMUniquedManagedObject

@property (nonatomic, retain) NSSet *aggregateUsages;
@property (nonatomic, copy) NSURL *artworkURL60;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) RMCategory *category;
@property (nonatomic, retain) NSSet *installedOnDevices;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *nameLanguageCode;
@property (nonatomic, retain) NSSet *usages;

+ (id)createOrReturnAppWithBundleIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3;

- (id)computeUniqueIdentifier;
- (void)setBundleIdentifier:(id)arg1;

@end
