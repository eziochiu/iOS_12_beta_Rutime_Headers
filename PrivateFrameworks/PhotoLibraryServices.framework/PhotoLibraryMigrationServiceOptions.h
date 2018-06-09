/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PhotoLibraryMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientBundleId;
    unsigned char  _option;
    NSString * _suggestedDestinationName;
}

@property (readonly) NSString *clientBundleId;
@property unsigned char option;
@property (copy) NSString *suggestedDestinationName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientBundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPLMSOption:(unsigned char)arg1;
- (unsigned char)option;
- (void)setOption:(unsigned char)arg1;
- (void)setSuggestedDestinationName:(id)arg1;
- (id)suggestedDestinationName;

@end