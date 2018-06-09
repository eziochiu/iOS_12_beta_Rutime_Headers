/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRInvocationChain : NSObject {
    NSArray * _chainedObjects;
    <CRInvocationChainDelegate> * _delegate;
}

@property (nonatomic, copy) NSArray *chainedObjects;
@property (nonatomic) <CRInvocationChainDelegate> *delegate;

- (void).cxx_destruct;
- (id)chainedObjects;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (bool)isEligibleForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setChainedObjects:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
