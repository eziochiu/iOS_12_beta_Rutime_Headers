/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PUActivityItemSourceOperation : NSOperation {
    bool  __pu_cancelled;
    NSString * _activityType;
    PUActivityItemSource * _itemSource;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (getter=_pu_isCancelled, setter=_pu_setCancelled:) bool _pu_cancelled;
@property (getter=pu_isCancelled, readonly) bool pu_cancelled;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;

- (void).cxx_destruct;
- (bool)_pu_isCancelled;
- (void)_pu_setCancelled:(bool)arg1;
- (id)initWithActivityItemSource:(id)arg1 activityType:(id)arg2;
- (void)main;
- (void)pu_cancel;
- (bool)pu_isCancelled;
- (id)semaphore;

@end
