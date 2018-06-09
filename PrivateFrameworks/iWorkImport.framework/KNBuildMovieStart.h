/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildMovieStart : KNBuildAppear <KNAnimationPluginAmbientAnimationStart>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)localizedMenuString:(long long)arg1;
+ (bool)startsAmbientAnimation;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(long long)arg1;

- (void)addAnimationsTo:(id)arg1 context:(id)arg2;

@end
