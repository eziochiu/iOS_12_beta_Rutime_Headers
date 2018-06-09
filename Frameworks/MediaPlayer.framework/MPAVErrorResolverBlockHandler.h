/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVErrorResolverBlockHandler : NSObject <MPAVErrorResolverDelegate> {
    MPAVErrorResolver * _errorResolver;
    id /* block */  _resolutionHandler;
    MPAVErrorResolverBlockHandler * _strongSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPAVErrorResolver *errorResolver;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ resolutionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)errorResolver;
- (void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(long long)arg3;
- (id)initWithErrorResolver:(id)arg1;
- (id /* block */)resolutionHandler;
- (void)resolveError:(id)arg1;
- (void)setResolutionHandler:(id /* block */)arg1;

@end
