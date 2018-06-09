/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDICActivityViewController : UIActivityViewController {
    UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> * _documentInteractionActivityDelegate;
    <_UIDICActivityViewControllerDelegate> * _documentInteractionActivityDelegateRetained;
    bool  _isPerformingActivity;
    NSString * _openActivityTargetApplicationIdentifier;
    unsigned long long  _options;
}

@property (nonatomic) UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *documentInteractionActivityDelegate;
@property (nonatomic, retain) <_UIDICActivityViewControllerDelegate> *documentInteractionActivityDelegateRetained;
@property (nonatomic) bool isPerformingActivity;
@property (nonatomic, retain) NSString *openActivityTargetApplicationIdentifier;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (void)_handleDidFinishPerformingActivityType:(id)arg1 completed:(bool)arg2 resultItems:(id)arg3 activityError:(id)arg4;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (bool)_shouldShowSystemActivityType:(id)arg1;
- (void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2;
- (id)documentInteractionActivityDelegate;
- (id)documentInteractionActivityDelegateRetained;
- (bool)hidesSystemActivities;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 options:(unsigned long long)arg3;
- (bool)isPerformingActivity;
- (id)openActivityTargetApplicationIdentifier;
- (unsigned long long)options;
- (void)setDocumentInteractionActivityDelegate:(id)arg1;
- (void)setDocumentInteractionActivityDelegateRetained:(id)arg1;
- (void)setIsPerformingActivity:(bool)arg1;
- (void)setOpenActivityTargetApplicationIdentifier:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
