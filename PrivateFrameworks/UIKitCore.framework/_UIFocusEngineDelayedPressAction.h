/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusEngineDelayedPressAction : NSObject {
    long long  _pressType;
    _UIFocusEventRecognizer * _sender;
    double  _timestamp;
}

@property (nonatomic, readonly) long long pressType;
@property (nonatomic, readonly) _UIFocusEventRecognizer *sender;
@property (nonatomic, readonly) double timestamp;

+ (void)sendDelayedPressWithType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithPressType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;
- (void)_sendPressEvent;
- (long long)pressType;
- (id)sender;
- (double)timestamp;

@end
