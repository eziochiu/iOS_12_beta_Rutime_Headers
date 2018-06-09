/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteMediaPickerController : _UIRemoteViewController {
    MPMediaPickerController * _mediaPickerController;
}

@property (nonatomic) MPMediaPickerController *mediaPickerController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (id)mediaPickerController;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)setMediaPickerController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
