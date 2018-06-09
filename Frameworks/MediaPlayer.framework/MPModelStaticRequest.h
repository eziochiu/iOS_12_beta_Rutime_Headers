/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStaticRequest : MPModelRequest {
    MPModelStaticResponse * _staticResponse;
}

@property (nonatomic, retain) MPModelStaticResponse *staticResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setStaticResponse:(id)arg1;
- (id)staticResponse;

@end
