/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHKeynoteState : GQHState {
    int  mCurrentSlide;
    int  mProgressiveIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  mSlideSize;
}

- (int)currentSlide;
- (void)incrementCurrentSlide;
- (int)progressiveIndex;
- (void)setProgressiveIndex:(int)arg1;
- (void)setSlideSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldMapLinkWithUrl:(struct __CFString { }*)arg1;
- (bool)shouldStreamContent;
- (struct CGSize { double x1; double x2; })slideSize;

@end
