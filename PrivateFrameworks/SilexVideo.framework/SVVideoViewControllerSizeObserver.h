/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoViewControllerSizeObserver : NSObject <SVVideoViewControllerSizeObserving> {
    SVKeyValueObserver * _boundsObserver;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    SVVideoViewController * _videoViewController;
    id /* block */  changeBlock;
}

@property (nonatomic, readonly) SVKeyValueObserver *boundsObserver;
@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVVideoViewController *videoViewController;

- (void).cxx_destruct;
- (id)boundsObserver;
- (id /* block */)changeBlock;
- (id)initWithVideoViewController:(id)arg1;
- (void)onChange:(id /* block */)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)videoViewController;

@end
