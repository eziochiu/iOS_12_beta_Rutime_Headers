/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSSecureAppAssertion : NSObject {
    SBSLockScreenContentAssertion * _actualAssertion;
}

@property (nonatomic, retain) SBSLockScreenContentAssertion *actualAssertion;

+ (id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 errorHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)actualAssertion;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 errorHandler:(id /* block */)arg2;
- (void)invalidate;
- (void)setActualAssertion:(id)arg1;

@end
