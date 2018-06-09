/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDAssertionRequest : NSObject {
    PDAssertion * _assertion;
    id /* block */  _resultHandler;
}

@property (nonatomic, retain) PDAssertion *assertion;
@property (nonatomic, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)assertion;
- (unsigned long long)hash;
- (id)initWithAssertion:(id)arg1 resultHandler:(id /* block */)arg2;
- (id /* block */)resultHandler;
- (void)setAssertion:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;

@end
