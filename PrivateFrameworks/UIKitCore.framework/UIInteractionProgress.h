/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInteractionProgress : NSObject {
    long long  _atLeastTwoUpdates;
    double  _mostRecentUpdateTime;
    NSPointerArray * _observers;
    double  _percentComplete;
    double  _previousPercentComplete;
    double  _previousUpdateTime;
}

@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) double velocity;

- (void).cxx_destruct;
- (unsigned long long)_indexOfObserver:(id)arg1;
- (void)addProgressObserver:(id)arg1;
- (id)description;
- (void)endInteraction:(bool)arg1;
- (void)endInteraction:(bool)arg1 finalVelocity:(double)arg2;
- (id)init;
- (long long)numberOfObservers;
- (double)percentComplete;
- (void)removeProgressObserver:(id)arg1;
- (void)setPercentComplete:(double)arg1;
- (double)velocity;

@end
