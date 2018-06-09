/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISizeValue : NSObject <NSCopying> {
    long long  _height;
    long long  _width;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)unionWithSize:(struct CGSize { double x1; double x2; })arg1;

@end
