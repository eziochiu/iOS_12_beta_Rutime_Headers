/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentModel : NSObject <ICAttachmentModelUI, QLPreviewItem> {
    ICAttachment * _attachment;
    bool  _mergeableDataDirty;
    bool  _previewGenerationOperationCancelled;
}

@property (nonatomic, readonly) ICAttachment *attachment;
@property (nonatomic, readonly) bool canMarkup;
@property (nonatomic, readonly) bool canSaveURL;
@property (nonatomic, readonly) bool canSaveURLWithOtherAttachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool generateAsynchronousPreviews;
@property (nonatomic, readonly) bool generatePreviewsDuringCloudActivity;
@property (nonatomic, readonly) id /* block */ genericBrickThumbnailCreator;
@property (nonatomic, readonly) id /* block */ genericListThumbnailCreator;
@property (nonatomic, readonly) NSString *hardLinkVersion;
@property (nonatomic, readonly) bool hasPreviews;
@property (nonatomic, readonly) bool hasThumbnailImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (getter=isMergeableDataDirty, nonatomic) bool mergeableDataDirty;
@property (nonatomic, readonly) bool needToGeneratePreviews;
@property (nonatomic, readonly) bool needsFullSizePreview;
@property bool previewGenerationOperationCancelled;
@property (nonatomic, readonly) NSString *previewImageTypeUTI;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSArray *quicklookPreviewItems;
@property (nonatomic, readonly) bool requiresNetworkToGeneratePreview;
@property (nonatomic, readonly) NSURL *saveURL;
@property (nonatomic, readonly) bool showThumbnailInNoteList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsQuickLook;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (void)deletePreviewItemHardLinkURLs;

- (void).cxx_destruct;
- (void)addLocation;
- (id)additionalIndexableTextContentInNote;
- (id)attachment;
- (void)attachmentAwakeFromFetch;
- (void)attachmentDidRefresh:(bool)arg1;
- (void)attachmentIsDeallocating:(id)arg1;
- (id)attachmentModelType;
- (void)attachmentWillRefresh:(bool)arg1;
- (void)attachmentWillTurnIntoFault;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (bool)canMarkup;
- (bool)canSaveURL;
- (bool)canSaveURLWithOtherAttachments;
- (id)correctedHardlinkURLFileExtensionForExtention:(id)arg1;
- (id)dataForQuickLook;
- (id)dataForTypeIdentifier:(id)arg1;
- (void)dealloc;
- (void)deleteSubAttachments;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1 withFileName:(id)arg2;
- (id)hardLinkFolderPath;
- (id)hardLinkVersion;
- (bool)hasPreviews;
- (bool)hasThumbnailImage;
- (id)initWithAttachment:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isMergeableDataDirty;
- (bool)isReadyToPresent;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (id)localizedFallbackTitle;
- (bool)mergeWithMergeableData:(id)arg1;
- (id)mergeableDataForCopying;
- (bool)needsFullSizePreview;
- (void)noteWillAddOrRemovePassword;
- (bool)previewGenerationOperationCancelled;
- (long long)previewImageOrientation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })previewImageOrientationTransform;
- (id)previewImageTypeUTI;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)providerDataTypes;
- (id)providerFileTypes;
- (bool)providesStandaloneTitleForNote;
- (bool)providesTextContentInNote;
- (void)regenerateTextContentInNote;
- (id)saveURL;
- (id)searchableTextContent;
- (id)searchableTextContentForLocation;
- (id)searchableTextContentInNote;
- (short)sectionForSubAttachments;
- (void)setMergeableDataDirty:(bool)arg1;
- (void)setPreviewGenerationOperationCancelled:(bool)arg1;
- (bool)shouldCropImage;
- (bool)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1;
- (bool)shouldShowInContentInfoText;
- (bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (bool)showThumbnailInNoteList;
- (id)standaloneTitleForNote;
- (bool)supportsQuickLook;
- (id)textContentInNote;
- (id)titleForSubAttachment:(id)arg1;
- (void)undeleteSubAttachments;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(bool)arg1;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;
- (void)willMarkAttachmentForDeletion;
- (void)writeMergeableData;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (struct UIImage { Class x1; }*)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct UIImage { Class x1; }*)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize { double x1; double x2; })arg2 uti:(id)arg3;

- (id)activityItems;
- (void)didCancelPreviewGeneratorOperation;
- (struct UIImage { Class x1; }*)fileIconWithPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)generateAsynchronousPreviews;
- (bool)generatePreviewsDuringCloudActivity;
- (void)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (bool)needToGeneratePreviews;
- (id)quicklookPreviewItems;
- (bool)requiresNetworkToGeneratePreview;

@end
