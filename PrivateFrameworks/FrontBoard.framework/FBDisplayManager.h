/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayManager : FBSDisplayMonitor <FBSDisplayMonitorDelegate> {
    <FBDisplayManagerDelegate> * _displayManagerDelegate;
    bool  _mainConnected;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <FBDisplayManagerDelegate> *displayManagerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSDisplayConfiguration *mainDisplay;
@property (readonly) Class superclass;

+ (id)mainConfiguration;
+ (id)mainDisplay;
+ (id)mainIdentity;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (id)displayManagerDelegate;
- (bool)displayMonitor:(id)arg1 shouldConnectDisplay:(id)arg2;
- (id)init;
- (void)invalidate;
- (id)mainDisplay;
- (void)postMainDisplayConnection;
- (void)setDisplayManagerDelegate:(id)arg1;

@end
