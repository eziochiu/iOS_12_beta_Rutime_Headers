/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASocialProfile : AceObject <SAAceComparable, SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *userName;

+ (id)socialProfile;
+ (id)socialProfileWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)serviceType;
- (void)setServiceType:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)url;
- (id)userName;

@end
