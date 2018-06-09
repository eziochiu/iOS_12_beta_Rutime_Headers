/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoVisibilityMonitorManager : NSObject <SVVideoVisibilityMonitorProviding> {
    <SVVisibilityMonitorFactory> * _videoVisibilityMonitorFactory;
    SVWeakObjectCache * _visibilityMonitors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVisibilityMonitorFactory> *videoVisibilityMonitorFactory;
@property (nonatomic, readonly) SVWeakObjectCache *visibilityMonitors;

- (void).cxx_destruct;
- (id)initWithVideoVisibilityMonitorFactory:(id)arg1;
- (id)videoVisibilityMonitorFactory;
- (id)visibilityMonitorForVideo:(id)arg1;
- (id)visibilityMonitors;

@end
