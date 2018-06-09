/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKCanonicalContainerResponse : NSObject {
    NSString * _canonicalID;
    NSArray * _channels;
    unsigned long long  _contentType;
    WLKBasicEpisodeMetadata * _currentEpisode;
    NSDictionary * _defaultSeason;
    NSDictionary * _dictionary;
    bool  _watchListable;
    bool  _watchListed;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, readonly, copy) NSArray *channels;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, copy) WLKBasicEpisodeMetadata *currentEpisode;
@property (nonatomic, readonly, copy) NSDictionary *defaultSeason;
@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (getter=isWatchListable, nonatomic, readonly) bool watchListable;
@property (getter=isWatchListed, nonatomic, readonly) bool watchListed;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)channels;
- (unsigned long long)contentType;
- (id)currentEpisode;
- (id)defaultSeason;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isWatchListable;
- (bool)isWatchListed;

@end
