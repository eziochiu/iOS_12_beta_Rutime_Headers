/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardTaskEntry : NSObject <NSCopying> {
    NSArray * __creationStack;
    id /* block */  __task;
}

@property (nonatomic, readonly, retain) NSArray *originatingStack;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)execute:(id)arg1;
- (id)initWithTask:(id /* block */)arg1;
- (id)originatingStack;

@end
