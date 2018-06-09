/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMConfiguration : RMUniquedManagedObject

@property (nonatomic, retain) RMActivation *activation;
@property (nonatomic, retain) NSData *configurationPlist;
@property (nonatomic, copy) NSString *identifier;

+ (id)fetchRequestForConfigurationsWithIdentifier:(id)arg1 organizationIdentifier:(id)arg2;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end
