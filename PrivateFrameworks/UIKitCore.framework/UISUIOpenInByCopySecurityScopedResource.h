/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISUIOpenInByCopySecurityScopedResource : UISUISecurityScopedResource {
    NSString * _bookmarkExportDataEncodedAsString;
}

@property (nonatomic, copy) NSString *bookmarkExportDataEncodedAsString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmarkExportDataEncodedAsString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBookmarkExportDataEncodedAsString:(id)arg1;

@end
