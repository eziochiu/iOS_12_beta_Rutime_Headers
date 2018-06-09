/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolRuntimeRemoteObject : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *className;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *classPrototype;
@property (nonatomic, copy) NSString *objectId;
@property (nonatomic, retain) RWIProtocolRuntimeObjectPreview *preview;
@property (nonatomic) int size;
@property (nonatomic, copy) NSString *stringRepresentation;
@property (nonatomic) long long subtype;
@property (nonatomic) long long type;
@property (nonatomic, retain) RWIProtocolJSONObject *value;

- (id)className;
- (id)classPrototype;
- (id)initWithType:(long long)arg1;
- (id)objectId;
- (id)preview;
- (void)setClassName:(id)arg1;
- (void)setClassPrototype:(id)arg1;
- (void)setObjectId:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setSize:(int)arg1;
- (void)setStringRepresentation:(id)arg1;
- (void)setSubtype:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (int)size;
- (id)stringRepresentation;
- (long long)subtype;
- (long long)type;
- (id)value;

@end
