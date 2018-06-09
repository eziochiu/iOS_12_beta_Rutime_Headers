/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertion : BKSAssertion {
    NSString * _bundleIdentifier;
    unsigned int  _flags;
    int  _pid;
    unsigned int  _reason;
}

@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) unsigned int reason;

+ (id)NameForReason:(unsigned int)arg1;

- (id)_clientQueue_createEvent;
- (id)_clientQueue_destroyEvent;
- (id)_clientQueue_updateEvent;
- (void)dealloc;
- (unsigned int)flags;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id /* block */)arg5;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id /* block */)arg5 acquire:(bool)arg6;
- (id)initWithBundleIdentifier:(id)arg1 pid:(int)arg2 flags:(unsigned int)arg3 reason:(unsigned int)arg4 name:(id)arg5 withHandler:(id /* block */)arg6 acquire:(bool)arg7;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id /* block */)arg5;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id /* block */)arg5 acquire:(bool)arg6;
- (unsigned int)reason;
- (void)setFlags:(unsigned int)arg1;

@end
