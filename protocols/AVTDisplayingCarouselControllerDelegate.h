/* made by EzioChiu.
 */

@protocol AVTDisplayingCarouselControllerDelegate <NSObject>

@optional

- (void)carouselController:(id <AVTDisplayingCarouselController>)arg1 didFocusOnView:(AVTView *)arg2;
- (void)carouselController:(id <AVTDisplayingCarouselController>)arg1 didMoveToNearestRecord:(id <AVTAvatarRecord>)arg2 withFactor:(double)arg3;
- (void)carouselController:(id <AVTDisplayingCarouselController>)arg1 didMoveTowardRecord:(id <AVTAvatarRecord>)arg2 withFactor:(double)arg3;
- (void)carouselController:(id <AVTDisplayingCarouselController>)arg1 didUpdateWithRecord:(id <AVTAvatarRecord>)arg2;
- (void)carouselController:(id <AVTDisplayingCarouselController>)arg1 willEndFocusOnView:(AVTView *)arg2;

@end
