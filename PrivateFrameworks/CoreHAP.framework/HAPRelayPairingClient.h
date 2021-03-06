/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayPairingClient : HMFObject {
    NSURL * _accessoryBagURL;
    <HAPRelayPairingClientDelegate> * _delegate;
}

@property (nonatomic, readonly) NSURL *accessoryBagURL;
@property <HAPRelayPairingClientDelegate> *delegate;

- (void).cxx_destruct;
- (id)accessoryBagURL;
- (void)close;
- (id)delegate;
- (void)open;
- (void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2;
- (void)requestControllerIdentifier;
- (void)setDelegate:(id)arg1;

@end
