/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAABPersonSearch : SADomainCommand

@property (nonatomic, copy) NSURL *accountIdentifier;
@property (nonatomic, retain) SALocation *address;
@property (nonatomic, copy) NSDate *birthday;
@property (nonatomic, copy) NSString *company;
@property (nonatomic, retain) SAEmail *email;
@property (nonatomic, copy) NSNumber *me;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SAPhone *phone;
@property (nonatomic, copy) NSString *relationship;
@property (nonatomic, copy) NSString *scope;

+ (id)personSearch;
+ (id)personSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)accountIdentifier;
- (id)address;
- (id)birthday;
- (id)company;
- (id)email;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)me;
- (bool)mutatingCommand;
- (id)name;
- (id)phone;
- (id)relationship;
- (bool)requiresResponse;
- (id)scope;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setBirthday:(id)arg1;
- (void)setCompany:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setMe:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhone:(id)arg1;
- (void)setRelationship:(id)arg1;
- (void)setScope:(id)arg1;

@end
