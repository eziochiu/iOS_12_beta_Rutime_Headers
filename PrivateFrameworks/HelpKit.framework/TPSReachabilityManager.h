/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface TPSReachabilityManager : NSObject {
    bool  _connected;
    bool  _hostActive;
    NSString * _hostName;
    TPSReachability * _hostReachability;
    bool  _internetActive;
    TPSReachability * _internetReachability;
    bool  _notifying;
    bool  _reachabilityInitialized;
}

@property (nonatomic) bool connected;
@property (nonatomic, retain) NSString *hostName;
@property (nonatomic, retain) TPSReachability *hostReachability;
@property (nonatomic) bool internetActive;
@property (nonatomic, retain) TPSReachability *internetReachability;
@property (nonatomic) bool reachabilityInitialized;

+ (id)defaultManager;

- (void).cxx_destruct;
- (bool)connected;
- (void)dealloc;
- (id)hostName;
- (id)hostReachability;
- (id)init;
- (bool)internetActive;
- (id)internetReachability;
- (bool)isNetworkError:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (bool)reachabilityInitialized;
- (void)setConnected:(bool)arg1;
- (void)setHostName:(id)arg1;
- (void)setHostReachability:(id)arg1;
- (void)setInternetActive:(bool)arg1;
- (void)setInternetReachability:(id)arg1;
- (void)setReachabilityInitialized:(bool)arg1;
- (void)startNotifier;
- (void)stopNotifier;
- (void)updateStatus:(id)arg1;

@end
