/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupProtobufMessage : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *debugString;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeName;

+ (id)protobufMessage;
+ (id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2;

- (id)data;
- (id)debugString;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setData:(id)arg1;
- (void)setDebugString:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)typeName;

@end
