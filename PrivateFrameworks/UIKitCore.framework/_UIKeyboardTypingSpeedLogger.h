/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardTypingSpeedLogger : NSObject {
    long long  _typingDelaySampleCount;
    long long  _typingDelaySamples;
}

- (id)init;
- (void)logToAggregate;
- (void)recordTypingDelay:(double)arg1;

@end
