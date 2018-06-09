/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeIrisReferenceMovieRequestMessage : BWNodeMessage {
    BWIrisMovieInfo * _irisMovieInfo;
}

@property (readonly) BWIrisMovieInfo *irisMovieInfo;

+ (id)newMessageWithIrisMovieInfo:(id)arg1;

- (id)_initWithIrisMovieInfo:(id)arg1;
- (void)dealloc;
- (id)irisMovieInfo;

@end
