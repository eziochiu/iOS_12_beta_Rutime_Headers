/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate> {
    WBSCyclerServiceProxy * _cyclerProxy;
    <WBSCyclerTestTarget> * _testTarget;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <WBSCyclerTestTarget> *testTarget;

+ (bool)isCyclerEnabled;

- (void).cxx_destruct;
- (void)connect;
- (id)init;
- (id)initWithTestTarget:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)testTarget;

@end
