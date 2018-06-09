/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryArtwork : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ML3Artwork * _artwork;
    MPMediaLibraryArtworkRequest * _artworkRequest;
    NSArray * _validSizes;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) ML3Artwork *artwork;
@property (nonatomic) MPMediaLibraryArtworkRequest *artworkRequest;
@property (nonatomic, copy) NSDictionary *effectsMetadata;
@property (nonatomic, readonly, copy) NSURL *originalFileURL;
@property (nonatomic, readonly) NSArray *validSizes;

+ (bool)artworkExistsForRequest:(id)arg1;
+ (id)availableArtworkWithRequest:(id)arg1;
+ (void)cancelFetchingArtworkForRequest:(id)arg1;
+ (void)fetchArtworkForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchArtworkInfoForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)needsToFetchArtworkForRequest:(id)arg1;

- (void).cxx_destruct;
- (id)accessQueue;
- (id)artwork;
- (id)artworkRequest;
- (id)effectsMetadata;
- (unsigned long long)hash;
- (id)imageFileURLForEffect:(id)arg1;
- (id)imageFileURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)originalFileURL;
- (void)setAccessQueue:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkRequest:(id)arg1;
- (void)setEffectsMetadata:(id)arg1;
- (id)validSizes;

@end
