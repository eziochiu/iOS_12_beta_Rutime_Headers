/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject

@property (nonatomic) bool empty;
@property (nonatomic, retain) RWIProtocolDebuggerLocation *location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *object;
@property (nonatomic) long long type;

- (bool)empty;
- (id)initWithObject:(id)arg1 type:(long long)arg2;
- (id)location;
- (id)name;
- (id)object;
- (void)setEmpty:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
