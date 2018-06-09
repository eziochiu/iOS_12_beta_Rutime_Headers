/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSUndoInvocation : _NSUndoObject {
    NSInvocation * _invocation;
}

- (void)dealloc;
- (id)description;
- (id)initWithTarget:(id)arg1 invocation:(id)arg2;
- (void)invoke;

@end
