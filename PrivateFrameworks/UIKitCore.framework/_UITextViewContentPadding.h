/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextViewContentPadding : NSObject {
    double  _currentValue;
    <_UITextViewContentPaddingDelegate> * _delegate;
    long long  _mode;
    double  _targetValue;
}

@property (nonatomic, readonly) double currentValue;
@property (nonatomic) <_UITextViewContentPaddingDelegate> *delegate;
@property (nonatomic) long long mode;
@property (nonatomic) double targetValue;

- (void).cxx_destruct;
- (void)_checkNewCurrentValue;
- (double)currentValue;
- (id)delegate;
- (void)increaseToValue:(double)arg1;
- (id)initWithDelegate:(id)arg1;
- (long long)mode;
- (void)resetCurrentValue;
- (void)setDelegate:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setTargetValue:(double)arg1;
- (double)targetValue;

@end
