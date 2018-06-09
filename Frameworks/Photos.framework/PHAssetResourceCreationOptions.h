/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResourceCreationOptions : NSObject <NSCopying> {
    NSDate * _alternateImportImageDate;
    NSString * _originalFilename;
    bool  _shouldIngestInPlace;
    bool  _shouldMoveFile;
    NSString * _uniformTypeIdentifier;
}

@property (nonatomic, retain) NSDate *alternateImportImageDate;
@property (nonatomic, copy) NSString *originalFilename;
@property (nonatomic) bool shouldIngestInPlace;
@property (nonatomic) bool shouldMoveFile;
@property (nonatomic, copy) NSString *uniformTypeIdentifier;

- (void).cxx_destruct;
- (id)alternateImportImageDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)originalFilename;
- (id)propertyListRepresentation;
- (void)setAlternateImportImageDate:(id)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setShouldIngestInPlace:(bool)arg1;
- (void)setShouldMoveFile:(bool)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (bool)shouldIngestInPlace;
- (bool)shouldMoveFile;
- (id)uniformTypeIdentifier;

@end
