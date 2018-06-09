/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreBrowseResponse : MPModelResponse {
    MPChangeDetails * _changeDetails;
    MPModelStoreBrowseResponseParser * _parser;
}

@property (nonatomic, retain) MPChangeDetails *changeDetails;
@property (nonatomic, readonly) bool hasAdditionalContentItems;
@property (nonatomic, retain) MPModelStoreBrowseResponseParser *parser;

- (void).cxx_destruct;
- (id)changeDetails;
- (bool)hasAdditionalContentItems;
- (id)parser;
- (void)setChangeDetails:(id)arg1;
- (void)setParser:(id)arg1;

@end
