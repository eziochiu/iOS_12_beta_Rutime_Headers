/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileCoordinatorAccessorBlockCompletion : NSObject {
    id /* block */  block;
    int  count;
}

+ (id)completionWithBlock:(id /* block */)arg1;

- (void)dealloc;
- (void)decrement;
- (void)increment;

@end
