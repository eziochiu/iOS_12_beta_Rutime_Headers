/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNGalleryFadeAndMove : KNAnimationEffect <KNBuildBasicContentAnimator> {
    KNAnimParameterGroup * _parameterGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(long long)arg1;

- (void).cxx_destruct;
- (void)addAnimationsTo:(id)arg1 context:(id)arg2;
- (id)initWithAnimationContext:(id)arg1;

@end
