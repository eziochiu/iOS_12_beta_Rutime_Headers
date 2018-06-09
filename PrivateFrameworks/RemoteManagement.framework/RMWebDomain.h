/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMWebDomain : NSManagedObject

@property (nonatomic, retain) NSSet *aggregateUsages;
@property (nonatomic, retain) RMCategory *category;
@property (nonatomic, copy) NSString *domainName;
@property (nonatomic, retain) NSSet *usages;

+ (id)createOrReturnWebDomainWithDomainName:(id)arg1 inContext:(id)arg2 error:(id*)arg3;

@end
