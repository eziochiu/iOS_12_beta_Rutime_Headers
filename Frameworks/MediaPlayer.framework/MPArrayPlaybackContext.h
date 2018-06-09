/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArrayPlaybackContext : MPPlaybackContext {
    NSArray * _items;
}

@property (nonatomic, readonly) NSArray *items;

+ (Class)queueFeederClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptionComponents;
- (id)initWithArrayQueueItems:(id)arg1;
- (id)items;

@end
