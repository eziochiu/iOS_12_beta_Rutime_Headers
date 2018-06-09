/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (nonatomic) bool configurable;
@property (nonatomic) bool enumerable;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *get;
@property (nonatomic) bool isOwn;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool nativeGetter;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *set;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *symbol;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *value;
@property (nonatomic) bool wasThrown;
@property (nonatomic) bool writable;

- (bool)configurable;
- (bool)enumerable;
- (id)get;
- (id)initWithName:(id)arg1 configurable:(bool)arg2 enumerable:(bool)arg3;
- (bool)isOwn;
- (id)name;
- (bool)nativeGetter;
- (id)set;
- (void)setConfigurable:(bool)arg1;
- (void)setEnumerable:(bool)arg1;
- (void)setGet:(id)arg1;
- (void)setIsOwn:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNativeGetter:(bool)arg1;
- (void)setSet:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWasThrown:(bool)arg1;
- (void)setWritable:(bool)arg1;
- (id)symbol;
- (id)value;
- (bool)wasThrown;
- (bool)writable;

@end
