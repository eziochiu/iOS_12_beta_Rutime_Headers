/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentLibraryDataProvider : NSObject <MFAttachmentDataProviderProtocol> {
    MFMessageLibrary * _messageLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property MFMessageLibrary *messageLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(id /* block */)arg4;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)initWithLibrary:(id)arg1;
- (id)messageForAttachment:(id)arg1;
- (id)messageLibrary;
- (void)setMessageLibrary:(id)arg1;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end
