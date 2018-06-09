/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKSharedPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver> {
    NPKCompanionAgentConnection * _connection;
}

@property (nonatomic, retain) NPKCompanionAgentConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)archiveContext:(id)arg1;
- (id)connection;
- (id)initWithCompanionAgentConnection:(id)arg1;
- (void)setConnection:(id)arg1;

@end
