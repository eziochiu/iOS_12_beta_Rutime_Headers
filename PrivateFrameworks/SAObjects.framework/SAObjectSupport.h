/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAObjectSupport : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *aceVersion;
@property (nonatomic, copy) NSString *classId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedProperties;

+ (id)objectSupport;
+ (id)objectSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceVersion;
- (id)classId;
- (id)encodedClassName;
- (id)groupId;
- (id)groupIdentifier;
- (void)setAceVersion:(id)arg1;
- (void)setClassId:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setSupportedProperties:(id)arg1;
- (id)supportedProperties;

@end
