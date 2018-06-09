/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

@interface LKLoginController : NSObject <LKLoginControllerProtocol> {
    id /* block */  _completionHandler;
    NSXPCConnection * _connection;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (retain) NSXPCConnection *connection;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id /* block */)completionHandler;
- (id)connection;
- (id)init;
- (void)loginAppleID:(id)arg1 password:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)proxy;
- (id)recentUsers;
- (void)saveClassConfiguration:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConnection:(id)arg1;

@end
