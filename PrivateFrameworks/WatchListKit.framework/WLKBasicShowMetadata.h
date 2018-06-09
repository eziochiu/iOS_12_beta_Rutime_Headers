/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBasicShowMetadata : WLKBasicContentMetadata {
    WLKShowContentRating * _contentRating;
    NSDate * _finaleDate;
    NSArray * _genres;
    NSString * _network;
    NSDate * _releaseDate;
}

@property (nonatomic, readonly) WLKShowContentRating *contentRating;
@property (nonatomic, readonly) NSDate *finaleDate;
@property (nonatomic, readonly, copy) NSArray *genres;
@property (nonatomic, readonly, copy) NSString *network;
@property (nonatomic, readonly) NSDate *releaseDate;

- (void).cxx_destruct;
- (id)contentRating;
- (id)finaleDate;
- (id)genres;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)network;
- (id)releaseDate;

@end
