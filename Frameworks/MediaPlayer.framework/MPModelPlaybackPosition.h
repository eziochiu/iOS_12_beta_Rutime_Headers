/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlaybackPosition : MPModelObject

@property (nonatomic) double bookmarkTime;
@property (nonatomic) bool hasBeenPlayed;
@property (nonatomic) bool shouldRememberBookmarkTime;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSNumber *stopTime;
@property (nonatomic, copy) NSString *storeUbiquitousIdentifier;
@property (nonatomic) long long userPlayCount;

+ (id)__bookmarkTime_KEY;
+ (id)__hasBeenPlayed_KEY;
+ (id)__shouldRememberBookmarkTime_KEY;
+ (id)__startTime_KEY;
+ (id)__stopTime_KEY;
+ (id)__storeUbiquitousIdentifier_KEY;
+ (id)__userPlayCount_KEY;

@end
