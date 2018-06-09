/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMediaObject : NSObject <QLPreviewItem> {
    NSURL * _cachedHighQualityFileURL;
    NSObject<OS_dispatch_group> * _highQualityFetchInProgressGroup;
    bool  _isFromMe;
    bool  _suppressPreviewForUnknownSender;
    <CKFileTransfer> * _transfer;
}

@property (nonatomic, readonly, copy) NSString *UTIType;
@property (nonatomic, retain) NSURL *cachedHighQualityFileURL;
@property (nonatomic, readonly) bool canShareItem;
@property (nonatomic, readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly, copy) NSString *filename;
@property (nonatomic, readonly) bool generatePreviewOutOfProcess;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *highQualityFetchInProgressGroup;
@property (nonatomic) bool isFromMe;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic, readonly, copy) NSString *mimeType;
@property (nonatomic, readonly) bool needsAnimation;
@property (nonatomic, readonly, copy) NSString *previewFilenameExtension;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressPreviewForUnknownSender;
@property (nonatomic, readonly, copy) NSDictionary *transcoderUserInfo;
@property (nonatomic, retain) <CKFileTransfer> *transfer;
@property (nonatomic, readonly, copy) NSString *transferGUID;
@property (nonatomic, readonly) bool validatePreviewFormat;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)iconCache;
+ (bool)isPreviewable;
+ (id)mediaClasses;
+ (bool)shouldScaleUpPreview;
+ (bool)shouldShadePreview;

- (void).cxx_destruct;
- (id)ASTCDataFromImage:(id)arg1;
- (id)JPEGDataFromImage:(id)arg1;
- (id)UTIType;
- (void)_sampleImageEdges:(id)arg1 usingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)bbPreviewFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })bbSize;
- (void)cacheAndPersistPreview:(id)arg1 orientation:(BOOL)arg2;
- (id)cachedHighQualityFileURL;
- (bool)canExport;
- (bool)canShareItem;
- (Class)coloredBalloonViewClass;
- (id)composeImagesForEntryContentViewWidth:(double)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)downloadProgressImage;
- (id)downloadProgressString;
- (void)export:(id)arg1;
- (void)fetchHighQualityFile:(id /* block */)arg1;
- (id)fileManager;
- (id)fileSizeString;
- (id)fileURL;
- (id)filename;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (bool)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)highQualityFetchInProgressGroup;
- (id)icon;
- (id)initWithTransfer:(id)arg1 isFromMe:(bool)arg2 suppressPreview:(bool)arg3;
- (Class)inlineStickerBalloonViewClass;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)isPreviewable;
- (bool)isPromisedItem;
- (id)location;
- (int)mediaType;
- (id)mimeType;
- (bool)needsAnimation;
- (id)pasteboardItem;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewDispatchCache;
- (id)previewFilenameExtension;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewItemURL;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (void)setCachedHighQualityFileURL:(id)arg1;
- (void)setHighQualityFetchInProgressGroup:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setSuppressPreviewForUnknownSender:(bool)arg1;
- (void)setTransfer:(id)arg1;
- (bool)shouldBeQuickLooked;
- (bool)shouldShowDisclosure;
- (bool)shouldShowViewer;
- (id)subtitle;
- (bool)suppressPreviewForUnknownSender;
- (id)title;
- (bool)transcoderPreviewGenerationFailed;
- (id)transcoderUserInfo;
- (id)transfer;
- (id)transferGUID;
- (bool)validPreviewExistsAtURL:(id)arg1;
- (bool)validatePreviewFormat;

@end
