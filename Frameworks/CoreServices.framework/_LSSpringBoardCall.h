/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSSpringBoardCall : NSObject <NSCopying> {
    NSString * _applicationIdentifier;
    bool  _callCompletionHandlerWhenFullyComplete;
    NSXPCConnection * _clientXPCConnection;
    NSDictionary * _launchOptions;
    NSString * _schemeIfNotFileURL;
}

@property (copy) NSString *applicationIdentifier;
@property bool callCompletionHandlerWhenFullyComplete;
@property (retain) NSXPCConnection *clientXPCConnection;
@property (copy) NSDictionary *launchOptions;

+ (id)springBoardQueue;

- (id)applicationIdentifier;
- (bool)callCompletionHandlerWhenFullyComplete;
- (void)callSpringBoardWithCompletionHandler:(id /* block */)arg1;
- (void)callWithCompletionHandler:(id /* block */)arg1;
- (id)clientXPCConnection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)launchOptions;
- (void)lieWithCompletionHandler:(id /* block */)arg1;
- (void)promptAndCallSpringBoardWithCompletionHandler:(id /* block */)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCallCompletionHandlerWhenFullyComplete:(bool)arg1;
- (void)setClientXPCConnection:(id)arg1;
- (void)setLaunchOptions:(id)arg1;

@end
