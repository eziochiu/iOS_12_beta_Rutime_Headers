/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPrimaryResourceDataStoreImageDerivativeRecipe : PLResourceRecipe {
    unsigned int  _recipeID;
}

@property (nonatomic) unsigned int recipeID;

+ (struct CGSize { double x1; double x2; })scaleOriginalSize:(struct CGSize { double x1; double x2; })arg1 toShortSideTarget:(double)arg2 maxLongSideLength:(double)arg3;

- (bool)_isAspectShortSizing;
- (double)_shortSideTargetLength;
- (void)applyToResource:(id)arg1 sourceProperties:(id)arg2 inContext:(id)arg3;
- (bool)colorSpaceIsNativeForDisplay;
- (id)description;
- (id)initWithRecipeID:(unsigned int)arg1;
- (unsigned int)recipeID;
- (void)setRecipeID:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })sizeForAssetWidth:(long long)arg1 height:(long long)arg2;

@end
