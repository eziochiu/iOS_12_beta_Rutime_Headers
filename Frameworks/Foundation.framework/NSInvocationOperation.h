/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSInvocationOperation : NSOperation {
    id  _exception;
    id  _inv;
    void * _reserved2;
}

@property (readonly, retain) NSInvocation *invocation;
@property (readonly, retain) id result;

- (void)dealloc;
- (id)init;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)invocation;
- (void)main;
- (id)result;

@end
