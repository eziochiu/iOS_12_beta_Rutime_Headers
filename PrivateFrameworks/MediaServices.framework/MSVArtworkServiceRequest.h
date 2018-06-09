/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVArtworkServiceRequest : NSObject <NSSecureCoding>

@property (nonatomic, readonly) Class operationClass;
@property (nonatomic, readonly) long long operationPriority;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)operationClass;
- (long long)operationPriority;

@end
