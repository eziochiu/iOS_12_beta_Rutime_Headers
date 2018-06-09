/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesAssertion : NSObject {
    SBSStatusBarStyleOverridesAssertionData * _assertionData;
    id /* block */  _invalidationHandler;
}

@property (nonatomic, retain) SBSStatusBarStyleOverridesAssertionData *assertionData;
@property (getter=isExclusive, nonatomic, readonly) bool exclusive;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) bool showsWhenForeground;
@property (nonatomic, readonly) int statusBarStyleOverrides;
@property (nonatomic, copy) NSString *statusString;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)assertionWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4;
+ (id)backgroundLocationAssertionForPID:(int)arg1;

- (void).cxx_destruct;
- (void)acquireWithHandler:(id /* block */)arg1 invalidationHandler:(id /* block */)arg2;
- (void)acquireWithHandler:(id /* block */)arg1 onQueue:(id)arg2;
- (id)assertionData;
- (void)dealloc;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4;
- (id)initWithStatusBarStyleOverridesAssertionData:(id)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)isExclusive;
- (int)pid;
- (void)setAssertionData:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setStatusString:(id)arg1;
- (bool)showsWhenForeground;
- (int)statusBarStyleOverrides;
- (id)statusString;
- (id)uniqueIdentifier;

@end