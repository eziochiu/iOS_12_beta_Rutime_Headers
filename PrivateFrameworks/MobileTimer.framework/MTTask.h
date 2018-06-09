/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTask : NSObject {
    id /* block */  _completableBlock;
    double  _delay;
    NSString * _identifier;
    MTGCDTimer * _timer;
}

@property (nonatomic, copy) id /* block */ completableBlock;
@property (nonatomic) double delay;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) MTGCDTimer *timer;

+ (id)taskWithIdentifier:(id)arg1 completableBlock:(id /* block */)arg2;
+ (id)taskWithIdentifier:(id)arg1 delay:(double)arg2 completableBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)completableBlock;
- (double)delay;
- (id)description;
- (id)identifier;
- (void)setCompletableBlock:(id /* block */)arg1;
- (void)setDelay:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
