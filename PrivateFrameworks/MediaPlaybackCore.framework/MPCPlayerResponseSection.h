/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerResponseSection : NSObject {
    MPModelGenericObject * _metadataObject;
    MPCPlayerResponse * _response;
}

@property (nonatomic, readonly) MPModelGenericObject *metadataObject;
@property (nonatomic, readonly) MPCPlayerResponse *response;

- (void).cxx_destruct;
- (id)initWithModelGenericObject:(id)arg1 response:(id)arg2;
- (id)metadataObject;
- (id)remove;
- (id)response;

@end
