/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPPictureInPictureController : NSObject {
    RPPictureInPictureWindow * _pictureInPictureWindow;
}

@property (nonatomic, retain) RPPictureInPictureWindow *pictureInPictureWindow;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)hidePictureInPictureWindow;
- (id)pictureInPictureWindow;
- (void)setPictureInPictureWindow:(id)arg1;
- (void)showPictureInPictureWindowWithContentView:(id)arg1;

@end
