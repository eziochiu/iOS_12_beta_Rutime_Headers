/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAnswerRequest : NSObject <NSSecureCoding, TUCallRequest, TUVideoRequest> {
    long long  _behavior;
    NSDate * _dateAnswered;
    struct CGSize { 
        double width; 
        double height; 
    }  _localLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localPortraitAspectRatio;
    bool  _pauseVideoToStart;
    NSString * _sourceIdentifier;
    NSString * _uniqueProxyIdentifier;
    bool  _wantsHoldMusic;
}

@property (nonatomic) long long behavior;
@property (nonatomic, retain) NSDate *dateAnswered;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double x1; double x2; } localPortraitAspectRatio;
@property (nonatomic) bool pauseVideoToStart;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueProxyIdentifier;
@property (nonatomic) bool wantsHoldMusic;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)behavior;
- (id)dateAnswered;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })localLandscapeAspectRatio;
- (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
- (bool)pauseVideoToStart;
- (void)setBehavior:(long long)arg1;
- (void)setDateAnswered:(id)arg1;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setPauseVideoToStart:(bool)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setUniqueProxyIdentifier:(id)arg1;
- (void)setWantsHoldMusic:(bool)arg1;
- (id)sourceIdentifier;
- (id)uniqueProxyIdentifier;
- (bool)wantsHoldMusic;

@end
