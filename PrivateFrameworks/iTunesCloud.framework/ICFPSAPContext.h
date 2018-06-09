/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICFPSAPContext : NSObject {
    struct FPSAPContextOpaque_ { } * _fairPlaySAPContext;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    }  _hardwareInfo;
}

- (void)dealloc;
- (bool)exchangeWithSAPVersion:(unsigned int)arg1 data:(id)arg2 returningData:(id*)arg3 exchangeStatus:(char *)arg4 error:(id*)arg5;
- (id)initReturningError:(id*)arg1;
- (bool)processResponseWithSignatureData:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (bool)signData:(id)arg1 returningSignatureData:(id*)arg2 error:(id*)arg3;

@end
