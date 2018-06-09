/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVScrubbingPolicyHandler : NSObject <SVScrubbingPolicyHandling> {
    unsigned long long  _policy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long policy;
@property (readonly) Class superclass;

- (id)initWithScrubbingPolicy:(unsigned long long)arg1;
- (unsigned long long)policy;
- (bool)scrubbingAllowedForVideo:(id)arg1;

@end
