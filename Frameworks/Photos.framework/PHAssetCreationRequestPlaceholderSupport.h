/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest <PHClientSenderPropertySet> {
    long long  _placeholderCreationMode;
    PLClientServerTransaction * _serverTransaction;
    PLAssetsdClientServiceSender * clientSender;
}

@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (nonatomic, retain) PLAssetsdClientServiceSender *clientSender;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg1 inPhotoLibrary:(id)arg2 error:(id*)arg3;
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType;
- (void)_setDestinationAssetAvailabilityHandler:(id /* block */)arg1;
- (bool)_shouldBakeInAdjustmentsForSourceAsset:(id)arg1;
- (void)_updateManagedAssetAfterResourceDownload:(id)arg1;
- (void)changeFailedOnClientWithError:(id)arg1;
- (void)changeFailedOnDaemonWithError:(id)arg1;
- (id)clientSender;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (void)setClientSender:(id)arg1;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;

@end
