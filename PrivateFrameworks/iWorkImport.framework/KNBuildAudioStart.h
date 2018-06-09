/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildAudioStart : KNBuildMovieStart <KNAnimationPluginArchiving>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(long long)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6;
+ (id)localizedMenuString:(long long)arg1;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(long long)arg4 isFromClassic:(bool)arg5 version:(unsigned long long)arg6;

@end
