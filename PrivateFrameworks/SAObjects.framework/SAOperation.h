/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAOperation : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSDictionary *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domainId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *operationId;
@property (readonly) Class superclass;

+ (id)operation;
+ (id)operationWithDictionary:(id)arg1 context:(id)arg2;

- (id)constraints;
- (id)domainId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)operationId;
- (void)setConstraints:(id)arg1;
- (void)setDomainId:(id)arg1;
- (void)setOperationId:(id)arg1;

@end
