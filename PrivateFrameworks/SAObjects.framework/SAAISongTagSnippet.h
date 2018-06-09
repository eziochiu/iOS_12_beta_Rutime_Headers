/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAISongTagSnippet : SAUISnippet

@property (nonatomic, retain) SAUIAppPunchOut *attributionPunchOut;
@property (nonatomic, retain) SAMPPlaybackButton *playbackButton;
@property (nonatomic, retain) SAUIAppPunchOut *purchaseSongPunchOut;
@property (nonatomic, retain) SAUIAppPunchOut *songDetailsPunchOut;
@property (nonatomic, retain) SAAISongTag *songTag;

+ (id)songTagSnippet;
+ (id)songTagSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributionPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)playbackButton;
- (id)purchaseSongPunchOut;
- (void)setAttributionPunchOut:(id)arg1;
- (void)setPlaybackButton:(id)arg1;
- (void)setPurchaseSongPunchOut:(id)arg1;
- (void)setSongDetailsPunchOut:(id)arg1;
- (void)setSongTag:(id)arg1;
- (id)songDetailsPunchOut;
- (id)songTag;

@end
