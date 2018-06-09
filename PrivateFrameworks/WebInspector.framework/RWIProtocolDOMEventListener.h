/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject

@property (nonatomic) bool disabled;
@property (nonatomic) int eventListenerId;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *handler;
@property (nonatomic, copy) NSString *handlerBody;
@property (nonatomic) bool isAttribute;
@property (nonatomic, retain) RWIProtocolDebuggerLocation *location;
@property (nonatomic) int nodeId;
@property (nonatomic) bool once;
@property (nonatomic) bool passive;
@property (nonatomic, copy) NSString *sourceName;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) bool useCapture;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (bool)disabled;
- (int)eventListenerId;
- (id)handler;
- (id)handlerBody;
- (id)initWithEventListenerId:(int)arg1 type:(id)arg2 useCapture:(bool)arg3 isAttribute:(bool)arg4 nodeId:(int)arg5 handlerBody:(id)arg6;
- (bool)isAttribute;
- (id)location;
- (int)nodeId;
- (bool)once;
- (bool)passive;
- (void)setDisabled:(bool)arg1;
- (void)setEventListenerId:(int)arg1;
- (void)setHandler:(id)arg1;
- (void)setHandlerBody:(id)arg1;
- (void)setIsAttribute:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNodeId:(int)arg1;
- (void)setOnce:(bool)arg1;
- (void)setPassive:(bool)arg1;
- (void)setSourceName:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUseCapture:(bool)arg1;
- (id)sourceName;
- (id)type;
- (bool)useCapture;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithEventListenerId:(int)arg1 type:(id)arg2 useCapture:(bool)arg3 isAttribute:(bool)arg4 nodeId:(int)arg5 handlerBody:(id)arg6;

@end
