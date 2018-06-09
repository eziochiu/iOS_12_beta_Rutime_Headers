/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPMapsSupport : NSObject

+ (void)_clearMapsFavorites;
+ (id)favoritesContainer;
+ (bool)harvestMapItem:(id)arg1 documentIdentifier:(id)arg2 groupIdentifier:(id)arg3 includingPostalAddress:(bool)arg4 error:(id*)arg5;
+ (void)importMapsData;

@end
