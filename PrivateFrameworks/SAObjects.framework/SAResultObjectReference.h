/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAResultObjectReference : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *className;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *referenceId;
@property (readonly) Class superclass;

+ (id)resultObjectReference;
+ (id)resultObjectReferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)className;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)groupName;
- (id)referenceId;
- (void)setClassName:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setReferenceId:(id)arg1;

@end
