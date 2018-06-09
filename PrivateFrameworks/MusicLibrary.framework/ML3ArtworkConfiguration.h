/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ArtworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _artworkConfigurationDictionary;
    double  _mainScreenScale;
    NSMutableDictionary * _supportedSizesCache;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSDictionary *artworkConfigurationDictionary;
@property (nonatomic) double mainScreenScale;
@property (nonatomic, retain) NSMutableDictionary *supportedSizesCache;

+ (id)systemConfiguration;

- (void).cxx_destruct;
- (id)_supportedSizeKeysForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)accessQueue;
- (id)artworkConfigurationDictionary;
- (id)description;
- (id)initWithConfigurationDictionaries:(id)arg1;
- (double)mainScreenScale;
- (void)setAccessQueue:(id)arg1;
- (void)setArtworkConfigurationDictionary:(id)arg1;
- (void)setMainScreenScale:(double)arg1;
- (void)setSupportedSizesCache:(id)arg1;
- (id)sizesToAutogenerateForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)supportedSizesCache;
- (id)supportedSizesForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;

@end
