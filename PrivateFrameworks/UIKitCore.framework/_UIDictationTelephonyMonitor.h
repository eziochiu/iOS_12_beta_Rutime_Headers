/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDictationTelephonyMonitor : NSObject {
    id /* block */  _activityChanged;
    CTCallCenter * _callCentre;
    IMAVCallManager * _facetimeCallManager;
    <NSObject> * _notificationToken;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _telephonyActivity;
}

@property (copy) id /* block */ activityChanged;
@property (nonatomic, readonly) bool telephonyActivity;

- (void)_backgroundInit;
- (void)_backgroundReset;
- (id /* block */)activityChanged;
- (void)dealloc;
- (id)init;
- (void)setActivityChanged:(id /* block */)arg1;
- (void)start;
- (bool)telephonyActivity;

@end