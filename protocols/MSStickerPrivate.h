/* made by EzioChiu.
 */

@protocol MSStickerPrivate <NSObject>

@required

- (NSData *)data;
- (NSURL *)imageFileURL;
- (NSString *)localizedDescription;

@end
