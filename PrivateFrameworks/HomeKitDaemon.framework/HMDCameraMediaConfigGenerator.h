/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraMediaConfigGenerator : HMFObject

- (bool)_loadAVCAudioStreamConfig:(id)arg1 protocolParameters:(id)arg2;
- (bool)_loadAVCVideoStreamConfig:(id)arg1 protocolParameters:(id)arg2;
- (bool)_loadConfig:(id)arg1 cipherCuite:(id)arg2;
- (void)_loadConfig:(id)arg1 sendSrtpParameters:(id)arg2 receiveSrtpParameters:(id)arg3;
- (void)_loadMiscConfig:(id)arg1;
- (bool)extractReselectedConfigFromVideoTier:(id)arg1 videoStreamConfig:(id*)arg2;
- (bool)extractSelectedConfigFromProtocolParameters:(id)arg1 videoStreamConfig:(id*)arg2 audioStreamConfig:(id*)arg3;

@end
