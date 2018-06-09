/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _WLKUIMediaPlayerImageLoaderOperationSet : NSObject {
    MPArtworkCatalog * _artworkCatalog;
    <MPArtworkDataSource> * _dataSource;
}

@property (nonatomic, retain) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, retain) <MPArtworkDataSource> *dataSource;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)dataSource;
- (void)setArtworkCatalog:(id)arg1;
- (void)setDataSource:(id)arg1;

@end
