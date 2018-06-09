/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSessionAssertionWrapper : NSObject {
    id /* block */  _createAndTakeBlock;
    HDAssertion * _currentAssertion;
}

@property (nonatomic, readonly, copy) id /* block */ createAndTakeBlock;
@property (nonatomic, readonly) bool taken;

- (void).cxx_destruct;
- (void)_releaseAssertion;
- (void)_takeAssertion;
- (id /* block */)createAndTakeBlock;
- (id)initWithCreateAndTakeBlock:(id /* block */)arg1;
- (bool)taken;

@end
