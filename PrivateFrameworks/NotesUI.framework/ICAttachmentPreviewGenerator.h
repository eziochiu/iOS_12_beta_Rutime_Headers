/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate> {
    ICAttachmentPreviewGeneratorOperationQueue * _asyncGeneratorQueue;
    NSMutableSet * _attachmentIDsPending;
    NSMutableDictionary * _attachmentIDsProgress;
    ICAttachmentPreviewGeneratorOperationQueue * _costlyGeneratorQueue;
    ICAttachmentPreviewGeneratorOperationQueue * _generatorQueue;
    NSMapTable * _lastOperationForAttachmentID;
    unsigned long long  _previewGenerationState;
    NSObject<OS_dispatch_queue> * _previewProgressQueue;
    NSObject<OS_dispatch_queue> * _previewQueue;
    ICProgressIndicatorTracker * _progressTracker;
    bool  _shouldGenerateAttachmentsWhenReachable;
}

@property (nonatomic, retain) ICAttachmentPreviewGeneratorOperationQueue *asyncGeneratorQueue;
@property (nonatomic, retain) NSMutableSet *attachmentIDsPending;
@property (nonatomic, retain) NSMutableDictionary *attachmentIDsProgress;
@property (nonatomic, retain) ICAttachmentPreviewGeneratorOperationQueue *costlyGeneratorQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICAttachmentPreviewGeneratorOperationQueue *generatorQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *lastOperationForAttachmentID;
@property unsigned long long previewGenerationState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *previewProgressQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *previewQueue;
@property (nonatomic, retain) ICProgressIndicatorTracker *progressTracker;
@property (nonatomic) bool shouldGenerateAttachmentsWhenReachable;
@property (readonly) Class superclass;

+ (id)sharedGenerator;

- (void).cxx_destruct;
- (id)asyncGeneratorQueue;
- (void)attachmentDidLoad:(id)arg1;
- (id)attachmentIDsPending;
- (id)attachmentIDsProgress;
- (void)attachmentNeedsPreviewGenerationNotification:(id)arg1;
- (void)attachmentWillBeDeleted:(id)arg1;
- (void)cancelGenerationOfPendingPreviews;
- (void)cancelIfNeededForAttachment:(id)arg1;
- (id)costlyGeneratorQueue;
- (void)dealloc;
- (void)disableAutomaticPreviewGeneration;
- (void)enableAutomaticPreviewGeneration;
- (void)generatePendingPreviewForAttachment:(id)arg1;
- (void)generatePendingPreviews;
- (void)generatePreviewIfNeededForAttachment:(id)arg1;
- (void)generatePreviewIfNeededForAttachmentWithObjectID:(id)arg1;
- (void)generatePreviewsIfNeeded;
- (id)generatorQueue;
- (id)init;
- (bool)isPreviewGenerationSupported;
- (id)lastOperationForAttachmentID;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)mediaDidLoad:(id)arg1;
- (void)operationComplete:(id)arg1;
- (unsigned long long)previewGenerationState;
- (id)previewProgressQueue;
- (id)previewQueue;
- (id)progressForObjectID:(id)arg1;
- (void)progressIndicatorTrackerStartAnimation;
- (void)progressIndicatorTrackerStopAnimation;
- (id)progressTracker;
- (void)reachabilityChanged:(id)arg1;
- (void)resume;
- (void)setAsyncGeneratorQueue:(id)arg1;
- (void)setAttachmentIDsPending:(id)arg1;
- (void)setAttachmentIDsProgress:(id)arg1;
- (void)setCostlyGeneratorQueue:(id)arg1;
- (void)setGeneratorQueue:(id)arg1;
- (void)setLastOperationForAttachmentID:(id)arg1;
- (void)setPreviewGenerationState:(unsigned long long)arg1;
- (void)setPreviewProgressQueue:(id)arg1;
- (void)setPreviewQueue:(id)arg1;
- (void)setProgress:(id)arg1 forObjectID:(id)arg2;
- (void)setProgressTracker:(id)arg1;
- (void)setShouldGenerateAttachmentsWhenReachable:(bool)arg1;
- (bool)shouldGenerateAttachmentsWhenReachable;
- (void)suspend;

@end
