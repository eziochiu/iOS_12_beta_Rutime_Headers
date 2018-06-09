/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMimeTextAttachment : MFMessageTextAttachment

- (id)_displayedMimePart;
- (unsigned int)approximateSize;
- (void)download;
- (bool)hasBeenDownloaded;
- (id)initWithMimePart:(id)arg1;
- (id)persistentUniqueIdentifier;

@end
