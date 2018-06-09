/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

@interface NUAVPlayerView : UIView {
    <NUAVPlayerViewDelegate> * _delegate;
    AVPlayer * _player;
    bool  _readyForDisplay;
    int  _updateReadyForDisplayID;
}

@property (nonatomic) <NUAVPlayerViewDelegate> *delegate;
@property (nonatomic, retain) AVPlayer *player;
@property (getter=isReadyForDisplay, setter=_setReadyForDisplay:, nonatomic) bool readyForDisplay;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_setReadyForDisplay:(bool)arg1;
- (void)_updateReadyForDisplayWithID:(void *)arg1; // needs 1 arg types, found 2: /* Warning: Unrecognized filer type: '' using 'void*' */ void*, int
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isReadyForDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (void)setDelegate:(id)arg1;
- (void)setPlayer:(id)arg1;

@end
