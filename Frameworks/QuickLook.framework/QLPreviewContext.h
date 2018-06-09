/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewContext : NSObject <NSSecureCoding> {
    UIColor * _backgroundColor;
    bool  _canBeEdited;
    bool  _canBeShared;
    NSDictionary * _clientPreviewOptions;
    NSString * _contentType;
    unsigned long long  _editedFileBehavior;
    NSURL * _editedFileURL;
    QLItem * _item;
    NSNumber * _itemSize;
    NSString * _password;
    unsigned long long  _previewItemType;
    NSString * _previewTitle;
    long long  _processIdentifier;
    <QLItemThumbnailGeneratorProtocolInternal> * _thumbnailGenerator;
}

@property (retain) UIColor *backgroundColor;
@property bool canBeEdited;
@property bool canBeShared;
@property (retain) NSDictionary *clientPreviewOptions;
@property (retain) NSString *contentType;
@property unsigned long long editedFileBehavior;
@property (retain) NSURL *editedFileURL;
@property (retain) QLItem *item;
@property (retain) NSNumber *itemSize;
@property (copy) NSString *password;
@property unsigned long long previewItemType;
@property (retain) NSString *previewTitle;
@property long long processIdentifier;
@property (retain) <QLItemThumbnailGeneratorProtocolInternal> *thumbnailGenerator;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)canBeEdited;
- (bool)canBeShared;
- (id)clientPreviewOptions;
- (id)contentType;
- (unsigned long long)editedFileBehavior;
- (id)editedFileURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)itemSize;
- (id)password;
- (unsigned long long)previewItemType;
- (id)previewTitle;
- (long long)processIdentifier;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeEdited:(bool)arg1;
- (void)setCanBeShared:(bool)arg1;
- (void)setClientPreviewOptions:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setEditedFileBehavior:(unsigned long long)arg1;
- (void)setEditedFileURL:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setItemSize:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPreviewItemType:(unsigned long long)arg1;
- (void)setPreviewTitle:(id)arg1;
- (void)setProcessIdentifier:(long long)arg1;
- (void)setThumbnailGenerator:(id)arg1;
- (id)thumbnailGenerator;

@end
