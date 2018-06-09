/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUFeedTitleViewUpdate : NSObject <NSCopying> {
    UIImage * _feedImage;
    NSString * _feedName;
    unsigned long long  _storyCount;
    unsigned long long  _updateType;
}

@property (nonatomic, retain) UIImage *feedImage;
@property (nonatomic, copy) NSString *feedName;
@property (nonatomic) unsigned long long storyCount;
@property (nonatomic, readonly) unsigned long long updateType;

+ (id)feedTitleViewUpdateEmptyState;
+ (id)feedTitleViewUpdateForCheckingForNewStories;
+ (id)feedTitleViewUpdateForFeedImage:(id)arg1;
+ (id)feedTitleViewUpdateForFeedName:(id)arg1;
+ (id)feedTitleViewUpdateForNewStoriesWithStoryCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)convertToTitleViewUpdateWithCompact:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedImage;
- (id)feedName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUpdateType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setFeedImage:(id)arg1;
- (void)setFeedName:(id)arg1;
- (void)setStoryCount:(unsigned long long)arg1;
- (unsigned long long)storyCount;
- (unsigned long long)updateType;

@end
