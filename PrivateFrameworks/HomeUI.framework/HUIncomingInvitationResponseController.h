/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUIncomingInvitationResponseController : NSObject {
    <HUIncomingInvitationResponseControllerDelegate> * _delegate;
    NSError * _error;
    HMIncomingHomeInvitation * _invitation;
    unsigned long long  _response;
    unsigned long long  _state;
}

@property (nonatomic, readonly) <HUIncomingInvitationResponseControllerDelegate> *delegate;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) HMIncomingHomeInvitation *invitation;
@property (nonatomic) unsigned long long response;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)_acceptInvitation;
- (id)_declineInvitation;
- (id)delegate;
- (id)error;
- (id)init;
- (id)initWithDelegate:(id)arg1 invitation:(id)arg2;
- (id)invitation;
- (void)respondToInvitationWithResponse:(unsigned long long)arg1;
- (unsigned long long)response;
- (void)setError:(id)arg1;
- (void)setResponse:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
