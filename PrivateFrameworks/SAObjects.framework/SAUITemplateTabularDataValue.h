/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem

@property (nonatomic, retain) SAUITemplateAttributedString *attributedText;
@property (nonatomic, copy) NSDictionary *attributedTexts;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic) double imagePointHeight;
@property (nonatomic) double imagePointWidth;
@property (nonatomic, copy) NSArray *themeImages;

+ (id)tabularDataValue;
+ (id)tabularDataValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributedText;
- (id)attributedTexts;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)highlighted;
- (id)image;
- (double)imagePointHeight;
- (double)imagePointWidth;
- (void)setAttributedText:(id)arg1;
- (void)setAttributedTexts:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImagePointHeight:(double)arg1;
- (void)setImagePointWidth:(double)arg1;
- (void)setThemeImages:(id)arg1;
- (id)themeImages;

@end
