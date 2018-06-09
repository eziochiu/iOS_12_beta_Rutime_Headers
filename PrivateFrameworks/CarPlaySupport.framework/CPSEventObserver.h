/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSEventObserver : NSObject {
    <CPSEventObserverDelegate> * _delegate;
    struct __IOHIDEventSystemClient { } * _hidSystemClient;
}

@property (nonatomic) <CPSEventObserverDelegate> *delegate;
@property (nonatomic) struct __IOHIDEventSystemClient { }*hidSystemClient;

- (void).cxx_destruct;
- (void)_handleEvent:(struct __IOHIDEvent { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (struct __IOHIDEventSystemClient { }*)hidSystemClient;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidSystemClient:(struct __IOHIDEventSystemClient { }*)arg1;

@end
