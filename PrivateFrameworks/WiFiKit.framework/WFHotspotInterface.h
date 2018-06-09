/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFHotspotInterface : NSObject <SFRemoteHotspotSessionDelegate> {
    <WFHotspotInterfaceDelegate> * _delegate;
    SFRemoteHotspotSession * _hotspotSession;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSSet * _networks;
    bool  _scanning;
}

@property (readonly, copy) NSString *debugDescription;
@property <WFHotspotInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SFRemoteHotspotSession *hotspotSession;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSSet *networks;
@property (getter=isScanning, nonatomic) bool scanning;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_init;
- (void)_stopBrowsingRemoveCache:(bool)arg1;
- (id)delegate;
- (id)enableHotspot:(id)arg1 error:(out id*)arg2;
- (id)hotspotSession;
- (id)internalQueue;
- (bool)isScanning;
- (id)networks;
- (void)pauseBrowsing;
- (void)session:(id)arg1 updatedFoundDevices:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHotspotSession:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setNetworks:(id)arg1;
- (void)setScanning:(bool)arg1;
- (void)startBrowsing;
- (void)stopBrowsing;
- (void)updateNetworksWithHotspots:(id)arg1;

@end
