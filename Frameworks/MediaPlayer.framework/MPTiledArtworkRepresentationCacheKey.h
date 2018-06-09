/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTiledArtworkRepresentationCacheKey : NSObject <MPArtworkDataSourceVisualIdenticality> {
    id  _entityIdentifier;
    id  _namespaceIdentifier;
    unsigned long long  _numberOfColumns;
    unsigned long long  _numberOfRows;
    id  _revisionIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledFittingSize;
    double  _tileSpacing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTiledArtworkRequest:(id)arg1 scaledFittingSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (id)stringRepresentation;

@end
