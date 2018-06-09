/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISliderContent : NSObject {
    UIImage * _maxTrack;
    UIImage * _minTrack;
    UIImage * _thumb;
}

@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, retain) UIImage *maxTrack;
@property (nonatomic, retain) UIImage *minTrack;
@property (nonatomic, retain) UIImage *thumb;

- (void).cxx_destruct;
- (bool)isEmpty;
- (id)maxTrack;
- (id)minTrack;
- (void)setMaxTrack:(id)arg1;
- (void)setMinTrack:(id)arg1;
- (void)setThumb:(id)arg1;
- (id)thumb;

@end
