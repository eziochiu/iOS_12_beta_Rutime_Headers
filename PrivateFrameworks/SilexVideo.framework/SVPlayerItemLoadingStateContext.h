/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayerItemLoadingStateContext : NSObject <SVPlayerItemLoadingStateContext> {
    NSError * _error;
    AVPlayerItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPlayerItem *item;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)error;
- (id)initWithError:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)item;

@end
