/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamTransportSetupConfiguration : HMDTLVBase <HMDTLVCreateParse> {
    HMDDataStreamTransportCommand * _command;
    HMDDataStreamTransportProtocol * _protocol;
}

@property (nonatomic, readonly, copy) HMDDataStreamTransportCommand *command;
@property (nonatomic, readonly, copy) HMDDataStreamTransportProtocol *protocol;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)command;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)initWithCommand:(id)arg1 protocol:(id)arg2;
- (id)protocol;
- (id)tlvData;

@end
