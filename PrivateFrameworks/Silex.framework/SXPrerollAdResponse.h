/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPrerollAdResponse : SXAdResponse {
    <SXPrerollAdMetadata> * _prerollAdMetadata;
    double  _skipDuration;
    NSURL * _videoURL;
}

@property (nonatomic, retain) <SXPrerollAdMetadata> *prerollAdMetadata;
@property (nonatomic) double skipDuration;
@property (nonatomic, retain) NSURL *videoURL;

- (void).cxx_destruct;
- (id)prerollAdMetadata;
- (void)setPrerollAdMetadata:(id)arg1;
- (void)setSkipDuration:(double)arg1;
- (void)setVideoURL:(id)arg1;
- (double)skipDuration;
- (id)videoURL;

@end
