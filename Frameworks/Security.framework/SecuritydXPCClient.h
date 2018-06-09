/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SecuritydXPCClient : NSObject {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

+ (void)configureSecuritydXPCProtocol:(id)arg1;

- (void).cxx_destruct;
- (id)connection;
- (id)init;
- (void)setConnection:(id)arg1;

@end
