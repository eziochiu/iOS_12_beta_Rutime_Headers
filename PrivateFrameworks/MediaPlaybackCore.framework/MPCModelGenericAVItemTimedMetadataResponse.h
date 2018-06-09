/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse {
    NSData * _adamIDData;
    MPModelResponse * _personalizationResponse;
    MPCModelGenericAVItemTimedMetadataStreamFields * _streamFields;
    MPSectionedCollection * _unpersonalizedContentDescriptors;
}

@property (nonatomic, copy) NSData *adamIDData;
@property (nonatomic, retain) MPCModelGenericAVItemTimedMetadataStreamFields *streamFields;
@property (nonatomic, copy) MPSectionedCollection *unpersonalizedContentDescriptors;

- (void).cxx_destruct;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (id)adamIDData;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;
- (void)setAdamIDData:(id)arg1;
- (void)setStreamFields:(id)arg1;
- (void)setUnpersonalizedContentDescriptors:(id)arg1;
- (id)streamFields;
- (id)unpersonalizedContentDescriptors;

@end
