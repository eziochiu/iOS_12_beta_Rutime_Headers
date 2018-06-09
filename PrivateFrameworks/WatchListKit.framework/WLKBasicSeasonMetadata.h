/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata {
    NSString * _canonicalShowID;
    WLKShowContentRating * _contentRating;
    NSNumber * _seasonNumber;
}

@property (nonatomic, readonly, copy) NSString *canonicalShowID;
@property (nonatomic, readonly) WLKShowContentRating *contentRating;
@property (nonatomic, readonly) NSNumber *seasonNumber;

+ (id)seasonsWithDictionaries:(id)arg1;

- (void).cxx_destruct;
- (id)canonicalShowID;
- (id)contentRating;
- (id)initWithDictionary:(id)arg1;
- (id)seasonNumber;

@end