/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPFlowProperties : NSObject {
    int  _dataMode;
    NSUUID * _dayPassUUID;
    NWEndpoint * _directEndpoint;
    double  _fallbackTimeout;
    unsigned int  _flags;
    unsigned int  _flowIdentifier;
    NSDictionary * _replacementAddressMap;
    NPTunnelTuscanyEndpoint * _replacementEndpoint;
    NSData * _requestData;
    unsigned long long  _serviceID;
    unsigned long long * _timestamps;
}

@property int dataMode;
@property (retain) NSUUID *dayPassUUID;
@property (retain) NWEndpoint *directEndpoint;
@property bool enableNSP;
@property double fallbackTimeout;
@property unsigned int flags;
@property unsigned int flowIdentifier;
@property bool isLoopback;
@property (retain) NSDictionary *replacementAddressMap;
@property (retain) NPTunnelTuscanyEndpoint *replacementEndpoint;
@property (retain) NSData *requestData;
@property unsigned long long serviceID;
@property unsigned long long*timestamps;

- (void).cxx_destruct;
- (id)copyTLVData;
- (int)dataMode;
- (id)dayPassUUID;
- (void)dealloc;
- (id)directEndpoint;
- (bool)enableNSP;
- (double)fallbackTimeout;
- (unsigned int)flags;
- (unsigned int)flowIdentifier;
- (id)initWithTLVData:(id)arg1;
- (bool)isLoopback;
- (id)replacementAddressMap;
- (id)replacementEndpoint;
- (id)requestData;
- (unsigned long long)serviceID;
- (void)setDataMode:(int)arg1;
- (void)setDayPassUUID:(id)arg1;
- (void)setDirectEndpoint:(id)arg1;
- (void)setEnableNSP:(bool)arg1;
- (void)setFallbackTimeout:(double)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFlowIdentifier:(unsigned int)arg1;
- (void)setIsLoopback:(bool)arg1;
- (void)setReplacementAddressMap:(id)arg1;
- (void)setReplacementEndpoint:(id)arg1;
- (void)setRequestData:(id)arg1;
- (void)setServiceID:(unsigned long long)arg1;
- (void)setTimestamps:(unsigned long long*)arg1;
- (unsigned long long*)timestamps;

@end
