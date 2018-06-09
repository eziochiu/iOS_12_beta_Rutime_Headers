/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMescalSession : NSObject {
    bool  _complete;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    }  _hardwareInfo;
    struct FPSAPContextOpaque_ { } * _session;
}

@property (getter=isComplete, readonly) bool complete;

- (id)_newDataWithBytes:(char *)arg1 length:(unsigned int)arg2;
- (void)_teardownSession;
- (void)dealloc;
- (id)exchangeData:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)isComplete;
- (id)primeForAccountCreationWithData:(id)arg1 error:(id*)arg2;
- (id)signData:(id)arg1 error:(id*)arg2;
- (bool)verifyPrimeSignature:(id)arg1 error:(id*)arg2;

@end
