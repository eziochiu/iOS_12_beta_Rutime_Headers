/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

@interface IMTransferAgentIDSInterface : NSObject <IDSServiceDelegate> {
    IDSService * _idsService;
    int  _numTransfers;
    NSMutableDictionary * _uniqueIDToTransferCompletionBlockMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_handleUploadRequest:(id)arg1;
- (void)_handleUploadResponse:(id)arg1;
- (bool)_sendIDSMessage:(id)arg1;
- (void)_sendUploadRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 allowReauthorize:(bool)arg4;
- (void)_sendUploadResponse:(id)arg1 success:(bool)arg2 error:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 requestURLString:(id)arg6 transferID:(id)arg7;
- (int)currentTransfers;
- (void)dealloc;
- (void)decrementTransferCount;
- (void)incrementTransferCount;
- (id)init;
- (bool)isLocalDevicePresent;
- (id)localCompanionDevice;
- (void)remoteUploadFileRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end
