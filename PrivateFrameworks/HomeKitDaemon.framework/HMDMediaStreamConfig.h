/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaStreamConfig : AVCMediaStreamConfig {
    unsigned int  _deviceLocalSSRC;
}

@property (nonatomic) unsigned int deviceLocalSSRC;

- (void)addToDescription:(id)arg1;
- (unsigned int)deviceLocalSSRC;
- (void)setDeviceLocalSSRC:(unsigned int)arg1;

@end
