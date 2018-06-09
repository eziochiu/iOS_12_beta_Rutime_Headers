/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamTransportSetupResult : HMDTLVBase <HMDTLVCreateParse> {
    HMDDataStreamTransportTCPParameters * _protocolParameters;
    HMDDataStreamTransportCommandStatus * _status;
}

@property (nonatomic, readonly, copy) HMDDataStreamTransportTCPParameters *protocolParameters;
@property (nonatomic, readonly, copy) HMDDataStreamTransportCommandStatus *status;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)initWithCommandStatus:(id)arg1 protocolParameters:(id)arg2;
- (id)protocolParameters;
- (id)status;
- (id)tlvData;

@end
