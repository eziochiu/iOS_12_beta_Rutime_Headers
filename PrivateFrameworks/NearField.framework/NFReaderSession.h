/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFReaderSession : NFSession <NFReaderSessionCallbacks> {
    NFWeakReference * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFReaderSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)checkNdefSupportsRead:(bool*)arg1 andWrite:(bool*)arg2;
- (bool)checkNdefSupportsRead:(bool*)arg1 andWrite:(bool*)arg2 error:(id*)arg3;
- (bool)checkPresence;
- (bool)checkPresenceWithError:(id*)arg1;
- (bool)connectTag:(id)arg1;
- (bool)connectTag:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didDetectExternalReader:(id)arg1;
- (void)didDetectTags:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didTerminate:(id)arg1;
- (bool)disconnectTag;
- (bool)disconnectTagWithError:(id*)arg1;
- (void)endSession;
- (id)felicaRequestService:(id)arg1 error:(id*)arg2;
- (id)felicaState;
- (id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(bool)arg4;
- (id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(bool)arg4 error:(id*)arg5;
- (id)felicaStateWithError:(id*)arg1;
- (bool)formatNdefWithKey:(id)arg1;
- (bool)formatNdefWithKey:(id)arg1 error:(id*)arg2;
- (id)ndefRead;
- (id)ndefReadWithError:(id*)arg1;
- (bool)ndefWrite:(id)arg1;
- (bool)ndefWrite:(id)arg1 error:(id*)arg2;
- (unsigned int)runScript:(id)arg1 parameters:(id)arg2 results:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)startPolling;
- (bool)startPollingForTechnology:(unsigned int)arg1;
- (bool)startPollingForTechnology:(unsigned int)arg1 error:(id*)arg2;
- (bool)startPollingWithError:(id*)arg1;
- (bool)stopPolling;
- (bool)stopPollingWithError:(id*)arg1;
- (id)transceive:(id)arg1;
- (id)transceive:(id)arg1 error:(id*)arg2;

@end
