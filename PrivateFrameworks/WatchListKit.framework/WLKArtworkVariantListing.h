/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKArtworkVariantListing : NSObject {
    NSArray * _artworkVariants;
}

@property (nonatomic, readonly, copy) NSArray *artworkVariants;

- (void).cxx_destruct;
- (id)artworkVariants;
- (id)bestArtworkVariantForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)bestArtworkVariantOfType:(long long)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithArtworkDictionary:(id)arg1;

@end
