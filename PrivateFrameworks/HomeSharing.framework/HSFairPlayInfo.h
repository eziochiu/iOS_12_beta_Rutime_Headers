/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSFairPlayInfo : NSObject {
    void * _hwInfo;
    NSObject<OS_dispatch_queue> * _sapQueue;
    void * _session;
}

@property (nonatomic, readonly) NSString *deviceGUID;

- (void).cxx_destruct;
- (bool)_getHardwareInfo:(struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; }*)arg1;
- (id)_hexStringForData:(id)arg1;
- (id)beginNegotiationWithSAPVersion:(unsigned int)arg1;
- (id)continueNegotationWithSAPVersion:(unsigned int)arg1 data:(id)arg2 isComplete:(bool*)arg3;
- (void)dealloc;
- (id)deviceGUID;
- (void)endSecuritySession;
- (id)init;
- (id)securityInfoForURL:(id)arg1;

@end
