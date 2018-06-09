/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPQueryPlaybackContext : MPPlaybackContext {
    NSDictionary * _endTimeModifications;
    MPMediaQuery * _query;
    NSDictionary * _startTimeModifications;
}

@property (nonatomic, copy) NSDictionary *endTimeModifications;
@property (nonatomic, readonly) MPMediaQuery *query;
@property (nonatomic, copy) NSDictionary *startTimeModifications;

+ (Class)queueFeederClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimeModifications;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (id)query;
- (void)setEndTimeModifications:(id)arg1;
- (void)setStartTimeModifications:(id)arg1;
- (id)startTimeModifications;

@end
