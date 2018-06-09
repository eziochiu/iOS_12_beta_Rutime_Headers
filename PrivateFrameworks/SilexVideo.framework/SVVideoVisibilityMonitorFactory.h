/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoVisibilityMonitorFactory : NSObject <SVVisibilityMonitorFactory> {
    <SVVideoVisiblePercentageManager> * _videoVisiblePercentageManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoVisiblePercentageManager> *videoVisiblePercentageManager;

- (void).cxx_destruct;
- (id)createVisibilityMonitorForVideo:(id)arg1;
- (id)initWithVideoVisiblePercentageManager:(id)arg1;
- (id)videoVisiblePercentageManager;

@end
