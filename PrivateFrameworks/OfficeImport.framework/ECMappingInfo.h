/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECMappingInfo : NSObject {
    NSString * mSheetName;
}

@property (nonatomic, readonly) int columnOffset;
@property (nonatomic, readonly) int rowOffset;
@property (nonatomic, readonly) NSString *sheetName;

+ (id)mappingInfoWithSheetName:(id)arg1;

- (int)columnOffset;
- (void)dealloc;
- (id)initWithSheetName:(id)arg1;
- (int)rowOffset;
- (id)sheetName;

@end
