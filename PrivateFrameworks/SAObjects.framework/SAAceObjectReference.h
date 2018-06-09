/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceObjectReference : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic, copy) NSString *referenceType;
@property (readonly) Class superclass;

+ (id)aceObjectReference;
+ (id)aceObjectReferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)referenceIdentifier;
- (id)referenceType;
- (void)setReferenceIdentifier:(id)arg1;
- (void)setReferenceType:(id)arg1;

@end
