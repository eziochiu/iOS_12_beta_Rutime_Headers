/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
 */

@interface HDReferenceExtractionRequest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _FHIRResourceData;
    NSArray * _resources;
    NSURL * _serverBaseURL;
}

@property (nonatomic, readonly, copy) NSArray *FHIRResourceData;
@property (nonatomic, readonly, copy) NSArray *resources;
@property (nonatomic, readonly, copy) NSURL *serverBaseURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRResourceData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResources:(id)arg1 FHIRResourceData:(id)arg2 serverBaseURL:(id)arg3;
- (id)resources;
- (id)serverBaseURL;

@end
