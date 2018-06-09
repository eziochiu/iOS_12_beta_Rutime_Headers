/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest {
    double  _destinationCompressionQuality;
    long long  _destinationFormat;
    NSURL * _destinationURL;
    NSURL * _sourceURL;
}

@property (nonatomic) double destinationCompressionQuality;
@property (nonatomic) long long destinationFormat;
@property (nonatomic, copy) NSURL *destinationURL;
@property (nonatomic, copy) NSURL *sourceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (double)destinationCompressionQuality;
- (long long)destinationFormat;
- (id)destinationURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 destinationFormat:(long long)arg3;
- (Class)operationClass;
- (long long)operationPriority;
- (void)setDestinationCompressionQuality:(double)arg1;
- (void)setDestinationFormat:(long long)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;

@end
