/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISUIActivityExtensionItemData : NSObject <NSSecureCoding> {
    NSMutableDictionary * _attachmentNamesByItemUUID;
    NSMutableDictionary * _dataTypesByItemUUID;
    NSArray * _extensionItems;
    struct __CFDictionary { } * _itemProviderOrExtensionItemWithMetadataToUUID;
    NSDictionary * _openURLAnnotationsByURL;
    NSMutableDictionary * _previewImageDataByItemUUID;
    NSMutableDictionary * _previewImagesByItemUUID;
    NSMutableDictionary * _subjectsByItemUUID;
}

@property (nonatomic, readonly) NSMutableDictionary *attachmentNamesByItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *dataTypesByItemUUID;
@property (nonatomic, retain) NSArray *extensionItems;
@property (nonatomic, readonly) struct __CFDictionary { }*itemProviderOrExtensionItemWithMetadataToUUID;
@property (nonatomic, retain) NSDictionary *openURLAnnotationsByURL;
@property (nonatomic, readonly) NSMutableDictionary *previewImageDataByItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *previewImagesByItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *subjectsByItemUUID;

+ (id)_onBackgroundQueue_extensionItemsByPreparingToSendExtensionItems:(id)arg1 toDestinationExtension:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendTemporaryUUIDMappingAttachmentToExtensionItem:(id)arg1;
- (void)_changeUUIDMappingFromExtensionItems:(id)arg1 toClonedExtensionItems:(id)arg2;
- (id)_getItemUUIDForItem:(id)arg1 createIfNeeded:(bool)arg2;
- (void)_loadItemProviderOrExtensionItemWithMetadataToUUIDFromTemporaryUUIDMappingAttachedToExtensionItems:(id)arg1;
- (void)_removeTemporaryUUIDMappingAttachmentFromExtensionItems:(id)arg1;
- (void)_setItemUUID:(id)arg1 forItem:(id)arg2;
- (id)_uuidMappingDataForTemporaryAttachmentToExtensionItem:(id)arg1 attachments:(id)arg2;
- (void)addAttachmentName:(id)arg1 forItem:(id)arg2;
- (void)addDataType:(id)arg1 forItem:(id)arg2;
- (void)addPreviewImage:(id)arg1 forItem:(id)arg2;
- (void)addPreviewImageData:(id)arg1 forItem:(id)arg2;
- (void)addSubject:(id)arg1 forItem:(id)arg2;
- (id)allDataTypes;
- (id)attachmentNameForItem:(id)arg1;
- (id)attachmentNamesByItemUUID;
- (id)dataTypeForItem:(id)arg1;
- (id)dataTypesByItemUUID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionItems;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct __CFDictionary { }*)itemProviderOrExtensionItemWithMetadataToUUID;
- (id)openURLAnnotationsByURL;
- (void)prepareForSendingAsCompletionToHostWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)prepareForSendingToExtension:(id)arg1 readyBlock:(id /* block */)arg2;
- (id)previewImageDataByItemUUID;
- (id)previewImageDataForItem:(id)arg1;
- (id)previewImageForItem:(id)arg1;
- (id)previewImagesByItemUUID;
- (void)setExtensionItems:(id)arg1;
- (void)setOpenURLAnnotationsByURL:(id)arg1;
- (id)subjectForItem:(id)arg1;
- (id)subjectsByItemUUID;

@end
