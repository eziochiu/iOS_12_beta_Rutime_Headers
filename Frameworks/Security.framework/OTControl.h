/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface OTControl : NSObject {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

+ (id)controlObject:(id*)arg1;

- (void).cxx_destruct;
- (id)connection;
- (void)encryptionKey:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1;
- (void)launchBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(id /* block */)arg3;
- (void)listOfRecords:(id /* block */)arg1;
- (void)preflightBottledPeer:(id)arg1 dsid:(id)arg2 reply:(id /* block */)arg3;
- (void)reset:(id /* block */)arg1;
- (void)restore:(id)arg1 dsid:(id)arg2 secret:(id)arg3 escrowRecordID:(id)arg4 reply:(id /* block */)arg5;
- (void)scrubBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)signIn:(id)arg1 reply:(id /* block */)arg2;
- (void)signOut:(id /* block */)arg1;
- (void)signingKey:(id /* block */)arg1;

@end
