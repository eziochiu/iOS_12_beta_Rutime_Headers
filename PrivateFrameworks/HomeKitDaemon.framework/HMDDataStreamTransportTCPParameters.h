/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamTransportTCPParameters : HMDTLVBase <HMDTLVCreateParse> {
    NSNumber * _port;
}

@property (nonatomic, readonly, copy) NSNumber *port;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)initWithPort:(id)arg1;
- (id)port;
- (id)tlvData;

@end
