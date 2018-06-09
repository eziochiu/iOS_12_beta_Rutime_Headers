/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent> {
    struct { 
        unsigned int isDiscarded : 1; 
        unsigned int isPressed : 1; 
        unsigned int useCount; 
    }  _flags;
    UIColor * _tintColor;
    UIImage * _tintedImage;
}

@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UIImage *tintedImage;

- (void).cxx_destruct;
- (id)_tintedDisclosureImage:(bool)arg1;
- (bool)beginContentAccess;
- (void)dealloc;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (unsigned long long)hash;
- (id)initWithPressed:(bool)arg1 tintColor:(id)arg2;
- (bool)isContentDiscarded;
- (bool)isEqual:(id)arg1;
- (id)tintColor;
- (id)tintedImage;

@end
