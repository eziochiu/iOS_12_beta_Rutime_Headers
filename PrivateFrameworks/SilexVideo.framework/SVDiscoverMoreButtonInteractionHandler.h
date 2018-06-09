/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVDiscoverMoreButtonInteractionHandler : NSObject <SVInteractionHandling> {
    <SVDiscoverMoreInteractionHandling> * _discoverMoreInteractionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVDiscoverMoreInteractionHandling> *discoverMoreInteractionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)discoverMoreInteractionHandler;
- (void)handleInteractionWithContext:(id)arg1;
- (id)initWithDiscoverMoreInteractionHandler:(id)arg1;

@end
