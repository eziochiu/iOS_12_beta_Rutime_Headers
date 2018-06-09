/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlaylistSkipPolicyHandler : NSObject <SVVideoSkipPolicy> {
    <SVContentTransitionTypeProviding> * _contentTransitionTypeProvider;
}

@property (nonatomic, readonly) bool canSkip;
@property (nonatomic, readonly) <SVContentTransitionTypeProviding> *contentTransitionTypeProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canSkip;
- (id)contentTransitionTypeProvider;
- (id)initWithContentTransitionTypeProvider:(id)arg1;

@end
