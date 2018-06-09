/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPodcast : SAMPMediaItem

@property (nonatomic, copy) NSString *seriesId;
@property (nonatomic, copy) NSString *seriesTitle;

+ (id)podcast;
+ (id)podcastWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)seriesId;
- (id)seriesTitle;
- (void)setSeriesId:(id)arg1;
- (void)setSeriesTitle:(id)arg1;

@end
