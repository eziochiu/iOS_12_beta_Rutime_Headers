/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSLockScreenContentAssertion : NSObject {
    SBSLockScreenContentAction * _action;
    id /* block */  _errorHandler;
    NSString * _identifier;
    NSString * _slot;
}

@property (nonatomic, retain) SBSLockScreenContentAction *action;
@property (getter=_errorHandler, setter=_setErrorHandler:, nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *slot;

+ (id)acquireContentProviderAssertionForType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 errorHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_acquireAssertionWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3;
- (id /* block */)_errorHandler;
- (void)_setErrorHandler:(id /* block */)arg1;
- (id)action;
- (void)dealloc;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 errorHandler:(id /* block */)arg4;
- (void)invalidate;
- (void)setAction:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSlot:(id)arg1;
- (id)slot;
- (unsigned long long)type;

@end
