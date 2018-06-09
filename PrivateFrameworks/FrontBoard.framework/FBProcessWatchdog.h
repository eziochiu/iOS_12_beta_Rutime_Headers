/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessWatchdog : FBSProcessWatchdog {
    long long  _event;
    FBProcessWatchdogEventContext * _eventContext;
}

@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly, retain) FBProcessWatchdogEventContext *eventContext;

- (void).cxx_destruct;
- (long long)event;
- (id)eventContext;
- (id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3;

@end
