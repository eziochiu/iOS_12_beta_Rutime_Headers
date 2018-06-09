/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaReconnaissanceSession : HMFObject {
    HMDMediaAccessory * _mediaAccessory;
    void * _outputDevice;
    void ** _session;
}

@property (nonatomic, retain) HMDMediaAccessory *mediaAccessory;
@property (nonatomic) void*outputDevice;
@property (nonatomic) void**session;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)__startSessionWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (id)mediaAccessory;
- (void*)outputDevice;
- (void**)session;
- (void)setMediaAccessory:(id)arg1;
- (void)setOutputDevice:(void*)arg1;
- (void)setSession:(void**)arg1;
- (id)shortDescription;

@end
