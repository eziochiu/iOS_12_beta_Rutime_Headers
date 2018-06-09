/* made by EzioChiu.
 */

@protocol PFFile

@required

- (NSDate *)fileCreationDate;
- (NSString *)fileExtension;
- (NSDate *)fileModificationDate;
- (NSString *)fileName;
- (unsigned long long)fileSize;
- (bool)isDirectory;
- (NSString *)path;
- (NSURL *)url;
- (NSString *)uti;

@end
