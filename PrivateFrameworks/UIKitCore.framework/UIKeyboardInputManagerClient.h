/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardInputManagerClient : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (bool)instancesRespondToSelector:(SEL)arg1;

- (bool)conformsToProtocol:(id)arg1;
- (id)connection;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (void)handleError:(id)arg1 forRequest:(id)arg2;
- (void)handleRequest:(id)arg1;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setConnection:(id)arg1;

@end