/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIClassSwapper : NSObject {
    NSString * className;
    id  object;
}

+ (id)swapperForObject:(id)arg1 withClassName:(id)arg2;

- (void).cxx_destruct;
- (id)className;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 andClassName:(id)arg2;
- (id)object;

@end
