/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARScreenRecording : NSObject {
    UIViewController * _parentViewController;
    bool  _saveInPhotosLibrary;
}

@property (nonatomic, retain) UIViewController *parentViewController;
@property (nonatomic) bool saveInPhotosLibrary;

- (void).cxx_destruct;
- (void)alertUserWithTitle:(id)arg1 message:(id)arg2;
- (id)initWith:(id)arg1;
- (id)parentViewController;
- (bool)saveInPhotosLibrary;
- (void)setParentViewController:(id)arg1;
- (void)setSaveInPhotosLibrary:(bool)arg1;
- (void)start;
- (void)stop;

@end
