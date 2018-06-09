/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMConnectionMonitor : NSObject {
    <IMConnectionMonitorDelegate> * _delegate;
    NSString * _remoteHost;
}

@property (nonatomic) <IMConnectionMonitorDelegate> *delegate;
@property (setter=setDataConnectionActive:, nonatomic) bool isDataConnectionActive;
@property (nonatomic, readonly) bool isImmediatelyReachable;
@property (nonatomic, readonly, retain) NSString *remoteHost;
@property (nonatomic, readonly) bool requiresDataConnectionActivation;

+ (id)alloc;

- (void)_setup;
- (void)clear;
- (void)dealloc;
- (id)delegate;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)goDisconnected;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (bool)isDataConnectionActive;
- (bool)isImmediatelyReachable;
- (id)remoteHost;
- (bool)requiresDataConnectionActivation;
- (void)setDataConnectionActive:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
