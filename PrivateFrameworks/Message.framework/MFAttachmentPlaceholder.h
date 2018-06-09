/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentPlaceholder : NSObject {
    NSMutableDictionary * _jsonDictionary;
}

+ (id)_localStoreURLForFileData:(id)arg1 contentID:(id)arg2;
+ (id)_localStoreURLForFileURL:(id)arg1 contentID:(id)arg2;
+ (id)_placeholderMagic;
+ (bool)cloneFileAtURL:(id)arg1 toPlaceholderURL:(id)arg2;
+ (id)dataForPlaceholder:(id)arg1;
+ (bool)hasPlaceholderRepresentation:(id)arg1;
+ (bool)isPlaceholderSerializedRepresentation:(id)arg1;
+ (id)placeholder;
+ (id)placeholderDirectory;
+ (id)placeholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
+ (id)placeholderForFileURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3;
+ (id)placeholderForMediaURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3;
+ (id)placeholderFromSerializedRepresentation:(id)arg1;
+ (id)placeholderRepresentations:(id)arg1;
+ (void)removePlaceholder:(id)arg1;
+ (void)removePlaceholderForContentID:(id)arg1;
+ (void)removePlaceholderForFileURL:(id)arg1;
+ (id)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
+ (id)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4;
+ (id)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3;
+ (bool)writeData:(id)arg1 forURL:(id)arg2;

- (void)_setJSONDictionary:(id)arg1;
- (id)contentID;
- (void)dealloc;
- (id)description;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)fileURL;
- (id)fileURLString;
- (id)init;
- (id)mimeType;
- (id)serializedRepresentation;
- (void)setContentID:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setFileURLString:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setUseMailDrop:(bool)arg1;
- (bool)useMailDrop;

@end
