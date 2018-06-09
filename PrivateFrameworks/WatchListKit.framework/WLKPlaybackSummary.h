/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlaybackSummary : NSObject <NSSecureCoding> {
    NSString * _accountID;
    NSString * _bundleID;
    long long  _completionState;
    NSString * _contentID;
    NSDate * _currentPlaybackDate;
    NSNumber * _duration;
    NSNumber * _elapsedTime;
    NSString * _externalProfileID;
    bool  _isAlwaysLive;
    bool  _isTimerDerived;
    NSNumber * _playbackRate;
    long long  _playbackState;
    long long  _playbackType;
    NSString * _serviceID;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) long long completionState;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSDate *currentPlaybackDate;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSNumber *elapsedTime;
@property (nonatomic, readonly) NSString *externalProfileID;
@property (nonatomic, readonly) bool isAlwaysLive;
@property (nonatomic, readonly) bool isTimerDerived;
@property (nonatomic, readonly) NSNumber *playbackRate;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) long long playbackType;
@property (nonatomic, readonly) NSString *serviceID;
@property (nonatomic, readonly) NSDate *timestamp;

+ (long long)completionStateForDuration:(double)arg1 elapsedTime:(double)arg2;
+ (id)debugStringForCompletionState:(long long)arg1;
+ (double)playedThresholdTimeForDuration:(double)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (bool)_compareOptional:(id)arg1 with:(id)arg2;
- (bool)_isValid;
- (bool)_validate:(id)arg1 identifier:(id)arg2 expectedClass:(Class)arg3;
- (id)accountID;
- (id)bundleID;
- (long long)completionState;
- (id)contentID;
- (id)currentPlaybackDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)duration;
- (id)elapsedTime;
- (id)elapsedTimeSummaryWithPlaybackState:(long long)arg1 timerDerived:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)externalProfileID;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 elapsedTime:(id)arg4 externalProfileID:(id)arg5 contentID:(id)arg6 accountID:(id)arg7 playbackState:(long long)arg8 playbackRate:(id)arg9 completionState:(long long)arg10 isAlwaysLive:(bool)arg11 serviceID:(id)arg12 currentPlaybackDate:(id)arg13 playbackType:(long long)arg14 isTimerDerived:(bool)arg15;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaRemoteDictionary:(id)arg1 bundleID:(id)arg2 accountID:(id)arg3;
- (bool)isAlwaysLive;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSummary:(id)arg1;
- (bool)isEqualToSummaryExcludingCursor:(id)arg1;
- (bool)isEqualToSummaryExcludingTimestamp:(id)arg1;
- (bool)isLiveType;
- (bool)isSameContent:(id)arg1;
- (bool)isTimerDerived;
- (id)playbackRate;
- (long long)playbackState;
- (long long)playbackType;
- (id)serviceID;
- (id)timestamp;

@end
