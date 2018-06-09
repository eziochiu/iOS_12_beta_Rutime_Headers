/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPReachabilityManager : NSObject {
    bool  _connected;
    <HLPReachabilityManagerDelegate> * _delegate;
    bool  _hostActive;
    NSString * _hostName;
    HLPReachability * _hostReachability;
    bool  _internetActive;
    HLPReachability * _internetReachability;
    bool  _notifying;
    bool  _reachabilityInitialized;
}

@property (nonatomic) bool connected;
@property (nonatomic) <HLPReachabilityManagerDelegate> *delegate;
@property (nonatomic, retain) NSString *hostName;
@property (nonatomic, retain) HLPReachability *hostReachability;
@property (nonatomic) bool internetActive;
@property (nonatomic, retain) HLPReachability *internetReachability;
@property (nonatomic) bool reachabilityInitialized;

- (void).cxx_destruct;
- (bool)connected;
- (void)dealloc;
- (id)delegate;
- (id)hostName;
- (id)hostReachability;
- (id)init;
- (bool)internetActive;
- (id)internetReachability;
- (bool)isNetworkError:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (bool)reachabilityInitialized;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostName:(id)arg1;
- (void)setHostReachability:(id)arg1;
- (void)setInternetActive:(bool)arg1;
- (void)setInternetReachability:(id)arg1;
- (void)setReachabilityInitialized:(bool)arg1;
- (void)startNotifier;
- (void)stopNotifier;

@end
