/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivityViewController : UIActivityViewController <PLDismissableViewController> {
    struct __CFString { } * _aggregateKey;
    double  _currentAssetPreparationProgress;
    <PUActivityViewControllerDelegate> * _delegate;
    bool  _isDismissed;
    PUActivityItemSourceController * _itemSourceController;
    long long  _numberOfAssetPreparationsCompleted;
    long long  _numberOfAssetsToPrepare;
    NSArray * _photosActivities;
    PUProgressIndicatorView * _preparationProgressView;
    bool  _readyForInteraction;
    PLProgressView * _remakerProgressView;
    UIView * _topBorderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *photosActivities;
@property (getter=isReadyForInteraction, nonatomic) bool readyForInteraction;
@property (readonly) Class superclass;

+ (bool)_isOutboundShareActivity:(id)arg1;
+ (id)defaultActivityTypeOrder;
+ (bool)needsConfidentialityCheckForActivityType:(id)arg1;
+ (id)photosApplicationActivities;

- (void).cxx_destruct;
- (void)_activity:(id)arg1 didComplete:(bool)arg2;
- (void)_cancel;
- (void)_cleanUpActivityState;
- (void)_handleUserCancelWithCompletion:(id /* block */)arg1;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (void)_prepareAssetProgressForActivity:(id)arg1;
- (void)_presentConfidentialityWarningWithCompletionHandler:(id /* block */)arg1;
- (void)_removePreparationProgressView;
- (void)_removeRemakerProgressView;
- (void)_sharingManagerDidBeginPublishing:(id)arg1;
- (bool)_shouldShowSystemActivityType:(id)arg1;
- (void)_showPreparationProgressView:(id)arg1 withCancelationHandler:(id /* block */)arg2;
- (void)_showRemakerProgressView:(id)arg1 forMail:(bool)arg2 withCancelationHandler:(id /* block */)arg3;
- (void)_showSharingWasInterruptedForError:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateTopBorderView;
- (void)addAssetItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAssetItems:(id)arg1 photosApplicationActivities:(id)arg2;
- (bool)isReadyForInteraction;
- (void)mailActivity:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (id)photosActivities;
- (void)ppt_cancelActivity;
- (void)ppt_performActivityOfType:(id)arg1;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)removeAssetItem:(id)arg1;
- (void)setAggregateKey:(struct __CFString { }*)arg1;
- (void)setAssetItems:(id)arg1;
- (void)setCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReadyForInteraction:(bool)arg1;
- (void)updateVisibileShareActionsIfNeeded;
- (void)viewDidLayoutSubviews;

@end
