/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIEventDispatcher : NSObject <UIEventFetcherSink> {
    struct __CFRunLoopSource { } * _collectHIDEventsRunLoopSource;
    UIEventFetcher * _eventFetcher;
    struct __CFRunLoopSource { } * _handleEventQueueRunLoopSource;
    UIEventEnvironment * _mainEnvironment;
    struct __CFRunLoop { } * _runLoop;
}

@property (nonatomic, retain) UIEventEnvironment *mainEnvironment;

- (void).cxx_destruct;
- (void)_installEventRunLoopSources:(struct __CFRunLoop { }*)arg1;
- (void)dealloc;
- (void)eventFetcherDidReceiveEvents:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (id)mainEnvironment;
- (void)setMainEnvironment:(id)arg1;
- (void)signalNextDelivery;

@end
