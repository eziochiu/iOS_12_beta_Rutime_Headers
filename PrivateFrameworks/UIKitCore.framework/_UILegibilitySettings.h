/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILegibilitySettings : NSObject <BSDescriptionProviding, NSSecureCoding> {
    UIColor * _contentColor;
    double  _imageOutset;
    double  _minFillHeight;
    UIColor * _primaryColor;
    UIColor * _secondaryColor;
    double  _shadowAlpha;
    UIColor * _shadowColor;
    NSString * _shadowCompositingFilterName;
    double  _shadowRadius;
    long long  _style;
}

@property (nonatomic, retain) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double imageOutset;
@property (nonatomic) double minFillHeight;
@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic, retain) UIColor *secondaryColor;
@property (nonatomic) double shadowAlpha;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, copy) NSString *shadowCompositingFilterName;
@property (nonatomic) double shadowRadius;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)sharedInstanceForStyle:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)contentColor;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (double)imageOutset;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentColor:(id)arg1;
- (id)initWithContentColor:(id)arg1 contrast:(double)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 contentColor:(id)arg2;
- (id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;
- (bool)isEqual:(id)arg1;
- (double)minFillHeight;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setContentColor:(id)arg1;
- (void)setImageOutset:(double)arg1;
- (void)setMinFillHeight:(double)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setPropertiesForStyle:(long long)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setShadowAlpha:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowCompositingFilterName:(id)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setStyle:(long long)arg1;
- (double)shadowAlpha;
- (id)shadowColor;
- (id)shadowCompositingFilterName;
- (double)shadowRadius;
- (long long)style;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)sb_copy;
- (id)sb_description;
- (bool)sb_isEqualToLegibilitySettings:(id)arg1;
- (id)sb_styleString;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
