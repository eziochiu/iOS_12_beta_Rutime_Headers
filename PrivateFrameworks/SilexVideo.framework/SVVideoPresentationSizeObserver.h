/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPresentationSizeObserver : NSObject <SVVideoPresentationSizeObserving> {
    <SVPlayerItemObserving> * _playerItemObserver;
    struct CGSize { 
        double width; 
        double height; 
    }  _presentationSize;
    SVKeyValueObserver * _presentationSizeObserver;
    id /* block */  changeBlock;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerItemObserving> *playerItemObserver;
@property (nonatomic) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic, readonly) SVKeyValueObserver *presentationSizeObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)initWithPlayerItemObserver:(id)arg1;
- (void)onChange:(id /* block */)arg1;
- (id)playerItemObserver;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)presentationSizeObserver;
- (void)setPresentationSize:(struct CGSize { double x1; double x2; })arg1;

@end
