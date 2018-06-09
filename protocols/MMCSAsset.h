/* made by EzioChiu.
 */

@protocol MMCSAsset <NSObject>

@required

- (NSString *)MMCSAccessHeader;
- (NSDate *)MMCSAccessHeaderTimeStamp;
- (NSError *)MMCSError;
- (NSData *)MMCSHash;
- (unsigned int)MMCSItemFlags;
- (unsigned long long)MMCSItemID;
- (unsigned long long)MMCSItemSize;
- (NSString *)MMCSItemType;
- (int)MMCSOpenNewFileDescriptor;
- (NSString *)MMCSReceipt;
- (NSString *)MMCSUTI;
- (void)setMMCSAccessHeader:(NSString *)arg1;
- (void)setMMCSAccessHeaderTimeStamp:(NSDate *)arg1;
- (void)setMMCSError:(NSError *)arg1;
- (void)setMMCSHash:(NSData *)arg1;
- (void)setMMCSItemFlags:(unsigned int)arg1;
- (void)setMMCSItemID:(unsigned long long)arg1;
- (void)setMMCSItemSize:(unsigned long long)arg1;
- (void)setMMCSReceipt:(NSString *)arg1;
- (void)setMMCSUTI:(NSString *)arg1;

@end
