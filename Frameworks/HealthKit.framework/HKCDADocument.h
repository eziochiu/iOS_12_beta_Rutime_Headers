/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCDADocument : NSObject {
    NSString * _authorName;
    NSData * _compressedDocumentData;
    NSString * _custodianName;
    NSData * _internalDocumentData;
    NSString * _patientName;
    NSString * _title;
}

@property (readonly, copy) NSString *authorName;
@property (readonly, copy) NSString *custodianName;
@property (readonly, copy) NSData *documentData;
@property (readonly, copy) NSString *patientName;
@property (readonly, copy) NSString *title;

- (void).cxx_destruct;
- (bool)_compressDocumentDataForTransfer:(id*)arg1;
- (id)_compressedDocumentData;
- (bool)_decompressDocumentDataForDelivery:(id*)arg1;
- (id)_descriptionFieldTitle:(id)arg1 content:(id)arg2 maxSize:(unsigned long long)arg3;
- (id)_validateConfiguration;
- (id)authorName;
- (id)custodianName;
- (id)description;
- (id)documentData;
- (void)encodeWithCoder:(id)arg1 omittedContentFlags:(long long)arg2;
- (id)initWithCoder:(id)arg1 omittedContentFlags:(long long)arg2;
- (id)initWithDocumentData:(id)arg1 compressedDocumentData:(id)arg2 title:(id)arg3 patientName:(id)arg4 authorName:(id)arg5 custodianName:(id)arg6;
- (id)patientName;
- (id)title;

@end
