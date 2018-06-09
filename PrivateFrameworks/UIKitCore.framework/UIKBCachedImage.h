/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBCachedImage : UIImage

@property (nonatomic, retain) UIColor *formatColor;
@property (nonatomic, readonly) bool hasFormatColor;

+ (bool)supportsSecureCoding;

- (id)formatColor;
- (bool)hasFormatColor;
- (void)setFormatColor:(id)arg1;

@end
