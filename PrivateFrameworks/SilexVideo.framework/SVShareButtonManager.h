/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVShareButtonManager : NSObject <SVVideoTransitionObserver> {
    AVControlItem * _controlItem;
    <SVVideoSharingPolicy> * _sharingPolicy;
}

@property (nonatomic, readonly) AVControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoSharingPolicy> *sharingPolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controlItem;
- (id)initWithShareControlItem:(id)arg1 sharingPolicy:(id)arg2;
- (id)sharingPolicy;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
