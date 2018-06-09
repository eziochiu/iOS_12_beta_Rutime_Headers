/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackPlaceholderMediaItem : MPNondurableMediaItem {
    NSString * _placeholderTitle;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, copy) NSString *placeholderTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)placeholderTitle;
- (void)setPlaceholderTitle:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end