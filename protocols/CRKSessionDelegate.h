/* made by EzioChiu.
 */

@protocol CRKSessionDelegate <NSObject>

@required

- (id)clientIdentityForSession:(CRKSession *)arg1;
- (void)session:(CRKSession *)arg1 didConnectWithTransport:(CATTransport *)arg2;
- (void)session:(CRKSession *)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
- (void)sessionDidBecomeConnectable:(CRKSession *)arg1;
- (void)sessionDidBecomeNotConnectable:(CRKSession *)arg1;
- (void)sessionDidDisconnect:(CRKSession *)arg1;
- (void)sessionDidInvalidate:(CRKSession *)arg1;
- (void)sessionDidLoseBeacon:(CRKSession *)arg1;
- (NSArray *)trustedAnchorCertificatesForSession:(CRKSession *)arg1;

@end
