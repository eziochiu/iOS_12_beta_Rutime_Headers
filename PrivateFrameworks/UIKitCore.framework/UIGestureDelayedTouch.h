/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIGestureDelayedTouch : NSObject <NSCopying> {
    bool  _cloneForSecondDelivery;
    long long  _delayCount;
    UIEvent * _event;
    UITouch * _stateWhenDelayed;
    UITouch * _stateWhenDelivered;
    UITouch * _touch;
}

@property bool cloneForSecondDelivery;
@property (nonatomic, retain) UIEvent *event;
@property (nonatomic, retain) UITouch *stateWhenDelayed;
@property (nonatomic, retain) UITouch *stateWhenDelivered;
@property (nonatomic, retain) UITouch *touch;

- (void).cxx_destruct;
- (bool)cloneForSecondDelivery;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)decrementDelayCount;
- (long long)delayCount;
- (id)description;
- (id)event;
- (void)incrementDelayCount;
- (id)init;
- (long long)phaseForDelivery;
- (void)saveCurrentTouchState;
- (void)setCloneForSecondDelivery:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setStateWhenDelayed:(id)arg1;
- (void)setStateWhenDelivered:(id)arg1;
- (void)setTouch:(id)arg1;
- (id)stateWhenDelayed;
- (id)stateWhenDelivered;
- (double)timestampForDelivery;
- (id)touch;

@end
