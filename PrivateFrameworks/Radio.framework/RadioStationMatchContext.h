/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchContext : NSObject {
    RadioStationMatchMetadata * _matchMetadata;
    bool  _shouldMatchArtist;
}

@property (nonatomic, retain) RadioStationMatchMetadata *matchMetadata;
@property (nonatomic) bool shouldMatchArtist;

- (void).cxx_destruct;
- (id)copyMatchDictionary;
- (id)matchMetadata;
- (void)setMatchMetadata:(id)arg1;
- (void)setShouldMatchArtist:(bool)arg1;
- (bool)shouldMatchArtist;

@end
