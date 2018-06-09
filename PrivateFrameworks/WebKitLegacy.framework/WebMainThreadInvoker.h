/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebMainThreadInvoker : NSProxy {
    id  exception;
    id  target;
}

- (void)forwardInvocation:(id)arg1;
- (void)handleException:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
