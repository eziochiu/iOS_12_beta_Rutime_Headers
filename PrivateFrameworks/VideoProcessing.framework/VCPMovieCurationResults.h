/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMovieCurationResults : NSObject {
    NSMutableArray * _highlights;
    PHAsset * _phAsset;
}

@property (nonatomic, readonly, retain) NSMutableArray *highlights;
@property (nonatomic, readonly) PHAsset *phAsset;

- (void).cxx_destruct;
- (id)highlights;
- (id)initWithPHAsset:(id)arg1;
- (id)phAsset;

@end
