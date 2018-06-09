/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
 */

@interface HDOriginalFHIRResourceObject : HDFHIRResourceObject {
    HDHRSOriginInformation * _originInformation;
}

@property (nonatomic, readonly, copy) HDHRSOriginInformation *originInformation;

+ (id)resourceObjectWithData:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 extractionHints:(unsigned long long)arg5 originVersion:(struct { long long x1; long long x2; long long x3; })arg6 originBuild:(id)arg7 error:(id*)arg8;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithResourceIdentifier:(id)arg1 JSONObject:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 extractionHints:(unsigned long long)arg6 originInformation:(id)arg7;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)originInformation;

@end
