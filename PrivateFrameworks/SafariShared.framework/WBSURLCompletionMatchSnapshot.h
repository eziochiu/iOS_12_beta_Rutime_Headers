/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSURLCompletionMatchSnapshot : NSObject <NSSecureCoding, _SSURLCompletionMatch> {
    NSDate * _lastVisitTime;
    long long  _matchLocation;
    bool  _synthesizedTopHit;
    NSString * _title;
    bool  _topHit;
    bool  _topHitDueToTriggerMatch;
    NSURL * _url;
    NSString * _userVisibleURLString;
    long long  _visitCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastVisitTime;
@property (nonatomic, readonly) long long matchLocation;
@property (readonly) Class superclass;
@property (getter=isSynthesizedTopHit, nonatomic, readonly) bool synthesizedTopHit;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=isTopHit, nonatomic, readonly) bool topHit;
@property (getter=isTopHitDueToTriggerMatch, nonatomic, readonly) bool topHitDueToTriggerMatch;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly, copy) NSString *userVisibleURLString;
@property (nonatomic, readonly) long long visitCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 matchLocation:(long long)arg3 isTopHit:(bool)arg4 isSynthesizedTopHit:(bool)arg5 isTopHitDueToTriggerMatch:(bool)arg6 visitCount:(long long)arg7 lastVisitTime:(id)arg8;
- (bool)isSynthesizedTopHit;
- (bool)isTopHit;
- (bool)isTopHitDueToTriggerMatch;
- (id)lastVisitTime;
- (long long)matchLocation;
- (id)title;
- (id)url;
- (id)userVisibleURLString;
- (long long)visitCount;

@end
