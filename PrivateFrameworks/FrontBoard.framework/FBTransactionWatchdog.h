/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBTransactionWatchdog : BSWatchdog {
    FBTransaction * _transaction;
}

@property (nonatomic, readonly) FBTransaction *transaction;

- (void).cxx_destruct;
- (void)_dumpDebugInfo;
- (void)_watchdogTimerFired;
- (id)initWithTransaction:(id)arg1;
- (void)invalidate;
- (id)transaction;

@end
