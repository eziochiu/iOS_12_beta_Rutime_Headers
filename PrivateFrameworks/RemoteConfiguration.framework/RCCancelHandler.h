/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCCancelHandler : NSObject <RCOperationCanceling> {
    id /* block */  _cancelBlock;
    SEL  _selector;
    id  _strongTarget;
    id  _weakTarget;
}

@property (nonatomic, copy) id /* block */ cancelBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SEL selector;
@property (nonatomic, retain) id strongTarget;
@property (readonly) Class superclass;
@property (nonatomic) id weakTarget;

+ (id)cancelHandlerWithBlock:(id /* block */)arg1;
+ (id)cancelHandlerWithStrongTarget:(id)arg1 selector:(SEL)arg2;
+ (id)cancelHandlerWithWeakTarget:(id)arg1 selector:(SEL)arg2;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)cancelBlock;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithStrongTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;
- (SEL)selector;
- (void)setCancelBlock:(id /* block */)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setStrongTarget:(id)arg1;
- (void)setWeakTarget:(id)arg1;
- (id)strongTarget;
- (id)weakTarget;

@end
