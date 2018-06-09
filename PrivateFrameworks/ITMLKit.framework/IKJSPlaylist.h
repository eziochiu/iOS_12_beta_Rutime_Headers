/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist> {
    IKAppPlaylistBridge * _bridge;
}

@property (nonatomic, readonly) IKAppPlaylistBridge *bridge;
@property (nonatomic) long long endAction;
@property (nonatomic, readonly) unsigned long long length;

- (void).cxx_destruct;
- (id)bridge;
- (void)dealloc;
- (long long)endAction;
- (id)init;
- (id)item:(long long)arg1;
- (unsigned long long)length;
- (id)pop;
- (void)push:(id)arg1;
- (void)setEndAction:(long long)arg1;
- (id)splice:(long long)arg1 :(long long)arg2 :(id)arg3;

@end
