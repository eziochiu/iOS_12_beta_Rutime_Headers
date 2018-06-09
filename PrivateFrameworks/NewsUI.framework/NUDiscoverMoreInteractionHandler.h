/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUDiscoverMoreInteractionHandler : NSObject <SVDiscoverMoreInteractionHandling> {
    <NUURLHandling> * _URLHandler;
    NUDiscoverMoreVideosInfo * _discoverMoreVideosInfo;
}

@property (nonatomic, readonly) <NUURLHandling> *URLHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NUDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLHandler;
- (id)discoverMoreVideosInfo;
- (void)handleInteraction;
- (id)init;
- (id)initWithURLHandler:(id)arg1 discoverMoreVideosInfo:(id)arg2;

@end
