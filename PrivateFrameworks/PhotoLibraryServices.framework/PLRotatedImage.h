/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRotatedImage : UIImage {
    bool  _wasRotated;
}

@property (nonatomic) bool wasRotated;

- (void)setWasRotated:(bool)arg1;
- (bool)wasRotated;

@end
