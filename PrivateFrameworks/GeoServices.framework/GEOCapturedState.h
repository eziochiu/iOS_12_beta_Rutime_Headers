/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCapturedState : NSObject <NSKeyedArchiverDelegate, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly) const char *decoderType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSData *stateData;
@property (readonly) Class superclass;

+ (const char *)decoderType;
+ (id)fromStateData:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (const char *)decoderType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stateData;

@end
