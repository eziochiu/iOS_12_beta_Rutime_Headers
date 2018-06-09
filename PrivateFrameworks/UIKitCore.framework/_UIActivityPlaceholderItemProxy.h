/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIActivityPlaceholderItemProxy : NSProxy <NSCopying> {
    id  _uikit_placeholderItem;
}

@property (nonatomic, readonly) id placeholderItem;

+ (id)unproxiedItemForItem:(id)arg1;
+ (id)unproxiedItemsForItems:(id)arg1;

- (void).cxx_destruct;
- (Class)class;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPlaceholderItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isProxy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)placeholderItem;
- (bool)respondsToSelector:(SEL)arg1;
- (Class)superclass;

@end
