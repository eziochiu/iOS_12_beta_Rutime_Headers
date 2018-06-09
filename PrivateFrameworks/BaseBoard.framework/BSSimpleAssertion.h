/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSimpleAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    NSString * _identifier;
    id /* block */  _invalidationBlock;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(id /* block */)arg4;
- (void)invalidate;
- (bool)isValid;
- (id)reason;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end