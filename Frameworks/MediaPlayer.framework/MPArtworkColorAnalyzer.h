/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkColorAnalyzer : NSObject {
    long long  _algorithm;
    UIImage * _image;
}

@property (nonatomic, readonly) long long algorithm;
@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (id)_fallbackColorAnalysis;
- (long long)algorithm;
- (void)analyzeWithCompletionHandler:(id /* block */)arg1;
- (id)image;
- (id)initWithImage:(id)arg1 algorithm:(long long)arg2;

@end
