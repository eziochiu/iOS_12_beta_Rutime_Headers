/* made by EzioChiu.
 */

@protocol PLPhotoEditDataExporter <NSObject>

@required

+ (NSData *)dataFromPhotoEditModel:(PLPhotoEditModel *)arg1 outFormatIdentifier:(id*)arg2 outFormatVersion:(id*)arg3 exportProperties:(PLPhotoEditExportProperties *)arg4;

@end
