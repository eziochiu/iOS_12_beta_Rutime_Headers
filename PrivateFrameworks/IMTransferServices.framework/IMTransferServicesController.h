/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
 */

@interface IMTransferServicesController : NSObject

// Image: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices

+ (id)sharedInstance;

- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 retries:(int)arg8 fileSize:(unsigned long long)arg9 progressBlock:(id /* block */)arg10 completionBlock:(id /* block */)arg11;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(bool)arg5 retries:(int)arg6 progressBlock:(id /* block */)arg7 completionBlock:(id /* block */)arg8;
- (void)cancelSendTransferID:(id)arg1;
- (void)preWarmMMCSForOwnerID:(id)arg1;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 fileSize:(unsigned long long)arg8 progressBlock:(id /* block */)arg9 completionBlock:(id /* block */)arg10;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(bool)arg4 progressBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(bool)arg5 progressBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (bool)failTransfersOnPreviewGenerationFailure;
- (void)receiveFileTransfer:(id)arg1 transferGUID:(id)arg2 topic:(id)arg3 path:(id)arg4 requestURLString:(id)arg5 ownerID:(id)arg6 signature:(id)arg7 decryptionKey:(id)arg8 fileSize:(unsigned long long)arg9 generatePreview:(bool)arg10 progressBlock:(id /* block */)arg11 completionBlock:(id /* block */)arg12;
- (id)transferServicesController;

@end
