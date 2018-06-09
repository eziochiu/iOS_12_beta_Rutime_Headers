/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAudioSessionRoutingAssertion : NSObject {
    NSString * _debugLabel;
    long long  _priority;
    bool  _requireAudioCategoryActive;
    long long  _routeDirection;
    unsigned long long  _sessionOptions;
}

@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) bool requireAudioCategoryActive;
@property (nonatomic, readonly) long long routeDirection;
@property (nonatomic) unsigned long long sessionOptions;

+ (id)newCaptureAssertionNamed:(id)arg1;
+ (id)newForegroundAppAssertion;
+ (id)newForegroundAppAssertionRequiringActiveAudioSession:(bool)arg1;
+ (id)newPreviewAssertionNamed:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDebugLabel:(id)arg1 routeDirection:(long long)arg2 priority:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)priority;
- (bool)requireAudioCategoryActive;
- (long long)routeDirection;
- (unsigned long long)sessionOptions;
- (void)setSessionOptions:(unsigned long long)arg1;

@end
