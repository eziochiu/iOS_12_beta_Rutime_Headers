/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKBRTDecayingObject : NSObject {
    bool  _isDecaying;
    bool  _isHolding;
    double  _lastUpdate;
    NSMutableArray * _resetBlocks;
    double  _timeoutDuration;
}

@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isDecaying;
@property (nonatomic, readonly) bool isHolding;
@property (nonatomic, readonly) double lastUpdate;
@property (nonatomic) double timeoutDuration;

- (void).cxx_destruct;
- (id)initWithTimeoutDuration:(double)arg1;
- (bool)isActive;
- (bool)isDecaying;
- (bool)isHolding;
- (double)lastUpdate;
- (void)onResetDo:(id /* block */)arg1;
- (void)reset;
- (void)resetActiveDecayTo:(double)arg1;
- (void)resetDecayTo:(double)arg1;
- (void)setTimeoutDuration:(double)arg1;
- (void)startDecaying;
- (void)startOrUpdateDecay;
- (double)timeoutDuration;
- (void)updateDecay;

@end
