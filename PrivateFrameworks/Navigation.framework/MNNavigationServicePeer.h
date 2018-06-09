/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationServicePeer : GEONavdPeer {
    NSString * _peerIdentifier;
    int  _processIdentifier;
    MNNavigationServiceLocalProxy * _proxy;
}

@property (nonatomic, readonly) NSString *peerIdentifier;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) MNNavigationServiceLocalProxy *proxy;

- (void).cxx_destruct;
- (void)clearConnectionHandlers;
- (void)dealloc;
- (id)initWithServiceInterfaceProxy:(id)arg1 connection:(id)arg2 peerIdentifier:(id)arg3 processIdentifier:(int)arg4;
- (id)peerIdentifier;
- (int)processIdentifier;
- (id)proxy;

@end
