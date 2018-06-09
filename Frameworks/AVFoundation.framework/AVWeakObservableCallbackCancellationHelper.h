/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVWeakObservableCallbackCancellationHelper : NSObject {
    NSMutableArray * _callbackRegistrations;
}

- (void)addCallbackToCancel:(id)arg1;
- (void)cancelAllCallbacks;
- (void)dealloc;
- (id)init;

@end
