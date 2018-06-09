/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface _CNDonationAgentXPCMethodScope : NSObject {
    NSXPCConnection * _connection;
    CNPromise * _promise;
    <DonationAgentProtocol> * _proxy;
}

@property (nonatomic, readonly) CNPromise *promise;
@property (nonatomic, readonly) <DonationAgentProtocol> *proxy;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1 promise:(id)arg2 proxy:(id)arg3;
- (id)initWithPromise:(id)arg1 proxy:(id)arg2;
- (id)promise;
- (id)proxy;

@end
