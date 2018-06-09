/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKShowOpenDialogOperation : CATOperation <SFAirDropClassroomTransferDelegate> {
    NSSet * mAirDropItems;
    bool  mAutoAccept;
    NSString * mFilesDescription;
    bool  mKeepOriginalFiles;
    NSData * mPreviewImageData;
    NSString * mSenderName;
    NSString * mSourceBundleIdentifier;
    bool  mTransferAccepted;
    bool  mTransferFinished;
    NSString * mTransferIdentifier;
    CRKAirDropTransferInfo * mTransferInfo;
    SFAirDropClassroomTransferManager * mTransferManager;
    NSSet * mURLs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fakeBundleID;

- (void).cxx_destruct;
- (void)cancel;
- (void)failWithError:(id)arg1;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(bool)arg5;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(bool)arg5 sourceBundleIdentifier:(id)arg6;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(bool)arg5 sourceBundleIdentifier:(id)arg6 filesDescription:(id)arg7;
- (bool)isAsynchronous;
- (void)main;
- (void)startTransfer;
- (void)succeedIfNeeded;
- (void)transferDidFinishWithSuccess:(bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferDidProgressWithSuccess:(bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferDidStartWithSuccess:(bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)transferWithIdentifierWasDeclined:(id)arg1;

@end
