/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding> {
    NSDictionary * _dict;
}

@property (nonatomic, readonly) unsigned char requestType;

+ (id)counterLogInfoWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_formattedCSVString;
- (id)_formattedString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)recvBytes;
- (unsigned long long)recvBytesForMode:(unsigned char)arg1;
- (unsigned char)requestType;
- (unsigned long long)xmitBytes;
- (unsigned long long)xmitBytesForMode:(unsigned char)arg1;

@end
