/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMOrganization : RMUniquedManagedObject

@property (nonatomic, retain) NSSet *activations;
@property (nonatomic, retain) RMDeclarationTransactionRecord *currentDeclarationTransaction;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *users;

+ (id)fetchRequestForOrganizationsWithIdentifier:(id)arg1;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end
