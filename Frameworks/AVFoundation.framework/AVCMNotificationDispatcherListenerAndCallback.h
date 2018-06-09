/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject {
    int (* _callback;
    void * _callbackContextToken;
    AVWeakReference * _weakReferenceToListener;
}

@property (nonatomic, readonly) int (*callback;
@property (nonatomic) void*callbackContextToken;
@property (nonatomic, readonly) id listener;

- (int (*)callback;
- (void*)callbackContextToken;
- (void)dealloc;
- (id)init;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(int (*)arg2;
- (id)listener;
- (void)setCallbackContextToken:(void*)arg1;

@end
