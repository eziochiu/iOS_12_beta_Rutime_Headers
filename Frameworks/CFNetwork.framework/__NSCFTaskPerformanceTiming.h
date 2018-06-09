/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFTaskPerformanceTiming : NSObject <NSSecureCoding> {
    NSUUID * __activityUUID;
    NSDate * __didCompleteWithError;
    bool  __isBackground;
    long long  __numberOfRetries;
    NSDate * __resumeTime;
}

@property (retain) NSUUID *_activityUUID;
@property (retain) NSDate *_didCompleteWithError;
@property bool _isBackground;
@property long long _numberOfRetries;
@property (retain) NSDate *_resumeTime;

+ (bool)supportsSecureCoding;

- (id)_activityUUID;
- (id)_didCompleteWithError;
- (bool)_isBackground;
- (long long)_numberOfRetries;
- (id)_resumeTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)set_activityUUID:(id)arg1;
- (void)set_didCompleteWithError:(id)arg1;
- (void)set_isBackground:(bool)arg1;
- (void)set_numberOfRetries:(long long)arg1;
- (void)set_resumeTime:(id)arg1;

@end
