/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMutableMediaApplicationBanner : ICMediaApplicationBanner

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) int displayCount;
@property (nonatomic, copy) NSDate *displayWindowEndTime;
@property (nonatomic, copy) NSDate *displayWindowStartTime;
@property (nonatomic, copy) NSString *guid;
@property (nonatomic) int maxDisplayCount;
@property (nonatomic, copy) NSDictionary *rawPayload;
@property (nonatomic, copy) NSString *target;

- (void)setBundleIdentifier:(id)arg1;
- (void)setDisplayCount:(int)arg1;
- (void)setDisplayWindowEndTime:(id)arg1;
- (void)setDisplayWindowStartTime:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setMaxDisplayCount:(int)arg1;
- (void)setRawPayload:(id)arg1;
- (void)setTarget:(id)arg1;

@end
